module cache(
    input [31:0] address, write_data_in,  // Address to access and data to write in a write instruction
    input write_in, clk, read_in, reset,  // Control signals (write, read, clk, reset)
    output reg [31:0] read_data,          // Data to be read on a read instruction
    output reg [31:0] mem_read_address,   // Address to read from memory on a cache miss
    output reg [31:0] mem_write_address,  // Address to write to memory in case of a cache miss
    output reg mem_access_status,         // Memory access status for hazard detection
    output reg mem_write,                 // Memory write signal for cache write through
    output reg [4:0] countR,              // Cache access counter (or other use)
    output reg [127:0] mem_write_data,    // Data to be written to memory
    output reg loc_access                 // Local access status for cache access
);

    // Cache states
    reg [127:0] cache_memory [0:31];  // 32-line cache (for simplicity)
    reg [31:0] tag_memory [0:31];     // 32-bit tag storage for cache lines

    wire [26:0] tag_in;               // Extracted tag from the address
    wire [4:0] index_in;              // Extracted index from the address
    wire hit;                         // Cache hit or miss
    wire [127:0] write_data_extended; // Data extended for write (from 32 to 128 bits)

    // Tag extraction (assume cache index size of 5 bits for simplicity)
    assign tag_in = address[31:5];    // 27-bit tag from address (assuming 5-bit index and 5-bit offset)
    assign index_in = address[4:0];   // 5-bit index into the cache

    // Zero-extend the 32-bit write data to 128 bits for cache consistency
    assign write_data_extended = {96'b0, write_data_in}; // Assuming low 32-bits of write data to be written

    // Cache hit logic (simple valid bit check)
    assign hit = (tag_memory[index_in] == {5'b0, tag_in}) && (cache_memory[index_in] != 128'b0);

    // Read from cache logic
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            read_data <= 32'b0;
            mem_access_status <= 0;
            loc_access <= 0;
        end else if (read_in) begin
            if (hit) begin
                read_data <= cache_memory[index_in][31:0]; // Read the first 32 bits of cache line
                mem_access_status <= 0;   // No memory access, cache hit
                loc_access <= 1;          // Local cache access
            end else begin
                read_data <= 32'b0;       // No data on cache miss
                mem_read_address <= address;  // Set memory address for read miss
                mem_access_status <= 1;   // Indicate memory access (stall needed)
                loc_access <= 0;          // No local cache access (miss)
            end
        end
    end

    // Write to cache logic (handling both cache write and memory write)
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            mem_write <= 0;
            mem_write_address <= 32'b0;
            mem_write_data <= 128'b0;
            countR <= 5'b0;
        end else if (write_in) begin
            if (hit) begin
                // Write to cache if it's a hit
                cache_memory[index_in] <= {write_data_extended};
                mem_write <= 0; // No need to write to memory, cache hit
            end else begin
                // Cache miss - write through to memory
                mem_write_address <= address;          // Address for memory write
                mem_write_data <= {write_data_extended}; // Data to write to memory
                mem_write <= 1;                        // Indicate memory write
                cache_memory[index_in] <= {write_data_extended}; // Write data to cache
            end
        end
    end

    // // Counting logic (example of cache accesses)
    // always @(posedge clk) begin
    //     if (reset) begin
    //         countR <= 5'b0; // Reset counter on reset
    //     end else if (read_in || write_in) begin
    //         countR <= countR + 1; // Increment counter on cache accesses
    //     end
    // end

endmodule

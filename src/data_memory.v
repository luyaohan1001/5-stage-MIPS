module data_memory(
    input clk,
    input write,
    input [31:0] read_address,
    input [31:0] write_address,
    input [127:0] write_data,
    output reg [127:0] read_data
);

    reg [31:0] mem [0:65535]; // 32-bit memory array (4GB address space)
    reg [127:0] read_buffer;        // Buffer to hold the data to be read

    // Sequential block for read/write operations
    always @(posedge clk) begin
        if (write) begin
            // Write data to memory in words
            mem[write_address]         <= write_data[31:0];
            mem[write_address + 1]     <= write_data[63:32];
            mem[write_address + 2]     <= write_data[95:64];
            mem[write_address + 3]     <= write_data[127:96];
        end
        else begin
            // Read data from memory in words
            read_buffer[31:0]     <= mem[read_address];
            read_buffer[63:32]    <= mem[read_address + 1];
            read_buffer[95:64]    <= mem[read_address + 2];
            read_buffer[127:96]   <= mem[read_address + 3];
        end
    end

    // Output the read data
    always @(*) begin
        read_data = read_buffer;
    end

endmodule

module cache_tb();

reg [31:0] address, write_data_in;
reg write, clk, read;
wire [4:0] count;
wire [31:0] read_data, mem_read_address, mem_write_address;
wire [127:0] mem_write_data, mem_input;
wire mem_access_status, mem_write;


cache cache(
	.mem_input(mem_input),
	.address(address),
	.write_in(write),
	.clk(clk),
	.write_data_in(write_data_in),
	.countR(count),
	.read_in(read),
	.read_data(read_data),
	.mem_read_address(mem_read_address),
	.mem_write_address(mem_write_address),
	.mem_write_data(mem_write_data),
	.mem_access_status(mem_access_status),
	.mem_write(mem_write)
);


data_memory dm(
	.clk(clk),
	.write(mem_write),
	.read_address(mem_read_address),
	.count(count),
	.write_address(mem_write_address),
	.write_data(mem_write_data),
	.read_data(mem_input)
);


initial begin
	clk = 1;
	forever #10 clk = ~clk;
end
initial begin

	write = 1'b1;
	read = 1'b0;
	write_data_in = 32'd9;
	address = 32'd0;
	#20;
end
endmodule

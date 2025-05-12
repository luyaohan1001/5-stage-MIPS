/*
Testbench for datapath,This is also the top module testbench
*/

`timescale 1ns/1ns

module TOP_tb();

reg reset,clk;

datapath mips(.clk(clk), .reset(reset));

initial begin
	clk = 1;
	forever #10 clk = ~clk;	//initiate clock sequence
end

initial begin
	reset = 1;
	#5;		//reset at 5ns.
	reset = 0;
	//#200;
end

endmodule


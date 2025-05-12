/*
Testbench for datapath,This is also the top module testbench
*/

`timescale 1ns/1ns

module TOP_tb();

reg reset,clk;

umips_top umips_top(.clk(clk), .reset(reset));

initial begin
	clk = 1;
	forever #10 clk = ~clk;	//initiate clock sequence
end

initial begin
	reset = 0;
	#10;
	reset = 1;
	#10;		//reset at 5ns.
	reset = 0;
end

// Waveform generation
initial begin
    $dumpfile("test.vcd");  // Specify the VCD file to store the waveform
		$dumpvars(0, umips_top);
end

// End simulation after 1000 time units
initial begin
    #1000;
    $finish;
end


endmodule


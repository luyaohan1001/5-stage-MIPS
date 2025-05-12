`timescale 1ns/1ns

/*
1. 32-bit input port for addressing
2. 32-bit output port for loading instructions from the memory

$memread(?filename?,register_bank_name) inside an initial block in order
to initialize your instruction memory.
*/

module instr_memory(input [31:0] address, output [31:0] read_data);
  reg [7:0] instr_mem [65535:0]; 	//ram size should be 65536(for 32 bit addresses) by 32
  initial begin
    $readmemb("../prob.bin",instr_mem);	//loads the instructing problem encoing binary file
  end
  assign read_data = {instr_mem[address],instr_mem[address+1],instr_mem[address+2],instr_mem[address+3]};
endmodule


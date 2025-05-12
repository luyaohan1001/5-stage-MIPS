`timescale 1ns/1ns


module Pipeline_RegEM(
  input CLK,
  input reset,
  input nEN,
  input [31:0] InstrE,
  output [31:0] InstrM,
  input  MemReadE,
  output MemReadM,
  input  RegWriteE,
  output RegWriteM,
  input  MemtoRegE,
  output MemtoRegM,
  input  MemWiteE,
  output MemWiteM,
  input  mult_finishE,
  output mult_finishM,
  input  [1:0] Out_selectE,
  output [1:0] Out_selectM,
  input  [63:0] mult_resultE,
  output [63:0] mult_resultM,
  input  [31:0] ALUoutE,
  output [31:0] ALUoutM,
  input  [31:0] write_dataE,
  output [31:0] write_dataM,
  input  [4:0] WriteRegE,
  output [4:0] WriteRegM
);
  reg MemReadEM;
  reg RegWriteEM;
  reg MemtoRegEM;
  reg MemWiteEM;
  reg mult_finishEM;
  reg [1:0] Out_selectEM;
  reg [63:0] mult_resultEM;
  reg [31:0] ALUoutEM;
  reg [31:0] write_dataEM;
  reg [4:0] WriteRegEM;
  reg [31:0] instrEM;

always @(posedge CLK) begin
  if (reset) begin
    MemReadEM      <= 1'b0;
    RegWriteEM     <= 1'b0;
    MemtoRegEM     <= 1'b0;
    MemWiteEM      <= 1'b0;
    mult_finishEM  <= 1'b0;
    Out_selectEM   <= 2'b00;
    mult_resultEM  <= 64'b0;
    ALUoutEM       <= 32'b0;
    write_dataEM   <= 32'b0;
    WriteRegEM     <= 5'b0;
    instrEM        <= 32'b0;
  end else if (nEN == 1'b0) begin
    MemReadEM      <= MemReadE;
    RegWriteEM     <= RegWriteE;
    MemtoRegEM     <= MemtoRegE;
    MemWiteEM      <= MemWiteE;
    mult_finishEM  <= mult_finishE;
    Out_selectEM   <= Out_selectE;
    mult_resultEM  <= mult_resultE;
    ALUoutEM       <= ALUoutE;
    write_dataEM   <= write_dataE;
    WriteRegEM     <= WriteRegE;
    instrEM        <= InstrE;
  end
end

  assign MemReadM  = MemReadEM;
  assign RegWriteM = RegWriteEM;
  assign MemtoRegM = MemtoRegEM;
  assign MemWiteM  = MemWiteEM;
  assign Out_selectM  =  Out_selectEM;
  assign mult_resultM =  mult_resultEM;
  assign ALUoutM      =  ALUoutEM;
  assign write_dataM  =  write_dataEM;
  assign WriteRegM    =  WriteRegEM;
  assign mult_finishM = mult_finishEM;
  assign InstrM = instrEM;
endmodule

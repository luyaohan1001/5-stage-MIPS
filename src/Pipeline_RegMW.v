`timescale 1ns/1ns











//Memory - Write
/*
RegWriteMW
MemtoRegMW
[1:0] Out_SelectMW
[31:0] ALUoutMW
[63:0] mult_resultMW
[31:0] ReadDataMW
lui_extendedMW
[4:0]WriteRegMW
*/
module Pipeline_RegMW(
 input CLK,
 input reset,
 input nEN,
 input [31:0] InstrM,
 input  RegWriteM,
 output RegWriteW,
 input  MemtoRegM,
 output MemtoRegW,
 input mult_finishM,
 output mult_finishW,
 input  [1:0] Out_SelectM,
 output [1:0] Out_SelectW,
 input  [31:0] ALUoutM,
 output [31:0] ALUoutW,
 input  [63:0] mult_resultM,
 output [63:0] mult_resultW,
 input  [31:0] ReadDataM,
 output [31:0] ReadDataW,
 input [31:0]  lui_extendedM,
 output [31:0 ]lui_extendedW,
 input  [4:0]WriteRegM,
 output [4:0]WriteRegW
);

  reg RegWriteMW;
  reg MemtoRegMW;
  reg mult_finishMW;
  reg [1:0] Out_SelectMW;
  reg [31:0] ALUoutMW;
  reg [63:0] mult_resultMW;
  reg [31:0] ReadDataMW;
  reg [31:0] lui_extendedMW;
  reg [4:0]WriteRegMW;

always @(posedge CLK)begin
  if(nEN == 1'b0)begin
  RegWriteMW <= RegWriteM;
  MemtoRegMW <= MemtoRegM;
  Out_SelectMW <= Out_SelectM;
  ALUoutMW <= ALUoutM;
  mult_resultMW <= mult_resultM;
  ReadDataMW <= ReadDataM;
  lui_extendedMW <= lui_extendedM;
  WriteRegMW <= WriteRegM;
  mult_finishMW <= mult_finishM;
  end
end

  assign RegWriteW   = RegWriteMW;
  assign MemtoRegW   = MemtoRegMW;
  assign Out_SelectW = Out_SelectMW;
  assign ALUoutW     = ALUoutMW;
  assign mult_resultW = mult_resultMW;
  assign ReadDataW     = ReadDataMW;
  assign lui_extendedW = lui_extendedMW;
  assign WriteRegW     = WriteRegMW;
  assign mult_finishW = mult_finishMW;
endmodule

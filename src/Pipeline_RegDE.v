`timescale 1ns/1ns

module Pipeline_RegDE(
  input CLK,
  input reset,
  input nEN,
  input [31:0] instruction_word_decode_stage_wire,
  output [31:0] InstrE,
  input MemReadD,
  output MemReadE,
  input RegWriteD,
  output RegWriteE,
  input MemtoRegD,
  output MemtoRegE,
  input MemWriteD,
  output MemWriteE,
  input [3:0] ALUControlD,
  output [3:0] ALUControlE,
  input ALUSrcD,
  output ALUSrcE,
  input start_multD,
  output start_multE,
  input RegDstD,
  output RegDstE,
  input [1:0] Out_selectD,
  output [1:0] Out_selectE,
  input [31:0] RF_ReadData1_D,
  output [31:0] RF_ReadData1_E,
  input [31:0] RF_ReadData2_D,
  output [31:0] RF_ReadData2_E,
  input [4:0] RsD,
  output [4:0] RsE,
  input [4:0] RtD,
  output [4:0] RtE,
  input [4:0] RdD,
  output [4:0] RdE,
  input [31:0] SignImmD,
  output [31:0] SignImmE,
  input [31:0] PCplus4D,
  input CLR
);

  reg [31:0] instrDE;
  reg mult_signDE;
  reg MemReadDE;
  reg RegWriteDE;
  reg MemtoRegDE;
  reg MemWriteDE;
  reg [3:0] ALUControlDE;
  reg ALUSrcDE;
  reg start_multDE;
  reg RegDstDE;
  reg [1:0] Out_selectDE;
  reg [31:0] RF_ReadData1_DE;
  reg [31:0] RF_ReadData2_DE;
  reg [4:0] RsDE;
  reg [4:0] RtDE;
  reg [4:0] RdDE;
  reg [31:0] SignImmDE;

  always @(posedge CLK) begin
    if (reset || CLR) begin
      instrDE         <= 32'b0;
      mult_signDE     <= 1'b0;
      MemReadDE       <= 1'b0;
      RegWriteDE      <= 1'b0;
      MemtoRegDE      <= 1'b0;
      MemWriteDE      <= 1'b0;
      ALUControlDE    <= 4'b0;
      ALUSrcDE        <= 1'b0;
      start_multDE    <= 1'b0;
      RegDstDE        <= 1'b0;
      Out_selectDE    <= 2'b0;
      RF_ReadData1_DE <= 32'b0;
      RF_ReadData2_DE <= 32'b0;
      RsDE            <= 5'b0;
      RtDE            <= 5'b0;
      RdDE            <= 5'b0;
      SignImmDE       <= 32'b0;
    end else if (nEN == 1'b0) begin
      instrDE         <= instruction_word_decode_stage_wire;
      MemReadDE       <= MemReadD;
      RegWriteDE      <= RegWriteD;
      MemtoRegDE      <= MemtoRegD;
      MemWriteDE      <= MemWriteD;
      ALUControlDE    <= ALUControlD;
      ALUSrcDE        <= ALUSrcD;
      start_multDE    <= start_multD;
      RegDstDE        <= RegDstD;
      Out_selectDE    <= Out_selectD;
      RF_ReadData1_DE <= RF_ReadData1_D;
      RF_ReadData2_DE <= RF_ReadData2_D;
      RsDE            <= RsD;
      RtDE            <= RtD;
      RdDE            <= RdD;
      SignImmDE       <= SignImmD;
    end
  end

  wire mult_signE;
  assign InstrE         = instrDE;
  assign mult_signE     = mult_signDE;
  assign MemReadE       = MemReadDE;
  assign RegWriteE      = RegWriteDE;
  assign MemtoRegE      = MemtoRegDE;
  assign MemWriteE      = MemWriteDE;
  assign ALUControlE    = ALUControlDE;
  assign ALUSrcE        = ALUSrcDE;
  assign start_multE    = start_multDE;
  assign RegDstE        = RegDstDE;
  assign Out_selectE    = Out_selectDE;
  assign RF_ReadData1_E = RF_ReadData1_DE;
  assign RF_ReadData2_E = RF_ReadData2_DE;
  assign RsE            = RsDE;
  assign RtE            = RtDE;
  assign RdE            = RdDE;
  assign SignImmE       = SignImmDE;

endmodule

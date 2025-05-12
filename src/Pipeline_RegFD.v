`timescale 1ns/1ns

module Pipeline_RegFD(
  input CLK,reset,
  input [31:0] fetch_decode_instruction_word_input,
  output [31:0] fetch_decode_instruction_word_output,
  input [31:0] PCplus4F,
  output [31:0] PCplus4D,
  input nEN
);
  reg [31:0] InstrFD;
  reg [31:0] PCplus4FD;

always@(posedge CLK) begin
  if (reset) begin
    InstrFD <= 32'b0;
    PCplus4FD <= 32'b0;
  end else if (nEN == 1'b0) begin
    InstrFD <= fetch_decode_instruction_word_input;
    PCplus4FD <= PCplus4F;
  end
end

assign fetch_decode_instruction_word_output = InstrFD;
assign PCplus4D = PCplus4FD;

endmodule

`timescale 1ns/1ns

module Pipeline_RegFD(
  input CLK,reset,
  input [31:0] InstrF,
  output [31:0] InstrD,
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
    InstrFD <= InstrF;
    PCplus4FD <= PCplus4F;
  end
end

assign InstrD = InstrFD;
assign PCplus4D = PCplus4FD;

endmodule

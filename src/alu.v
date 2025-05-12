/*
Module: (32-bit) alu unit
Engineer: Luyao Han
Verified: Luyao Han, 10/2/2019
Last Update: Luyao Han 10/3/2019

The instructions we need to implement are:
add, addu, addi, addiu
sub, subu,
and, or, xor, xnor, andi, ori, xori,
slt, sltu, slti, sltiu,
lw, sw,
lui,
j, bne,beq,
mult, multu

Original 3 bit alu:

[2:0] Func
000 A & B
001 A | B
010 A + B
011 not used
100 A & ~B
101 A | ~B
110 A - B
111 SLT

This would suffice:
add, addu,
addi, addiu
sub, subu,
and, or,
andi, ori,
slt, sltu,
slti, sltiu,
lw,sw,lui, j, bne,beq,


We are missing:
xor, xnor,xori,
mult, multu


Note that the difference between immediate and non-immeidate is selected outside the alu
Inside the alu we deal with the difference unsigned and normal

The instruction looks like:
[3:0] Func
0000           A & B           and/andi
0001           A | B           or/ori
0010           A + B           add/addi/addu/addiu/lw/sw
0011           A ^ B           xor/xori
0100           A XNOR B
0101           A << 16         lui
0110
0111          SLT             slt/slti/sltu/sltiu
1000          A & ~B
1001          A | ~B
1010          A - B           sub/subu
1011          A ^ ~B
1100          A XNOR ~B
1101
1110
1111


j, bne,beq address is added using an isolated adder
*/

module alu (input clk, input [31:0] In1, In2, input [3:0] Func, output reg [31:0] ALUout) ;
  wire [31:0] BB ;  //signed manipulated signal for In2
		    //In2 is inverted accordingly from the type of insturuction
  wire [31:0] S ;

  assign BB = (Func[3]) ? ~In2 : In2 ;    //BB stores invertedd version of In2 is Func[3] encodes operations with second operand negative
  assign S = In1 + BB + {31'b0, Func[3]};  // Sign-extend Func[3] to 32 bits
  always @(negedge clk) begin
   case (Func[2:0])
    3'b000 : ALUout <= In1 & BB ;   		//andx,bitwise and operation
    3'b001 : ALUout <= In1 | BB ;   		//or, bitwise or operation
    3'b010 : ALUout <= S ;          		//addx/sub(with 2's complement)
    3'b011 : ALUout <= In1 ^ BB;    		//xor, bitwise xor operation
    3'b100 : ALUout <= ~(In1 ^ BB);   		//xnor, bitwise XNOR operation
    3'b101 : ALUout <= In2;		   	//lui, should load immediate right passing the alu
    3'b111 : ALUout <= {31'd0, S[31]}; 		//sltx, select smaller
    default: ;
   endcase
  end

 endmodule

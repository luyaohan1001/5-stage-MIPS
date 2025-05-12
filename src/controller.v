/*
*challenging*

Goal: to generate control signals based on input value
-use case statement
-avoid unnecessary reg
-generate large test cases to test in controller_tb


Hint:
   Add the following
   [1:0] Out_select: for selecting between outputALU, Sign_e?tended, mult_high and mult_low.
   [3:0] ALU_Op specifies the type of ALU operation.
   Output_branch: for handling hazard.
   Consider only AluSrcA port and ignore AluSrcB port












Instructions:
        Op
addi, 	001000 (8) addi rt, rs, imm add immediate [rt] = [rs] + SignImm
addiu, 	001001 (9) addiu rt, rs, imm add immediate unsigned [rt] = [rs] + SignImm
andi, 	001100 (12) andi rt, rs, imm and immediate [rt] = [rs] & ZeroImm
ori, 	001101 (13) ori rt, rs, imm or immediate [rt] = [rs] | ZeroImm
?ori, 	001110 (14) ?ori rt, rs, imm ?or immediate [rt] = [rs] ^ ZeroImm
slti, 	001010 (10) slti rt, rs, imm set less than immediate [rs] < SignImm ? [rt] = l : [rt] = 0
sltiu, 	001011 (11) sltiu rt, rs, imm set less than immediate unsigned [rs] < SignImm ? [rt] = l : [rt] = 0
lw, 	100011 (35) lw rt, imm(rs) load word [rt] = [Address]
sw, 	101011 (43) sw rt, imm(rs) store word [Address] = [rt]
lui, 	001111 (15) lui rt, imm load upper immediate [rt] = {imm, 16'b0}
j,	000010 (2) j label jump PC = JTA
bne,	000101 (5) bne rs, rt, label branch if not equal if ([rs] != [rt]) PC = BTA
beq, 	000100 (4) beq rs, rt, label branch if equal if ([rs] == [rt]) PC = BTA

        Func
mult, 	011000 (24) mult rs, rt multiply {[hi], [lo]} = [rs] � [rt]
multu,	011001 (25) multu rs, rt multiply unsigned {[hi], [lo]} = [rs] � [rt]
add, 	100000 (32) add rd, rs, rt add [rd] = [rs] + [rt]
addu,	100001 (33) addu rd, rs, rt add unsigned [rd] = [rs] + [rt]
sub, 	100010 (34) sub rd, rs, rt subtract [rd] = [rs] ? [rt]
subu, 	100011 (35) subu rd, rs, rt subtract unsigned [rd] = [rs] ? [rt]
and, 	100100 (36) and rd, rs, rt and [rd] = [rs] & [rt]
or, 	100101 (37) or rd, rs, rt or [rd] = [rs] | [rt]
?or, 	100110 (38) ?or rd, rs, rt ?or [rd] = [rs] ^ [rt]
?nor,   else
slt, 	101010 (42) slt rd, rs, rt set less than [rs] < [rt] ? [rd] = 1 : [rd] = 0
sltu, 	101011 (43) sltu rd, rs, rt set less than unsigned [rs] < [rt] ? [rd] = 1 : [rd] = 0

PC_source:
00   no branch
01   beq
10   bne
11   jump



R-type: mult, multu,add, addu,sub, subu,and, or, ?or,?nor,slt, sltu,
branch: j, bne,beq,
load store: lw, sw,
others: addi, addiu,andi, ori, ?ori, slti, sltiu, lui
*/

module controller(
  input [5:0] op,       	//instruction type
  input [5:0] Func,     	//R-type instructions
  output MemRead, MemWrite, 	//enable signals for Memory Read and Write
  output RegWrite,          	//Reg destination select signal
  output ALUSrcA,   	//ALU source
  output se_ze,             //zero e?tention for jump
  output RegDst,            //destination register
  output start_mult,
  output MemtoReg,
  output [1:0] Out_select,  //control output of ALU
  output [3:0] ALU_op,      //control input of ALU
  output Output_branch     //for handling hazard
);

//declare register to register the controll signals at clock edge
//the name has _r because they are registers
reg MemRead_r, MemWrite_r;
reg RegWrite_r;
reg ALUSrcA_r;
reg se_ze_r;
reg RegDst_r;
reg start_mult_r;
reg MemtoReg_r;
reg Eq_ne_r;
reg [1:0] Out_select_r;
reg [3:0] ALU_op_r;
reg Output_branch_r;


//assign the output wire of controller block from registers
assign MemRead 	= 	MemRead_r;
assign MemWrite =   	MemWrite_r;
assign RegWrite =       RegWrite_r;
assign ALUSrcA 	=	ALUSrcA_r;
assign se_ze 	=       se_ze_r;
assign RegDst 	=       RegDst_r;
assign start_mult 	=       start_mult_r;
assign MemtoReg 	= 	MemtoReg_r;
assign Out_select 	= 	Out_select_r;
assign ALU_op 		= 	ALU_op_r;
assign Output_branch 	= 	Output_branch_r;
//at initial stage, define output_branch and se_ze so that stallF is defined
initial begin
  Output_branch_r = 1'b0;
  se_ze_r = 1'b0;
end
/*
[3:0] Func
0000           A & B           and/andi
0001           A | B           or/ori
0010           A + B           add/addi/addu/addiu/lw/sw
0011           A ^ B           ?or/?ori
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

Consider only AluSrcA port and ignore AluSrcB port
This means AluSrcA selects IMM(immediate) or ORIGIN(original)


For RegDst:
         6  5  5  5   5     6
R-Type  op rs rt rd shamt funct
         6  5  5      16
I-Type  op rs rt [    imm      ]
        6          26
J-Type  op [      addr         ]

Instr   Target Register
addi	rt
addiu 	rt
andi 	rt
ori 	rt
?ori    rt
slti 	rt
sltiu   rt
lw 	rt
sw 	DONT_CARE
lui     rt
j	DONT_CARE
bne	DONT_CARE
beq     DONT_CARE

mult 	rd
multu	rd
add 	rd
addu	rd
sub 	rd
subu 	rd
and	rd
or 	rd
?or 	rd
?nor    rd
slt 	rd
sltu    rd



For MemtoReg:
1'b0 from ALU
1'b1 from MEM


For Out_select[1:0]
2'b00 Out_ALUoutput
2'b01 Out_SignEXD,
2'b10 Out_multH
2'b11 Out_multL
*/

//defined macros


parameter IMM = 1'b1;      //applies to I-type instruction
parameter nIMM = 1'b0;     //applies to None-I type
parameter DONT_CARE = 1'bz;

parameter NOT_JUMP_NO_0_EXD = 1'b0;  	//not a jump instruction, no 0 e?tended
parameter IS_JUMP_EXD_0 = 1'b1;  	//is a jump instruction, 0 e?tend it

parameter RegDst_rt = 1'b1;		//RF write destination: rt
parameter RegDst_rd = 1'b0;		//RF write destination: rd

parameter MemtoReg_fromMEM = 1'b1;	//MemtoReg MUX, select from memory
parameter MemtoReg_fromALU = 1'b0;	//MemtoReg MUX, select from ALU

parameter Out_ALUout    = 2'b00;	//Output select MUX, select ALU
parameter Out_multH 	= 2'b01;	//Output select MUX, select multiplier HI
parameter Out_multL 	= 2'b10;	//Output select MUX, select multiplier LO
parameter Out_luiExd 	= 2'b11;	//Output select MUX, select LUI result

wire [11:0] op_Func;			//declare wire that concatenate opcode with func field
assign op_Func = {op,Func};

//combinational case statements that distinguish between different instruction types
/*
*/
always@(*) begin
   casez (op_Func)
	//addi
	12'b001000??????: begin
		ALU_op_r = 4'b0010;    	//assign op code
		MemRead_r = 1'b0;		//no data memory read
		MemWrite_r = 1'b0;		//no memory write for R-type
		RegWrite_r = 1'b1;		//write to reg after calculation
		ALUSrcA_r = IMM; 		//the source is selcted as immediate
		se_ze_r = NOT_JUMP_NO_0_EXD;  	//it is not a jump, so immediate is not 0 e?tended
		RegDst_r = RegDst_rt;		//register destination is rt for I type
		start_mult_r = 1'b0; 		//not mult operation
		MemtoReg_r = MemtoReg_fromALU;	//result write to register is from the ALU
		Out_select_r = Out_ALUout;
		Output_branch_r = 1'b0; 	//not a branch signal
		Eq_ne_r = 1'b0; 		//don't care
	end
	12'b001001??????: begin
		ALU_op_r = 4'b0010;  //addiu -- assign op code
		MemRead_r = 1'b0;
		MemWrite_r = 1'b0;
		RegWrite_r = 1'b1;
		ALUSrcA_r = IMM;
		se_ze_r = NOT_JUMP_NO_0_EXD;
		RegDst_r = RegDst_rt;
		start_mult_r = 1'b0;
				MemtoReg_r = MemtoReg_fromALU;
		Out_select_r = Out_ALUout;
		Output_branch_r = 1'b0;
		Eq_ne_r =1'b0; //don't care
	end
	12'b001100??????: begin
		ALU_op_r = 4'b0000;  //andi -- assign op code
		MemRead_r = 1'b0;
		MemWrite_r = 1'b0;
		RegWrite_r = 1'b1;
		ALUSrcA_r = IMM;
		se_ze_r = NOT_JUMP_NO_0_EXD;
		RegDst_r = RegDst_rt;
		start_mult_r = 1'b0;
				MemtoReg_r = MemtoReg_fromALU;
		Out_select_r = Out_ALUout;
		Output_branch_r = 1'b0;
		Eq_ne_r =1'b0; //don't care
	end
	12'b001101??????: begin
		ALU_op_r = 4'b0001;  //ori -- assign op code
		MemRead_r = 1'b0;
		MemWrite_r = 1'b0;
		RegWrite_r = 1'b1;
		ALUSrcA_r = IMM;
		se_ze_r = NOT_JUMP_NO_0_EXD;
		RegDst_r = RegDst_rt;
		start_mult_r = 1'b0;
				MemtoReg_r = MemtoReg_fromALU;
		Out_select_r = Out_ALUout;
		Output_branch_r = 1'b0;
		Eq_ne_r = 1'b0; //don't care
	end
	12'b001110??????: begin
		ALU_op_r = 4'b0011;  //?ori -- assign op code
		MemRead_r = 1'b0;
		MemWrite_r = 1'b0;
		RegWrite_r = 1'b1;
		ALUSrcA_r = IMM;
		se_ze_r = NOT_JUMP_NO_0_EXD;
		RegDst_r = RegDst_rt;
		start_mult_r = 1'b0;
				MemtoReg_r = MemtoReg_fromALU;
		Out_select_r = Out_ALUout;
		Output_branch_r = 1'b0;
		Eq_ne_r =1'b0; //don't care
	end
	12'b001010??????: begin
		ALU_op_r = 4'b0111;  //slti -- assign op code
		MemRead_r = 1'b0;
		MemWrite_r = 1'b0;
		RegWrite_r = 1'b1;
		ALUSrcA_r = IMM;
		se_ze_r = NOT_JUMP_NO_0_EXD;
		RegDst_r = RegDst_rt;
		start_mult_r = 1'b0;
				MemtoReg_r = MemtoReg_fromALU;
		Out_select_r = Out_ALUout;
		Output_branch_r = 1'b0;
		Eq_ne_r =1'b0; //don't care
	end
	12'b001011??????: begin
		ALU_op_r = 4'b0111;  //sltiu  -- assign op code
		MemRead_r = 1'b0;
		MemWrite_r = 1'b0;
		RegWrite_r = 1'b1;
		ALUSrcA_r = IMM;
		se_ze_r = NOT_JUMP_NO_0_EXD;
		RegDst_r = RegDst_rt;
		start_mult_r = 1'b0;
				MemtoReg_r = MemtoReg_fromALU;
		Out_select_r = Out_ALUout;
		Output_branch_r = 1'b0;
		Eq_ne_r = 1'b0; //don't care
	end
	12'b100011??????: begin
		ALU_op_r = 4'b0010;  //lw -- assign op code
		MemRead_r = 1'b1;
		MemWrite_r = 1'b0;
		RegWrite_r = 1'b1;
		ALUSrcA_r = IMM;
		se_ze_r = NOT_JUMP_NO_0_EXD;
		RegDst_r = RegDst_rt;
		start_mult_r = 1'b0;
				MemtoReg_r = MemtoReg_fromMEM;
		Out_select_r = 2'b00;   //don;t care
		Output_branch_r = 1'b0;
		Eq_ne_r = 1'b0; //don't care
	end
	12'b101011??????: begin
		ALU_op_r = 4'b0010;  //sw 	 -- assign op code
		MemRead_r = 1'b0;
		MemWrite_r = 1'b1;
		RegWrite_r = 1'b0;
		ALUSrcA_r = IMM;
		se_ze_r = NOT_JUMP_NO_0_EXD;
		RegDst_r = DONT_CARE;
		start_mult_r = 1'b0;
				MemtoReg_r = 1'b0;  //DONT_CARE
		Out_select_r = Out_ALUout;   //MemtoReg = ALUout
		Output_branch_r = 1'b0;
		Eq_ne_r =1'b0; //don't care
	end
	12'b001111??????: begin
		ALU_op_r = 4'b0101;  //lui  -- assign op code
		MemRead_r = 1'b0;
		MemWrite_r = 1'b0;
		RegWrite_r = 1'b1;
		ALUSrcA_r = IMM;
		se_ze_r = NOT_JUMP_NO_0_EXD;
		RegDst_r = RegDst_rt;
		start_mult_r = 1'b0;
				MemtoReg_r = MemtoReg_fromALU;
		Out_select_r = Out_luiExd;
		Output_branch_r = 1'b0;
		Eq_ne_r =1'b0; //don't care
	end
	12'b000010??????: begin
		ALU_op_r = 4'b????;  //j	 -- assign op code
		MemRead_r = 1'b0;
		MemWrite_r = 1'b0;
		RegWrite_r = 1'b0;
		ALUSrcA_r = DONT_CARE;
		se_ze_r = IS_JUMP_EXD_0;
		RegDst_r = DONT_CARE;
		start_mult_r = 1'b0;
				MemtoReg_r = 1'b0;  //DONT_CARE
		Out_select_r = 2'bzz;   //don't care
		Output_branch_r = 1'b0;
		Eq_ne_r = 1'b0; //don't care
	end
	12'b000101??????: begin
		ALU_op_r = 4'b????;  //bne -- assign op code
		MemRead_r = 1'b0;
		MemWrite_r = 1'b0;
		RegWrite_r = 1'b0;
		ALUSrcA_r = nIMM;
		se_ze_r = NOT_JUMP_NO_0_EXD;
		RegDst_r = DONT_CARE;
		start_mult_r = 1'b0;
				MemtoReg_r = 1'b0;  //DONT_CARE
		Out_select_r = 2'bzz;  //don't care
		Output_branch_r = 1'b1;
		Eq_ne_r = 1'b1; //choose bne
	end
	12'b000100??????: begin
		ALU_op_r = 4'b????;  //beq  -- assign op code
		MemRead_r = 1'b0;
		MemWrite_r = 1'b0;
		RegWrite_r = 1'b0;
		ALUSrcA_r = nIMM;
		se_ze_r = NOT_JUMP_NO_0_EXD;
		RegDst_r = DONT_CARE;
		start_mult_r = 1'b0;
				MemtoReg_r = 1'b0; //DONT_CARE
		Out_select_r = 2'bzz;  //don't care
		Output_branch_r = 1'b1;
		Eq_ne_r = 1'b0; //choose beq
	end

	//R-type
	12'b000000011000: begin
		ALU_op_r = 4'b????;  //mult -- assign op code
		MemRead_r = 1'b0;
		MemWrite_r = 1'b0;
		RegWrite_r = 1'b0;
		ALUSrcA_r = nIMM;
		se_ze_r = NOT_JUMP_NO_0_EXD;
		RegDst_r = RegDst_rd;
		start_mult_r = 1'b1;
				MemtoReg_r = 1'b0; //DONT_CARE result from multiplier not ALU/MEM
		Out_select_r = 2'b00;
		Output_branch_r = 1'b0;
		Eq_ne_r = 1'b0; //don't care
	end
	12'b000000011001: begin
		ALU_op_r = 4'b????;  //multu -- assign op code
		MemRead_r = 1'b0;
		MemWrite_r = 1'b0;
		RegWrite_r = 1'b0;
		ALUSrcA_r = nIMM;
		se_ze_r = NOT_JUMP_NO_0_EXD;
		RegDst_r = RegDst_rd;
		start_mult_r = 1'b1;
				MemtoReg_r = 1'b0; //DONT_CAREresult from multiplier not ALU/MEM
		//Out_select_r = 2'b;
		Output_branch_r = 1'b0;
		Eq_ne_r = 1'b0; //don't care
	end
	12'b000000100000: begin
		ALU_op_r = 4'b0010;  //add -- assign op code
		MemRead_r = 1'b0;
		MemWrite_r = 1'b0;
		RegWrite_r = 1'b1;
		ALUSrcA_r = nIMM;
		se_ze_r = NOT_JUMP_NO_0_EXD;
		RegDst_r = RegDst_rd;
		start_mult_r = 1'b0;
				MemtoReg_r = MemtoReg_fromALU;
		Out_select_r = Out_ALUout;
		Output_branch_r = 1'b0;
		Eq_ne_r =  1'b0; //don't care
	end
	12'b000000100001: begin
		ALU_op_r = 4'b0010;  //addu -- assign op code
		MemRead_r = 1'b0;
		MemWrite_r = 1'b0;
		RegWrite_r = 1'b1;
		ALUSrcA_r = nIMM;
		se_ze_r = NOT_JUMP_NO_0_EXD;
		RegDst_r = RegDst_rd;
		start_mult_r = 1'b0;
				MemtoReg_r = MemtoReg_fromALU;
		Out_select_r = Out_ALUout;
		Output_branch_r = 1'b0;
		Eq_ne_r = 1'b0; //don't care
	end
	12'b000000100010: begin
		ALU_op_r = 4'b1010;  //sub -- assign op code
		MemRead_r = 1'b0;
		MemWrite_r = 1'b0;
		RegWrite_r = 1'b1;
		ALUSrcA_r = nIMM;
		se_ze_r = NOT_JUMP_NO_0_EXD;
		RegDst_r = RegDst_rd;
		start_mult_r = 1'b0;
				MemtoReg_r = MemtoReg_fromALU;
		Out_select_r = Out_ALUout;
		Output_branch_r = 1'b0;
		Eq_ne_r = 1'b0; //don't care
	end
	12'b000000100011: begin
		ALU_op_r = 4'b1010;  //subu -- assign op code
		MemRead_r = 1'b0;
		MemWrite_r = 1'b0;
		RegWrite_r = 1'b1;
		ALUSrcA_r = nIMM;
		se_ze_r = NOT_JUMP_NO_0_EXD;
		RegDst_r = RegDst_rd;
		start_mult_r = 1'b0;
				MemtoReg_r = MemtoReg_fromALU;
		Out_select_r = Out_ALUout;
		Output_branch_r = 1'b0;
		Eq_ne_r = 1'b0; //don't care
	end
	12'b000000100100: begin
		ALU_op_r = 4'b0000;  //and  -- assign op code
		MemRead_r = 1'b0;
		MemWrite_r = 1'b0;
		RegWrite_r = 1'b1;
		ALUSrcA_r = nIMM;
		se_ze_r = NOT_JUMP_NO_0_EXD;
		RegDst_r = RegDst_rd;
		start_mult_r = 1'b0;
				MemtoReg_r = MemtoReg_fromALU;
		Out_select_r = Out_ALUout;
		Output_branch_r = 1'b0;
		Eq_ne_r = 1'b0; //don't care
	end
	12'b000000100101: begin
		ALU_op_r = 4'b0001;  //or -- assign op code
		MemRead_r = 1'b0;
		MemWrite_r = 1'b0;
		RegWrite_r = 1'b1;
		ALUSrcA_r = nIMM;
		se_ze_r = NOT_JUMP_NO_0_EXD;
		RegDst_r = RegDst_rd;
		start_mult_r = 1'b0;
				MemtoReg_r = MemtoReg_fromALU;
		Out_select_r = Out_ALUout;
		Output_branch_r = 1'b0;
		Eq_ne_r = 1'b0; //don't care
	end
	12'b000000100110: begin
		ALU_op_r = 4'b0011;  //?or -- assign op code
		MemRead_r = 1'b0;
		MemWrite_r = 1'b0;
		RegWrite_r = 1'b1;
		ALUSrcA_r = nIMM;
		se_ze_r = NOT_JUMP_NO_0_EXD;
		RegDst_r = RegDst_rd;
		start_mult_r = 1'b0;
				MemtoReg_r = MemtoReg_fromALU;
		Out_select_r = Out_ALUout;
		Output_branch_r = 1'b0;
		Eq_ne_r = 1'b0; //don't care
	end
	12'b000000101010: begin
		ALU_op_r = 4'b0111;  //slt -- assign op code
		MemRead_r = 1'b0;
		MemWrite_r = 1'b0;
		RegWrite_r = 1'b1;
		ALUSrcA_r = nIMM;
		se_ze_r = NOT_JUMP_NO_0_EXD;
		RegDst_r = RegDst_rd;
		start_mult_r = 1'b0;
				MemtoReg_r = MemtoReg_fromALU;
		Out_select_r = Out_ALUout;
		Output_branch_r = 1'b0;
		Eq_ne_r = 1'b0; //don't care
	end
	12'b000000101011: begin
		ALU_op_r = 4'b0111;  //sltu -- assign op code
		MemRead_r = 1'b0;
		MemWrite_r = 1'b0;
		RegWrite_r = 1'b1;
		ALUSrcA_r = nIMM;
		se_ze_r = NOT_JUMP_NO_0_EXD;
		RegDst_r = RegDst_rd;
		start_mult_r = 1'b0;
				MemtoReg_r = MemtoReg_fromALU;
		Out_select_r = Out_ALUout;
		Output_branch_r = 1'b0;
		Eq_ne_r = 1'b0; //don't care
	end
        12'b000000010000: begin        //mfhi -- assign op code
       		ALU_op_r = 4'b????;
		MemRead_r = 1'b0;
		MemWrite_r = 1'b0;
		RegWrite_r = 1'b0;
		ALUSrcA_r = nIMM;
		se_ze_r = NOT_JUMP_NO_0_EXD;
		RegDst_r = RegDst_rd;
		start_mult_r = 1'b0;
				MemtoReg_r = MemtoReg_fromALU;
		Out_select_r = Out_multH;
		Output_branch_r = 1'b0;
		Eq_ne_r = 1'b0; //don't care
        end
	12'b000000010010: begin        //mflo -- assign op code
       		ALU_op_r = 4'b????;
		MemRead_r = 1'b0;
		MemWrite_r = 1'b0;
		RegWrite_r = 1'b1;
		ALUSrcA_r = nIMM;
		se_ze_r = NOT_JUMP_NO_0_EXD;
		RegDst_r = RegDst_rd;
		start_mult_r = 1'b0;
				MemtoReg_r = MemtoReg_fromALU;
		Out_select_r = Out_multL;
		Output_branch_r = 1'b0;
		Eq_ne_r = 1'b0; //don't care
        end
	12'b000000000000: begin        //reset
       		ALU_op_r = 4'b????;
		MemRead_r = 1'b0;
		MemWrite_r = 1'b0;
		RegWrite_r = 1'b0;
		ALUSrcA_r = nIMM;
		se_ze_r = NOT_JUMP_NO_0_EXD;
		RegDst_r = RegDst_rd;
		start_mult_r = 1'b0;
				MemtoReg_r = 1'b?;
		Out_select_r = 2'b??;
		Output_branch_r = 1'b0;
		Eq_ne_r = 1'b0; //don't care
        end
    	default: begin
		ALU_op_r =4'b0100;   //?nor -- assign op code
		MemRead_r = 1'b0;
		MemWrite_r = 1'b0;
		RegWrite_r = 1'b1;
		ALUSrcA_r = nIMM;
		se_ze_r = NOT_JUMP_NO_0_EXD;
		RegDst_r = RegDst_rd;
		start_mult_r = 1'b0;
				MemtoReg_r = MemtoReg_fromALU;
		Out_select_r = Out_ALUout;
		Output_branch_r = 1'b0;
		Eq_ne_r = 1'b0; //don't care
	end
   endcase
  end

endmodule




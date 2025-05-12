`timescale 1ns/1ns

module hazard(
	input [4:0] WriteRegM, WriteRegE, WriteRegW, rsE, rtE, rsD, rtD,
	input [5:0] opcode,
	input MemtoRegM, MemtoRegE, RegWriteW, RegWriteM, RegWriteE, BranchD, MultFinish,FD_nEN,start_multD,
	output reg StallF, ForwardAD, ForwardBD, FlushE,
	output reg [1:0] ForwardAE, ForwardBE); //This is subject to change depending on the size of the mux that is used to feed the alu input.
//lwstall: load word install
//branchstall: branch stall
//jumpstall: jump stall
//branchstallD: branchstall at Decode stage
reg lwstall, branchstall, jumpstall;

always @(*) begin
	 // Default signal values
 	lwstall = 1'b0;
 	branchstall = 1'b0;
 	jumpstall = 1'b0;

 	ForwardAE = 2'b00;
 	ForwardBE = 2'b00;
 	ForwardAD = 1'b0;
 	ForwardBD = 1'b0;
 	StallF = 1'b0;
 	FlushE = 1'b0;

	//for signal ready at memory stage, forwards to execute
	if((rsE != 0) && (rsE == WriteRegM) && RegWriteM) begin
		ForwardAE = 01;
	end
	//for signal ready at write stage, forwards to execute
	else if((rsE != 0) && (rsE == WriteRegW) && RegWriteW) begin
		ForwardAE = 2'b10;
	end
	else ForwardAE = 0;
	if(   (rtE != 0) && (rtE == WriteRegM) && RegWriteM ) begin
		ForwardBE = 2'b01;
	end
	//second one forward from I-type to I-type,
	else if(((rtE != 0) && (rtE == WriteRegW) && RegWriteW)
		|| ((rtE != 0) && (rtE == WriteRegE) && RegWriteW)) begin
		ForwardBE = 2'b10;
	end
	else ForwardBE = 0;

	//for data ready at memory stage, forwards to decode stage
	ForwardAD = (rsD != 0) && (rsD == WriteRegM) && RegWriteM;
	ForwardBD = (rtD != 0) && (rtD == WriteRegM) && (RegWriteM || start_multD);
	//stalls when branch happens
	branchstall = (BranchD && RegWriteE && (WriteRegE == rsD || WriteRegE == rtD)) || (BranchD && MemtoRegM && (WriteRegM == rsD || WriteRegM == rtD));
        //lwstall = ((rsD == rtE) || (rtD == rtE)) && MemtoRegE;
	if(opcode == 6'b100011&& FD_nEN == 1'b1) begin
		lwstall = 1'b1;
	end
	else begin
		lwstall = 1'b0;
	end

	if(opcode == 6'b000010) begin
		jumpstall = 1'b1;
	end
	else begin
		jumpstall = 1'b0;
	end
	//gradient stall
	StallF = jumpstall || MultFinish || branchstall;	//the lw_stall is deleted to be implemented in the data_path |Finn added branchstall to this.
	FlushE = lwstall || branchstall;
	end
endmodule


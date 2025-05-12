module umips_top(
  input clk,
  input reset);

  /* FETCH STAGE */
  wire [31:0] branch_mux_out,jump_mux_out, BranchAddr,JumpAddr;
  reg [31:0] PCplus4_out;
  //branch MUX
  wire [31:0] InstrD;
  wire branch_mux_ctrl;
  wire BranchD;
  assign branch_mux_out = branch_mux_ctrl? BranchAddr:PCplus4_out;
  //jump MUX
  wire se_ze;
  assign jump_mux_out =   se_ze?  JumpAddr: branch_mux_out;

  //prepare jump address
  wire [25:0] JumpAddrRaw;
  assign JumpAddrRaw = InstrD[25:0];
  assign JumpAddr = {6'b000000,JumpAddrRaw<<2};

  //program counter
  reg [31:0] PC_r;
  wire [31:0] PC_out;
  assign PC_out = PC_r;

  //cache enable
  wire mem_access_status; // when data loading, 0 when not

  wire [31:0] write_dataE, write_dataM;
  wire [31:0] read_dataM;
  wire MemWriteD,MemWriteE,MemWriteM, MemReadD, MemReadE, MemReadM;

  reg FD_MemStall;
  /*
  The FD_MemStall doesn't solely decides if the pipeline will stall.
  The following logic includes the signal FD_nEN:
  assign FD_nEN = ((mem_access_status || FD_MemStall) && ((is_lw_sw && (lw_sw_cnt!=4)) || (is_lw_sw && !loc_access)) );*/
  always @(posedge clk or negedge mem_access_status) begin
      if (mem_access_status == 1'b0) begin
          //FD_MemStall is shut off when ever the mem_access status goe negedge, this is when the cache has finished fetching a piece of data
          // Reset FD_MemStall when mem_access_status goes low (negedge)
          FD_MemStall <= 1'b0;
      end else if (MemReadD == 1'b1) begin
          // Set FD_MemStall when MemReadD is asserted
          FD_MemStall <= 1'b1;
      end else begin
          // Optionally, reset FD_MemStall when MemReadD is not asserted
          FD_MemStall <= 1'b0;
      end
  end

  wire [11:0] op_Func;	//is declare to receive Op_code concatinated with Func. Which this piece of info the specific type of instruction can be determined
  reg is_lw_sw;		//used to subtitite lw_stall in the hazard unit


  reg [2:0] lw_sw_cnt;	//used to count up whenever a lw_sw is detected in the decode stage so that the cache has enough room to realize if block hits

  always @(posedge clk or posedge reset) begin
      if (reset) begin
          lw_sw_cnt <= 0;        // Reset the counter on reset
          is_lw_sw <= 0;         // Reset is_lw_sw signal on reset
      end else begin
          case(op_Func[11:6])    // Check the function code for instruction type
              6'b100011 : begin   // lw instruction
                  is_lw_sw <= 1'b1;
                  lw_sw_cnt <= 3'b0; // Reset counter to 0 for lw/sw detection
              end
              6'b101011 : begin   // sw instruction
                  is_lw_sw <= 1'b1;
                  lw_sw_cnt <= 3'b0; // Reset counter to 0 for lw/sw detection
              end
              default: begin
                  is_lw_sw <= 0;    // Default case to ensure is_lw_sw is reset
              end
          endcase
      end

      // Increment logic (only when is_lw_sw remains high after initial detect)
      if (is_lw_sw && (lw_sw_cnt < 5))
          lw_sw_cnt <= lw_sw_cnt + 1;
      else if (lw_sw_cnt == 5)
          lw_sw_cnt <= 0; // Wraparound (optional depending on your logic)
  end



  wire loc_access;
  /*
  The FD_nEN is used to determine (the key) to if the whole processer stop to wait for memory associated instruction
  1. The first case is that loc_access is 1, meaning the penalty is just 4 cycles, waiting for the lw_sw_cnt count to 4 and proceed
  2. The second case is that loc_access is 0, meaning the penalty is as long as 20 cycles.
  */
  wire FD_nEN;
  assign FD_nEN = ((mem_access_status || FD_MemStall) && ((is_lw_sw && (lw_sw_cnt!=4)) || (is_lw_sw && !loc_access)) );


  wire nPC_EN; //controlled by StallF in hazard

  always @(posedge clk or posedge reset) begin
      if (reset) begin
          // On reset, set PC_r to 0
          PC_r <= 32'b0;
      end else begin
          // When reset is not active, update PC_r based on nPC_EN
          if (nPC_EN == 0) begin
              PC_r <= jump_mux_out; // Update PC_r with jump_mux_out when nPC_EN is 0
          end
      end
  end

  //PC+4 adder
  always@(posedge reset)begin		//when reset/at inital, we initialize the value of PC out so that the signals are defined
    PCplus4_out = 32'b0;
  end
  always@(negedge clk)begin
    PCplus4_out = PC_out + 32'h4;
  end

  wire[31:0] InstrF;
  instr_memory instr_memory(	//declare instance of the instruction memory
    .address(PC_out),
    .read_data(InstrF)
  );



  //pipeline reg
  wire [31:0] PCplus4D;
  Pipeline_RegFD pipeline_regFD(		//declare the instance of pipeline register at Fetech-Decode stage
    .CLK(clk),
    .reset(reset),
    .InstrF(InstrF),
    .InstrD(InstrD),
    .PCplus4F(PCplus4_out),
    .PCplus4D(PCplus4D),
    .nEN(FD_nEN)
  );

  /* DECODE STAGE */
  //InstrD spliter
  wire [5:0] InstrD5_0;		//splits the instruction in different section so that debug is easy
  wire [5:0] InstrD31_26;
  wire [4:0] InstrD15_11;
  wire [4:0] InstrD20_16;
  wire [4:0] InstrD25_21;
  assign InstrD5_0   = InstrD[5:0];
  assign InstrD31_26 = InstrD[31:26];
  assign InstrD15_11 = InstrD[15:11];
  assign InstrD20_16 = InstrD[20:16];
  assign InstrD25_21 = InstrD[25:21];

  wire [3:0] ALUControlD;
  wire [1:0] Out_selectD;
  wire ALUSrcD;
  wire RegDstD, RegWriteD;
  wire start_multD;
  assign op_Func = {InstrD31_26,InstrD5_0};	//op_Func is a wire concatnate the Opcode and the Func field. With it the whole block can be deyermined for a specific instruction
  controller controller(
    .op(InstrD31_26),    .Func(InstrD5_0),
    .se_ze(se_ze),
    .MemRead(MemReadD), .RegWrite(RegWriteD), .MemtoReg(MemtoRegD),
    .MemWrite(MemWriteD), .ALU_op(ALUControlD), .ALUSrcA(ALUSrcD), .start_mult(start_multD),
    .RegDst(RegDstD),
    .Output_branch(BranchD),
    .Out_select(Out_selectD)
  );

  //reg file
  wire [31:0] write_dataD;
  wire [31:0] RF_ReadData1;
  wire [31:0] RF_ReadData2;
  wire [4:0] WriteRegW;
  wire RegWriteW; // pipeline reg control signal
  wire mult_finishW; //pipeline reg signal passed from mult_finish at execution stage
  wire mult_status;
  wire mult_finishM;
  wire RFWriteEnable;
  assign RFWriteEnable =
  	((!mult_finishM && RegWriteW) || (!mult_finishW && RegWriteW && op_Func!=18)) //RF is enable write when multiplier finish multiplication
  	&& (mem_access_status == 1'b0);  //when memory is not caching
  //(!mult_finishW && RegWriteW) for ORI or other i types
  wire [4:0] WriteRegM;
  regfile regfile(
    .Clk(clk),
    .Reset(reset),
    .Write(RFWriteEnable),  //WriteEnable
    .PR1(InstrD25_21),
    .PR2(InstrD20_16),
    .WR(WriteRegM), //WriteRegW [4:0]
    .WD(write_dataD),
    .RD1(RF_ReadData1),
    .RD2(RF_ReadData2)
  );

  //Sign Extend
  wire [15:0] ImmRaw;
  assign ImmRaw = InstrD[15:0];
  wire [31:0] SignImmD,SignImmE;
  assign SignImmD = { {16{ImmRaw[15]}}, ImmRaw };

  //pipeline reg
  wire [31:0] RF_ReadData1_E,RF_ReadData2_E;
  wire [4:0] RtD, RdD, RsD;
  wire [4:0] RtE, RdE, RsE;
  wire [3:0] ALUControlE;
  wire [1:0] Out_selectE;

  //PC Branch Target Address
  assign BranchAddr = (SignImmD << 2) + PCplus4D;


  //ForwardAD MUX
  wire [31:0] ALUoutW;
  wire ForwardAD, ForwardBD; //connects to the hazard module
  wire [31:0] ALUoutM;
  wire [31:0] RF_ReadData1_D;
  assign RF_ReadData1_D = ForwardAD ? ALUoutW : RF_ReadData1;

  //ForwardBD MUX
  wire [31:0] RF_ReadData2_D;
  assign RF_ReadData2_D = ForwardBD ? ALUoutM : RF_ReadData2;

  //Branch MUX Control
  assign branch_mux_ctrl = BranchD && (RF_ReadData1_D != RF_ReadData2_D ? 1'b1 : 1'b0);


  //Pipeline Reg D-E
  wire start_multE;
  assign RsD = InstrD25_21;
  assign RtD = InstrD20_16;
  assign RdD = InstrD15_11;
  wire [31:0] InstrE, InstrM;
  wire RegWriteE, ALUSrcE, MemtoRegD, RegDstE, pipeline_regDE_CLR;
  //.nEN(mem_access_status),
  Pipeline_RegDE pipeline_regDE(
    .CLK(clk),.reset(reset),
    .nEN(1'b0), //MemReadE starts one cycle earlier detecing cache access
    .InstrD(InstrD), .InstrE(InstrE),
    .MemReadD(MemReadD),    .MemReadE(MemReadE),
    .RegWriteD(RegWriteD),  .RegWriteE(RegWriteE),
    .MemtoRegD(MemtoRegD),  .MemtoRegE(MemtoRegE),
    .MemWriteD(MemWriteD),  .MemWriteE(MemWriteE),
    .ALUControlD(ALUControlD),.ALUControlE(ALUControlE),
    .ALUSrcD(ALUSrcD),   .ALUSrcE(ALUSrcE),
    .start_multD(start_multD), .start_multE(start_multE),
    .RegDstD(RegDstD), .RegDstE(RegDstE),
    .Out_selectD(Out_selectD), .Out_selectE(Out_selectE),
    .RF_ReadData1_D(RF_ReadData1_D),  .RF_ReadData1_E(RF_ReadData1_E),
    .RF_ReadData2_D(RF_ReadData2_D),  .RF_ReadData2_E(RF_ReadData2_E),
    .RsD(RsD), .RsE(RsE),
    .RtD(RtD), .RtE(RtE),
    .RdD(RdD), .RdE(RdE),
    .SignImmD(SignImmD), .SignImmE(SignImmE),
    .PCplus4D(PCplus4D),
    .CLR(pipeline_regDE_CLR)
  );

  /* EXECUTE STAGE */
  //ALU Src Select
  wire [31:0] ALU_in_1;
  wire [31:0] ALU_in_2;
  wire [31:0] ForwardBE_MUX_out;
  assign ALU_in_2 = ALUSrcE ? SignImmE : ForwardBE_MUX_out;
  //ALU
  wire [31:0] ALUoutE;
  alu ALU(
    .clk(clk),
    .In1(ALU_in_1),
    .In2(ALU_in_2),
    .Func(ALUControlE),
    .ALUout(ALUoutE)
  );


  //multiplier
  wire [63:0] mult_resultE;
  mult multiplier(
  	.clk(clk),
  	.mult_status(mult_status),
          .start(start_multE),
          .in_is_signed(1'b0),
  	.in_a(ALU_in_1),
          .in_b(ForwardBE_MUX_out),
  	.s(mult_resultE)
  );



  //WriteReg Select
  reg[4:0] WriteRegE;
  always@(posedge clk)begin
    if(RegDstE == 1)
  	WriteRegE <= RtE;
    else
  	WriteRegE <= RdE;
  end


  wire[1:0] ForwardAE, ForwardBE;
  //ForwardAE MUX
  assign ALU_in_1 = ForwardAE[1] ?
           (ForwardAE[0]? RF_ReadData1_E:ALUoutM)
          :(ForwardAE[0]? write_dataD:RF_ReadData1_E);

  /*
  00: from register
  01: write_dataD forwards
  10: ALUoutM forwards
  */
  //ForwardBE MUX
  assign ForwardBE_MUX_out = ForwardBE[1] ?
           (ForwardBE[0]? RF_ReadData2_E:ALUoutM)
          :(ForwardBE[0]? write_dataD:RF_ReadData2_E);


  //Pipeline Reg
  //.nEN(mem_access_status),
  wire [1:0] Out_selectM;
  wire [63:0] mult_resultM;
  wire MemtoRegE, MemtoRegM;
  Pipeline_RegEM pipeline_regEM(
    .CLK(clk), .reset(reset), .nEN(1'b0),
    .InstrE(InstrE),.InstrM(InstrM),
    .MemReadE(MemReadE), .MemReadM(MemReadM),
    .RegWriteE(RegWriteE),.RegWriteM(RegWriteM),
    .MemtoRegE(MemtoRegE),.MemtoRegM(MemtoRegM),
    .MemWiteE(MemWriteE), .MemWiteM(MemWriteM),
    .mult_finishE(mult_status), .mult_finishM(mult_finishM),
    .Out_selectE(Out_selectE), .Out_selectM(Out_selectM),
    .mult_resultE(mult_resultE),.mult_resultM(mult_resultM),
    .ALUoutE(ALUoutE),.ALUoutM(ALUoutM),
    .write_dataE(write_dataE),.write_dataM(write_dataM),
    .WriteRegE(WriteRegE),  .WriteRegM(WriteRegM)
  );

  //forward addi result to SW
  assign write_dataE = ((RtE == WriteRegE) && (RtE!= 0) && (RegWriteE == 0))? ALUoutM:ForwardBE_MUX_out;

  /* MEMORY STAGE */

  //data memory
  wire [31:0] data_memory_in_addr;
  assign data_memory_in_addr = ALUoutM;


  //cache
  //declare an instance
  //the following signals are used to connect cache and the main memory
  wire [4:0] count;
  wire [31:0] mem_read_address, mem_write_address;
  wire [127:0] mem_write_data;
  wire mem_write;


  cache cache(
  	.address(data_memory_in_addr),
  	.write_in(MemWriteM),
  	.clk(clk),
    .reset(reset),
  	.write_data_in(write_dataM),
  	.countR(count),
  	.read_in(MemReadM),
  	.mem_read_address(mem_read_address),
  	.mem_write_address(mem_write_address),
  	.mem_write_data(mem_write_data),
  	.mem_access_status(mem_access_status),
  	.mem_write(mem_write),
  	.read_data(read_dataM),
  	.loc_access(loc_access)
  );

  wire [127:0] mem_input;
  data_memory data_memory(
  	.clk(clk),
  	.write(mem_write),
  	.read_address(mem_read_address),
  	.write_address(mem_write_address),
  	.write_data(mem_write_data),
  	.read_data(mem_input)
  );

  /*
  the original data memory is deleted
  data_memory data_memory(
    .clk(clk),
    .write_enable(MemWriteM),
    .read_enable(MemReadM),
    .address(data_memory_in_addr),
    .write_data(write_dataM),
    .read_data(read_dataM)
  ) ;
  */


  //lui extend
  wire[31:0] lui_extendedM;
  assign lui_extendedM = (ALUoutM & 32'hFFFF) << 16;

  //pipeline reg
  wire [1:0] Out_selectW;
  wire [63:0] mult_resultW;
  wire [31:0] read_dataW;
  wire [31:0] lui_extendedW;
  wire RegWriteM, MemtoRegW;


  //.nEN(mem_access_status),
  Pipeline_RegMW pipeline_regMW(
    .CLK(clk), .reset(reset),.nEN(1'b0),
    .InstrM(InstrM),
    .RegWriteM(RegWriteM),  .RegWriteW(RegWriteW),
    .MemtoRegM(MemtoRegM),  .MemtoRegW(MemtoRegW),
    .mult_finishM(mult_finishM), .mult_finishW(mult_finishW),
    .Out_SelectM(Out_selectM),  .Out_SelectW(Out_selectW),
    .ALUoutM(ALUoutM),  .ALUoutW(ALUoutW),
    .mult_resultM(mult_resultM),  .mult_resultW(mult_resultW),
    .ReadDataM(read_dataM),  .ReadDataW(read_dataW),
    .lui_extendedM(lui_extendedM),  .lui_extendedW(lui_extendedW),
    .WriteRegM(WriteRegM),  .WriteRegW(WriteRegW)
  );

  /* WRITE STAGE */
  //mult_result[63:0] path
  reg  [31:0] hi, lo;
  wire [31:0] mult_resultH,mult_resultL;
  assign mult_resultH = hi;
  assign mult_resultL = lo;

  //assigns the output multiplier result
  always @(posedge clk or posedge reset) begin
    if (reset) begin
      hi <= 32'b0;
      lo <= 32'b0;
    end else if (mult_finishM) begin
      hi <= mult_resultW[63:32];
      lo <= mult_resultW[31:0];
    end
  end


  //MemtoReg MUX
  wire [31:0] MemtoReg_out;
  assign MemtoReg_out = MemtoRegW ? (loc_access ? read_dataM : read_dataW):ALUoutW;

  //Out_select MUX
  always @(posedge clk)begin

  end

  assign write_dataD = Out_selectW[1] ?
                     (Out_selectW[0]? lui_extendedW : mult_resultL):
                     (Out_selectW[0]? mult_resultH  : MemtoReg_out );

  //declares the hazard instance
  wire StallF;
  hazard hazard(
  	.WriteRegM(WriteRegM), .WriteRegE(WriteRegE), .WriteRegW(WriteRegW), .rsE(RsE), .rtE(RtE), .rsD(RsD), .rtD(RtD), .opcode(InstrD31_26), .MultFinish(mult_status),
  	.MemtoRegM(MemtoRegM), .MemtoRegE(MemtoRegE), .RegWriteW(RegWriteW), .RegWriteM(RegWriteM), .RegWriteE(RegWriteE), .BranchD(BranchD),
  	.StallF(StallF),.ForwardAD(ForwardAD), .ForwardBD(ForwardBD), .FlushE(pipeline_regDE_CLR),
  	.ForwardAE(ForwardAE), .ForwardBE(ForwardBE), .FD_nEN(FD_nEN) ,. start_multD(start_multD)
  );

  //nPC_EN is used to stall the PC counter value. Note that when the FD_nEN is disabled, the PC will stop two on the next cycle because of is_lw_sw
  assign nPC_EN = reset ? 1'b0 : (StallF || mult_status || start_multD || start_multE || (FD_nEN && is_lw_sw));

endmodule

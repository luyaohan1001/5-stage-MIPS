// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPipeline_RegDE.h for the primary calling header

#ifndef VERILATED_VPIPELINE_REGDE___024ROOT_H_
#define VERILATED_VPIPELINE_REGDE___024ROOT_H_  // guard

#include "verilated.h"


class VPipeline_RegDE__Syms;

class alignas(VL_CACHE_LINE_BYTES) VPipeline_RegDE___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(branch_target_predictor_buffer__02Eclk,0,0);
        VL_IN8(branch_target_predictor_buffer__02Ereset,0,0);
        VL_IN8(umips_top__02Eclk,0,0);
        VL_IN8(umips_top__02Ereset,0,0);
        CData/*0:0*/ umips_top__DOT__mem_access_status;
        VL_IN8(access,0,0);
        VL_IN8(update,0,0);
        VL_OUT8(found,0,0);
        VL_OUT8(state,1,0);
        CData/*5:0*/ branch_target_predictor_buffer__DOT__entry_addr;
        CData/*0:0*/ umips_top__DOT__FD_MemStall;
        CData/*0:0*/ umips_top__DOT__is_lw_sw;
        CData/*2:0*/ umips_top__DOT__lw_sw_cnt;
        CData/*0:0*/ umips_top__DOT__loc_access;
        CData/*0:0*/ umips_top__DOT__mult_status;
        CData/*4:0*/ umips_top__DOT__WriteRegE;
        CData/*1:0*/ umips_top__DOT__ForwardAE;
        CData/*1:0*/ umips_top__DOT__ForwardBE;
        CData/*0:0*/ umips_top__DOT__FD_nEN;
        CData/*0:0*/ umips_top__DOT__pipeline_regDE_CLR;
        CData/*0:0*/ umips_top__DOT__StallF;
        CData/*0:0*/ umips_top__DOT__controller__DOT__MemRead_r;
        CData/*0:0*/ umips_top__DOT__controller__DOT__MemWrite_r;
        CData/*0:0*/ umips_top__DOT__controller__DOT__RegWrite_r;
        CData/*0:0*/ umips_top__DOT__controller__DOT__se_ze_r;
        CData/*0:0*/ umips_top__DOT__controller__DOT__start_mult_r;
        CData/*0:0*/ umips_top__DOT__controller__DOT__MemtoReg_r;
        CData/*3:0*/ umips_top__DOT__controller__DOT__ALU_op_r;
        CData/*0:0*/ umips_top__DOT__controller__DOT__Output_branch_r;
        CData/*0:0*/ umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out0;
        CData/*0:0*/ umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out1;
        CData/*0:0*/ umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out2;
        CData/*0:0*/ umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out3;
        CData/*0:0*/ umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out4;
        CData/*0:0*/ umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out5;
        CData/*0:0*/ umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out6;
        CData/*0:0*/ umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out7;
        CData/*0:0*/ umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out8;
        CData/*0:0*/ umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out9;
        CData/*0:0*/ umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out11;
        CData/*0:0*/ umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out12;
        CData/*0:0*/ umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out13;
        CData/*0:0*/ umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out14;
        CData/*0:0*/ umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out15;
        CData/*0:0*/ umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out16;
        CData/*0:0*/ umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out17;
        CData/*0:0*/ umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out18;
        CData/*0:0*/ umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out19;
        CData/*0:0*/ umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out20;
        CData/*0:0*/ umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out21;
        CData/*0:0*/ umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out22;
        CData/*0:0*/ umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out23;
        CData/*0:0*/ umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out24;
        CData/*0:0*/ umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out25;
        CData/*0:0*/ umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out26;
        CData/*0:0*/ umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27;
        CData/*0:0*/ umips_top__DOT__controller__DOT__RegDst_r__strong__out28;
        CData/*0:0*/ umips_top__DOT__controller__DOT__RegDst_r__strong__out29;
        CData/*0:0*/ umips_top__DOT__controller__DOT__RegDst_r__strong__out30;
        CData/*0:0*/ umips_top__DOT__controller__DOT__RegDst_r__strong__out31;
        CData/*0:0*/ umips_top__DOT__controller__DOT__RegDst_r__strong__out32;
        CData/*0:0*/ umips_top__DOT__controller__DOT__RegDst_r__strong__out33;
        CData/*0:0*/ umips_top__DOT__controller__DOT__RegDst_r__strong__out34;
        CData/*0:0*/ umips_top__DOT__controller__DOT__RegDst_r__strong__out35;
    };
    struct {
        CData/*0:0*/ umips_top__DOT__controller__DOT__RegDst_r__strong__out37;
        CData/*0:0*/ umips_top__DOT__controller__DOT__RegDst_r__strong__out41;
        CData/*0:0*/ umips_top__DOT__controller__DOT__RegDst_r__strong__out42;
        CData/*0:0*/ umips_top__DOT__controller__DOT__RegDst_r__strong__out43;
        CData/*0:0*/ umips_top__DOT__controller__DOT__RegDst_r__strong__out44;
        CData/*0:0*/ umips_top__DOT__controller__DOT__RegDst_r__strong__out45;
        CData/*0:0*/ umips_top__DOT__controller__DOT__RegDst_r__strong__out46;
        CData/*0:0*/ umips_top__DOT__controller__DOT__RegDst_r__strong__out47;
        CData/*0:0*/ umips_top__DOT__controller__DOT__RegDst_r__strong__out48;
        CData/*0:0*/ umips_top__DOT__controller__DOT__RegDst_r__strong__out49;
        CData/*0:0*/ umips_top__DOT__controller__DOT__RegDst_r__strong__out50;
        CData/*0:0*/ umips_top__DOT__controller__DOT__RegDst_r__strong__out51;
        CData/*0:0*/ umips_top__DOT__controller__DOT__RegDst_r__strong__out52;
        CData/*0:0*/ umips_top__DOT__controller__DOT__RegDst_r__strong__out53;
        CData/*0:0*/ umips_top__DOT__controller__DOT__RegDst_r__strong__out54;
        CData/*0:0*/ umips_top__DOT__controller__DOT__RegDst_r__strong__out55;
        CData/*1:0*/ umips_top__DOT__controller__DOT__Out_select_r__strong__out56;
        CData/*1:0*/ umips_top__DOT__controller__DOT__Out_select_r__strong__out57;
        CData/*1:0*/ umips_top__DOT__controller__DOT__Out_select_r__strong__out58;
        CData/*1:0*/ umips_top__DOT__controller__DOT__Out_select_r__strong__out59;
        CData/*1:0*/ umips_top__DOT__controller__DOT__Out_select_r__strong__out60;
        CData/*1:0*/ umips_top__DOT__controller__DOT__Out_select_r__strong__out61;
        CData/*1:0*/ umips_top__DOT__controller__DOT__Out_select_r__strong__out62;
        CData/*1:0*/ umips_top__DOT__controller__DOT__Out_select_r__strong__out63;
        CData/*1:0*/ umips_top__DOT__controller__DOT__Out_select_r__strong__out64;
        CData/*1:0*/ umips_top__DOT__controller__DOT__Out_select_r__strong__out65;
        CData/*1:0*/ umips_top__DOT__controller__DOT__Out_select_r__strong__out69;
        CData/*1:0*/ umips_top__DOT__controller__DOT__Out_select_r__strong__out70;
        CData/*1:0*/ umips_top__DOT__controller__DOT__Out_select_r__strong__out71;
        CData/*1:0*/ umips_top__DOT__controller__DOT__Out_select_r__strong__out72;
        CData/*1:0*/ umips_top__DOT__controller__DOT__Out_select_r__strong__out73;
        CData/*1:0*/ umips_top__DOT__controller__DOT__Out_select_r__strong__out74;
        CData/*1:0*/ umips_top__DOT__controller__DOT__Out_select_r__strong__out75;
        CData/*1:0*/ umips_top__DOT__controller__DOT__Out_select_r__strong__out76;
        CData/*1:0*/ umips_top__DOT__controller__DOT__Out_select_r__strong__out77;
        CData/*1:0*/ umips_top__DOT__controller__DOT__Out_select_r__strong__out78;
        CData/*1:0*/ umips_top__DOT__controller__DOT__Out_select_r__strong__out79;
        CData/*1:0*/ umips_top__DOT__controller__DOT__Out_select_r__strong__out80;
        CData/*1:0*/ umips_top__DOT__controller__DOT__Out_select_r__strong__out81;
        CData/*1:0*/ umips_top__DOT__controller__DOT__Out_select_r__strong__out82;
        CData/*0:0*/ umips_top__DOT__pipeline_regDE__DOT__MemReadDE;
        CData/*0:0*/ umips_top__DOT__pipeline_regDE__DOT__RegWriteDE;
        CData/*0:0*/ umips_top__DOT__pipeline_regDE__DOT__MemtoRegDE;
        CData/*0:0*/ umips_top__DOT__pipeline_regDE__DOT__MemWriteDE;
        CData/*3:0*/ umips_top__DOT__pipeline_regDE__DOT__ALUControlDE;
        CData/*0:0*/ umips_top__DOT__pipeline_regDE__DOT__ALUSrcDE;
        CData/*0:0*/ umips_top__DOT__pipeline_regDE__DOT__start_multDE;
        CData/*0:0*/ umips_top__DOT__pipeline_regDE__DOT__RegDstDE;
        CData/*1:0*/ umips_top__DOT__pipeline_regDE__DOT__Out_selectDE;
        CData/*4:0*/ umips_top__DOT__pipeline_regDE__DOT__RsDE;
        CData/*4:0*/ umips_top__DOT__pipeline_regDE__DOT__RtDE;
        CData/*4:0*/ umips_top__DOT__pipeline_regDE__DOT__RdDE;
        CData/*0:0*/ umips_top__DOT__pipeline_regEM__DOT__MemReadEM;
        CData/*0:0*/ umips_top__DOT__pipeline_regEM__DOT__RegWriteEM;
        CData/*0:0*/ umips_top__DOT__pipeline_regEM__DOT__MemtoRegEM;
        CData/*0:0*/ umips_top__DOT__pipeline_regEM__DOT__MemWiteEM;
        CData/*0:0*/ umips_top__DOT__pipeline_regEM__DOT__mult_finishEM;
        CData/*1:0*/ umips_top__DOT__pipeline_regEM__DOT__Out_selectEM;
        CData/*4:0*/ umips_top__DOT__pipeline_regEM__DOT__WriteRegEM;
        CData/*0:0*/ umips_top__DOT__cache__DOT__hit;
        CData/*0:0*/ umips_top__DOT__pipeline_regMW__DOT__RegWriteMW;
        CData/*0:0*/ umips_top__DOT__pipeline_regMW__DOT__MemtoRegMW;
        CData/*0:0*/ umips_top__DOT__pipeline_regMW__DOT__mult_finishMW;
        CData/*1:0*/ umips_top__DOT__pipeline_regMW__DOT__Out_SelectMW;
    };
    struct {
        CData/*0:0*/ umips_top__DOT__pipeline_regMW__DOT__lui_extendedMW;
        CData/*4:0*/ umips_top__DOT__pipeline_regMW__DOT__WriteRegMW;
        CData/*2:0*/ __Vdly__umips_top__DOT__lw_sw_cnt;
        CData/*4:0*/ __VdlyDim0__umips_top__DOT__cache__DOT__cache_memory__v0;
        CData/*0:0*/ __VdlySet__umips_top__DOT__cache__DOT__cache_memory__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__branch_target_predictor_buffer__02Eclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__branch_target_predictor_buffer__02Ereset__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__umips_top__02Eclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__umips_top__DOT__mem_access_status__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__umips_top__02Ereset__0;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ umips_top__DOT__controller__DOT__op_Func;
        VL_IN(branching_addressF,31,0);
        VL_IN(branchUpdatePC,31,0);
        VL_IN(branchUpdateTarget,31,0);
        VL_OUT(predictPC,31,0);
        IData/*31:0*/ umips_top__DOT__PCplus4_out;
        IData/*31:0*/ umips_top__DOT__PC_r;
        IData/*31:0*/ umips_top__DOT__read_dataM;
        IData/*31:0*/ umips_top__DOT__write_dataD;
        IData/*31:0*/ umips_top__DOT__SignImmD;
        IData/*31:0*/ umips_top__DOT__RF_ReadData1_D;
        IData/*31:0*/ umips_top__DOT__RF_ReadData2_D;
        IData/*31:0*/ umips_top__DOT__ALU_in_1;
        IData/*31:0*/ umips_top__DOT__ALU_in_2;
        IData/*31:0*/ umips_top__DOT__ForwardBE_MUX_out;
        IData/*31:0*/ umips_top__DOT__ALUoutE;
        IData/*31:0*/ umips_top__DOT__hi;
        IData/*31:0*/ umips_top__DOT__lo;
        IData/*31:0*/ umips_top__DOT__pipeline_regFD__DOT__InstrFD;
        IData/*31:0*/ umips_top__DOT__pipeline_regFD__DOT__PCplus4FD;
        IData/*31:0*/ umips_top__DOT__pipeline_regDE__DOT__RF_ReadData1_DE;
        IData/*31:0*/ umips_top__DOT__pipeline_regDE__DOT__RF_ReadData2_DE;
        IData/*31:0*/ umips_top__DOT__pipeline_regDE__DOT__SignImmDE;
        IData/*31:0*/ umips_top__DOT__ALU__DOT__BB;
        IData/*31:0*/ umips_top__DOT__ALU__DOT__S;
        IData/*31:0*/ umips_top__DOT__pipeline_regEM__DOT__ALUoutEM;
        IData/*31:0*/ umips_top__DOT__pipeline_regEM__DOT__write_dataEM;
        IData/*31:0*/ umips_top__DOT__pipeline_regMW__DOT__ALUoutMW;
        IData/*31:0*/ umips_top__DOT__pipeline_regMW__DOT__ReadDataMW;
        IData/*31:0*/ __Vdly__umips_top__DOT__pipeline_regFD__DOT__InstrFD;
        VlWide<4>/*127:0*/ __VdlyVal__umips_top__DOT__cache__DOT__cache_memory__v0;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ umips_top__DOT__mult_resultE;
        QData/*63:0*/ umips_top__DOT__pipeline_regEM__DOT__mult_resultEM;
        QData/*63:0*/ umips_top__DOT__pipeline_regMW__DOT__mult_resultMW;
        VlUnpacked<QData/*33:0*/, 64> branch_target_predictor_buffer__DOT__entries;
        VlUnpacked<CData/*7:0*/, 65536> umips_top__DOT__instr_memory__DOT__instr_mem;
        VlUnpacked<IData/*31:0*/, 32> umips_top__DOT__regfile__DOT__rf;
        VlUnpacked<VlWide<4>/*127:0*/, 32> umips_top__DOT__cache__DOT__cache_memory;
        VlUnpacked<IData/*31:0*/, 32> umips_top__DOT__cache__DOT__tag_memory;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VnbaTriggered;

    // INTERNAL VARIABLES
    VPipeline_RegDE__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPipeline_RegDE___024root(VPipeline_RegDE__Syms* symsp, const char* v__name);
    ~VPipeline_RegDE___024root();
    VL_UNCOPYABLE(VPipeline_RegDE___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

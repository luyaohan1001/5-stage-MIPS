// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vumips_top.h for the primary calling header

#include "Vumips_top__pch.h"
#include "Vumips_top___024root.h"

void Vumips_top___024root___eval_act(Vumips_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vumips_top___024root___eval_act\n"); );
    Vumips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vumips_top___024root___nba_sequent__TOP__0(Vumips_top___024root* vlSelf);
void Vumips_top___024root___nba_sequent__TOP__1(Vumips_top___024root* vlSelf);
void Vumips_top___024root___nba_sequent__TOP__2(Vumips_top___024root* vlSelf);
void Vumips_top___024root___nba_sequent__TOP__3(Vumips_top___024root* vlSelf);
void Vumips_top___024root___nba_sequent__TOP__4(Vumips_top___024root* vlSelf);
void Vumips_top___024root___nba_sequent__TOP__5(Vumips_top___024root* vlSelf);
void Vumips_top___024root___nba_sequent__TOP__6(Vumips_top___024root* vlSelf);
void Vumips_top___024root___nba_comb__TOP__0(Vumips_top___024root* vlSelf);
void Vumips_top___024root___nba_comb__TOP__1(Vumips_top___024root* vlSelf);

void Vumips_top___024root___eval_nba(Vumips_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vumips_top___024root___eval_nba\n"); );
    Vumips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vumips_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vumips_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vumips_top___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vumips_top___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vumips_top___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vumips_top___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vumips_top___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vumips_top___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vumips_top___024root___nba_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vumips_top___024root___nba_sequent__TOP__0(Vumips_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vumips_top___024root___nba_sequent__TOP__0\n"); );
    Vumips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__umips_top__DOT__lw_sw_cnt;
    __Vdly__umips_top__DOT__lw_sw_cnt = 0;
    CData/*0:0*/ __VdlySet__umips_top__DOT__regfile__DOT__rf__v0;
    __VdlySet__umips_top__DOT__regfile__DOT__rf__v0 = 0;
    IData/*31:0*/ __VdlyVal__umips_top__DOT__regfile__DOT__rf__v32;
    __VdlyVal__umips_top__DOT__regfile__DOT__rf__v32 = 0;
    CData/*4:0*/ __VdlyDim0__umips_top__DOT__regfile__DOT__rf__v32;
    __VdlyDim0__umips_top__DOT__regfile__DOT__rf__v32 = 0;
    CData/*0:0*/ __VdlySet__umips_top__DOT__regfile__DOT__rf__v32;
    __VdlySet__umips_top__DOT__regfile__DOT__rf__v32 = 0;
    // Body
    __Vdly__umips_top__DOT__lw_sw_cnt = vlSelfRef.umips_top__DOT__lw_sw_cnt;
    vlSelfRef.__VdlySet__umips_top__DOT__cache__DOT__cache_memory__v0 = 0U;
    __VdlySet__umips_top__DOT__regfile__DOT__rf__v0 = 0U;
    __VdlySet__umips_top__DOT__regfile__DOT__rf__v32 = 0U;
    if (vlSelfRef.reset) {
        __Vdly__umips_top__DOT__lw_sw_cnt = 0U;
        __VdlySet__umips_top__DOT__regfile__DOT__rf__v0 = 1U;
        vlSelfRef.umips_top__DOT__loc_access = 0U;
        vlSelfRef.umips_top__DOT__lo = 0U;
        vlSelfRef.umips_top__DOT__hi = 0U;
    } else {
        if ((0x23U == (0x3fU & ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                >> 6U)))) {
            __Vdly__umips_top__DOT__lw_sw_cnt = 0U;
        } else if ((0x2bU == (0x3fU & ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                       >> 6U)))) {
            __Vdly__umips_top__DOT__lw_sw_cnt = 0U;
        }
        if ((((~ (IData)(vlSelfRef.umips_top__DOT__mem_access_status)) 
              & (((~ (IData)(vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__mult_finishEM)) 
                  & (IData)(vlSelfRef.umips_top__DOT__pipeline_regMW__DOT__RegWriteMW)) 
                 | ((~ (IData)(vlSelfRef.umips_top__DOT__pipeline_regMW__DOT__mult_finishMW)) 
                    & ((IData)(vlSelfRef.umips_top__DOT__pipeline_regMW__DOT__RegWriteMW) 
                       & (0x12U != (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func)))))) 
             & (0U != (IData)(vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__WriteRegEM)))) {
            __VdlyVal__umips_top__DOT__regfile__DOT__rf__v32 
                = vlSelfRef.umips_top__DOT__write_dataD;
            __VdlyDim0__umips_top__DOT__regfile__DOT__rf__v32 
                = vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__WriteRegEM;
            __VdlySet__umips_top__DOT__regfile__DOT__rf__v32 = 1U;
        }
        if (vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__MemReadEM) {
            vlSelfRef.umips_top__DOT__loc_access = vlSelfRef.umips_top__DOT__cache__DOT__hit;
        }
        if (vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__mult_finishEM) {
            vlSelfRef.umips_top__DOT__lo = (IData)(vlSelfRef.umips_top__DOT__pipeline_regMW__DOT__mult_resultMW);
            vlSelfRef.umips_top__DOT__hi = (IData)(
                                                   (vlSelfRef.umips_top__DOT__pipeline_regMW__DOT__mult_resultMW 
                                                    >> 0x20U));
        }
    }
    if (((IData)(vlSelfRef.umips_top__DOT__is_lw_sw) 
         & (5U > (IData)(vlSelfRef.umips_top__DOT__lw_sw_cnt)))) {
        __Vdly__umips_top__DOT__lw_sw_cnt = (7U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.umips_top__DOT__lw_sw_cnt)));
    } else if ((5U == (IData)(vlSelfRef.umips_top__DOT__lw_sw_cnt))) {
        __Vdly__umips_top__DOT__lw_sw_cnt = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        if (vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__MemWiteEM) {
            vlSelfRef.__VdlyVal__umips_top__DOT__cache__DOT__cache_memory__v0[0U] 
                = vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__write_dataEM;
            vlSelfRef.__VdlyVal__umips_top__DOT__cache__DOT__cache_memory__v0[1U] = 0U;
            vlSelfRef.__VdlyVal__umips_top__DOT__cache__DOT__cache_memory__v0[2U] = 0U;
            vlSelfRef.__VdlyVal__umips_top__DOT__cache__DOT__cache_memory__v0[3U] = 0U;
            vlSelfRef.__VdlyDim0__umips_top__DOT__cache__DOT__cache_memory__v0 
                = (0x1fU & vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__ALUoutEM);
            vlSelfRef.__VdlySet__umips_top__DOT__cache__DOT__cache_memory__v0 = 1U;
        }
    }
    vlSelfRef.umips_top__DOT__lw_sw_cnt = __Vdly__umips_top__DOT__lw_sw_cnt;
    if (__VdlySet__umips_top__DOT__regfile__DOT__rf__v0) {
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[0U] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[1U] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[2U] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[3U] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[4U] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[5U] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[6U] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[7U] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[8U] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[9U] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[0xaU] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[0xbU] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[0xcU] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[0xdU] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[0xeU] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[0xfU] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[0x10U] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[0x11U] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[0x12U] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[0x13U] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[0x14U] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[0x15U] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[0x16U] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[0x17U] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[0x18U] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[0x19U] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[0x1aU] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[0x1bU] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[0x1cU] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[0x1dU] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[0x1eU] = 0U;
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[0x1fU] = 0U;
    }
    if (__VdlySet__umips_top__DOT__regfile__DOT__rf__v32) {
        vlSelfRef.umips_top__DOT__regfile__DOT__rf[__VdlyDim0__umips_top__DOT__regfile__DOT__rf__v32] 
            = __VdlyVal__umips_top__DOT__regfile__DOT__rf__v32;
    }
}

VL_INLINE_OPT void Vumips_top___024root___nba_sequent__TOP__1(Vumips_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vumips_top___024root___nba_sequent__TOP__1\n"); );
    Vumips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__umips_top__DOT__pipeline_regFD__DOT__InstrFD 
        = vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__InstrFD;
    vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__ALUSrcDE 
        = ((1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE_CLR)))) 
           && ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out0) 
               | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out1) 
                  | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out2) 
                     | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out3) 
                        | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out4) 
                           | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out5) 
                              | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out6) 
                                 | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out7) 
                                    | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out8) 
                                       | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out9) 
                                          | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out11) 
                                             | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out12) 
                                                | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out13) 
                                                   | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out14) 
                                                      | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out15) 
                                                         | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out16) 
                                                            | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out17) 
                                                               | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out18) 
                                                                  | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out19) 
                                                                     | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out20) 
                                                                        | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out21) 
                                                                           | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out22) 
                                                                              | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out23) 
                                                                                | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out24) 
                                                                                | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out25) 
                                                                                | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out26) 
                                                                                | (IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27))))))))))))))))))))))))))));
    vlSelfRef.umips_top__DOT__pipeline_regMW__DOT__Out_SelectMW 
        = vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__Out_selectEM;
    vlSelfRef.umips_top__DOT__pipeline_regMW__DOT__MemtoRegMW 
        = vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__MemtoRegEM;
    vlSelfRef.umips_top__DOT__pipeline_regMW__DOT__lui_extendedMW 
        = (0xffff0000U & VL_SHIFTL_III(32,32,32, vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__ALUoutEM, 0x10U));
    vlSelfRef.umips_top__DOT__pipeline_regMW__DOT__ALUoutMW 
        = vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__ALUoutEM;
    vlSelfRef.umips_top__DOT__pipeline_regMW__DOT__ReadDataMW 
        = vlSelfRef.umips_top__DOT__read_dataM;
    vlSelfRef.umips_top__DOT__pipeline_regMW__DOT__WriteRegMW 
        = vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__WriteRegEM;
    vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__MemWiteEM 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__MemWriteDE));
    vlSelfRef.umips_top__DOT__pipeline_regMW__DOT__mult_finishMW 
        = vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__mult_finishEM;
    vlSelfRef.umips_top__DOT__pipeline_regMW__DOT__RegWriteMW 
        = vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__RegWriteEM;
    vlSelfRef.umips_top__DOT__pipeline_regMW__DOT__mult_resultMW 
        = vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__mult_resultEM;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__umips_top__DOT__pipeline_regFD__DOT__InstrFD = 0U;
        vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__write_dataEM = 0U;
        vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__Out_selectEM = 0U;
        vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__WriteRegEM = 0U;
        vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__mult_resultEM = 0ULL;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.umips_top__DOT__FD_nEN)))) {
            vlSelfRef.__Vdly__umips_top__DOT__pipeline_regFD__DOT__InstrFD 
                = (((vlSelfRef.umips_top__DOT__instr_memory__DOT__instr_mem
                     [(0xffffU & vlSelfRef.umips_top__DOT__PC_r)] 
                     << 0x18U) | (vlSelfRef.umips_top__DOT__instr_memory__DOT__instr_mem
                                  [(0xffffU & ((IData)(1U) 
                                               + vlSelfRef.umips_top__DOT__PC_r))] 
                                  << 0x10U)) | ((vlSelfRef.umips_top__DOT__instr_memory__DOT__instr_mem
                                                 [(0xffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.umips_top__DOT__PC_r))] 
                                                 << 8U) 
                                                | vlSelfRef.umips_top__DOT__instr_memory__DOT__instr_mem
                                                [(0xffffU 
                                                  & ((IData)(3U) 
                                                     + vlSelfRef.umips_top__DOT__PC_r))]));
        }
        vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__write_dataEM 
            = (((~ ((IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RegWriteDE) 
                    | (0U == (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RtDE)))) 
                & ((IData)(vlSelfRef.umips_top__DOT__WriteRegE) 
                   == (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RtDE)))
                ? vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__ALUoutEM
                : vlSelfRef.umips_top__DOT__ForwardBE_MUX_out);
        vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__Out_selectEM 
            = vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__Out_selectDE;
        vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__WriteRegEM 
            = vlSelfRef.umips_top__DOT__WriteRegE;
        vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__mult_resultEM 
            = vlSelfRef.umips_top__DOT__mult_resultE;
    }
    vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__MemtoRegEM 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__MemtoRegDE));
    vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__MemWriteDE 
        = ((1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE_CLR)))) 
           && (IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemWrite_r));
    vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__mult_finishEM 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.umips_top__DOT__mult_status));
    vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__RegWriteEM 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RegWriteDE));
    vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__MemtoRegDE 
        = ((1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE_CLR)))) 
           && ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out56) 
               | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out57) 
                  | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out58) 
                     | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out59) 
                        | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out60) 
                           | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out61) 
                              | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out62) 
                                 | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out63) 
                                    | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out64) 
                                       | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out65) 
                                          | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out66) 
                                             | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out67) 
                                                | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out68) 
                                                   | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out69) 
                                                      | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out70) 
                                                         | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out71) 
                                                            | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out72) 
                                                               | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out73) 
                                                                  | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out74) 
                                                                     | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out75) 
                                                                        | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out76) 
                                                                           | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out77) 
                                                                              | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out78) 
                                                                                | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out79) 
                                                                                | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out80) 
                                                                                | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out81) 
                                                                                | (IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out83))))))))))))))))))))))))))));
    vlSelfRef.umips_top__DOT__WriteRegE = ((IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RegDstDE)
                                            ? (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RtDE)
                                            : (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RdDE));
    if (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE_CLR))) {
        vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RF_ReadData1_DE = 0U;
        vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__SignImmDE = 0U;
        vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RF_ReadData2_DE = 0U;
        vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RsDE = 0U;
        vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__ALUControlDE = 0U;
        vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__Out_selectDE = 0U;
        vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RdDE = 0U;
        vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RtDE = 0U;
    } else {
        vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RF_ReadData1_DE 
            = vlSelfRef.umips_top__DOT__RF_ReadData1_D;
        vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__SignImmDE 
            = vlSelfRef.umips_top__DOT__SignImmD;
        vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RF_ReadData2_DE 
            = vlSelfRef.umips_top__DOT__RF_ReadData2_D;
        vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RsDE 
            = (0x1fU & (vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__InstrFD 
                        >> 0x15U));
        vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__ALUControlDE 
            = ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out111) 
               | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out112) 
                  | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out113) 
                     | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out114) 
                        | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out115) 
                           | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out116) 
                              | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out117) 
                                 | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out118) 
                                    | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out119) 
                                       | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out120) 
                                          | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out126) 
                                             | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out127) 
                                                | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out128) 
                                                   | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out129) 
                                                      | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out130) 
                                                         | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out131) 
                                                            | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out132) 
                                                               | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out133) 
                                                                  | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out134) 
                                                                     | (IData)(vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out138))))))))))))))))))));
        vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__Out_selectDE 
            = ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out84) 
               | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out85) 
                  | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out86) 
                     | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out87) 
                        | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out88) 
                           | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out89) 
                              | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out90) 
                                 | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out91) 
                                    | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out92) 
                                       | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out93) 
                                          | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out97) 
                                             | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out98) 
                                                | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out99) 
                                                   | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out100) 
                                                      | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out101) 
                                                         | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out102) 
                                                            | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out103) 
                                                               | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out104) 
                                                                  | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out105) 
                                                                     | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out106) 
                                                                        | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out107) 
                                                                           | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out108) 
                                                                              | (IData)(vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out110)))))))))))))))))))))));
        vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RdDE 
            = (0x1fU & (vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__InstrFD 
                        >> 0xbU));
        vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RtDE 
            = (0x1fU & (vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__InstrFD 
                        >> 0x10U));
    }
    vlSelfRef.umips_top__DOT__ForwardAE = ((((0U != (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RsDE)) 
                                             & ((IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RsDE) 
                                                == (IData)(vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__WriteRegEM))) 
                                            & (IData)(vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__RegWriteEM))
                                            ? 1U : 
                                           ((((0U != (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RsDE)) 
                                              & ((IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RsDE) 
                                                 == (IData)(vlSelfRef.umips_top__DOT__pipeline_regMW__DOT__WriteRegMW))) 
                                             & (IData)(vlSelfRef.umips_top__DOT__pipeline_regMW__DOT__RegWriteMW))
                                             ? 2U : 0U));
    vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RegWriteDE 
        = ((1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE_CLR)))) 
           && (IData)(vlSelfRef.umips_top__DOT__controller__DOT__RegWrite_r));
    if (vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__start_multDE) {
        vlSelfRef.umips_top__DOT__mult_resultE = ((QData)((IData)(vlSelfRef.umips_top__DOT__ALU_in_1)) 
                                                  * (QData)((IData)(vlSelfRef.umips_top__DOT__ForwardBE_MUX_out)));
    }
    vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RegDstDE 
        = ((1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE_CLR)))) 
           && ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out28) 
               | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out29) 
                  | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out30) 
                     | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out31) 
                        | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out32) 
                           | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out33) 
                              | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out34) 
                                 | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out35) 
                                    | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out37) 
                                       | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out41) 
                                          | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out42) 
                                             | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out43) 
                                                | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out44) 
                                                   | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out45) 
                                                      | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out46) 
                                                         | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out47) 
                                                            | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out48) 
                                                               | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out49) 
                                                                  | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out50) 
                                                                     | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out51) 
                                                                        | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out52) 
                                                                           | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out53) 
                                                                              | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out54) 
                                                                                | (IData)(vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55)))))))))))))))))))))))));
    vlSelfRef.umips_top__DOT__ForwardBE = ((((0U != (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RtDE)) 
                                             & ((IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RtDE) 
                                                == (IData)(vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__WriteRegEM))) 
                                            & (IData)(vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__RegWriteEM))
                                            ? 1U : 
                                           (((((0U 
                                                != (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RtDE)) 
                                               & ((IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RtDE) 
                                                  == (IData)(vlSelfRef.umips_top__DOT__pipeline_regMW__DOT__WriteRegMW))) 
                                              | ((0U 
                                                  != (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RtDE)) 
                                                 & ((IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RtDE) 
                                                    == (IData)(vlSelfRef.umips_top__DOT__WriteRegE)))) 
                                             & (IData)(vlSelfRef.umips_top__DOT__pipeline_regMW__DOT__RegWriteMW))
                                             ? 2U : 0U));
}

VL_INLINE_OPT void Vumips_top___024root___nba_sequent__TOP__2(Vumips_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vumips_top___024root___nba_sequent__TOP__2\n"); );
    Vumips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.umips_top__DOT__PCplus4_out = 0U;
}

VL_INLINE_OPT void Vumips_top___024root___nba_sequent__TOP__3(Vumips_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vumips_top___024root___nba_sequent__TOP__3\n"); );
    Vumips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.umips_top__DOT__FD_MemStall = ((IData)(vlSelfRef.umips_top__DOT__mem_access_status) 
                                             && (IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemRead_r));
}

VL_INLINE_OPT void Vumips_top___024root___nba_sequent__TOP__4(Vumips_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vumips_top___024root___nba_sequent__TOP__4\n"); );
    Vumips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.umips_top__DOT__PCplus4_out = ((IData)(4U) 
                                             + vlSelfRef.umips_top__DOT__PC_r);
    if ((4U & (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__ALUControlDE))) {
        if ((2U & (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__ALUControlDE))) {
            if ((1U & (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__ALUControlDE))) {
                vlSelfRef.umips_top__DOT__ALUoutE = 
                    (vlSelfRef.umips_top__DOT__ALU__DOT__S 
                     >> 0x1fU);
            }
        } else {
            vlSelfRef.umips_top__DOT__ALUoutE = ((1U 
                                                  & (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__ALUControlDE))
                                                  ? vlSelfRef.umips_top__DOT__ALU_in_2
                                                  : 
                                                 (~ 
                                                  (vlSelfRef.umips_top__DOT__ALU_in_1 
                                                   ^ vlSelfRef.umips_top__DOT__ALU__DOT__BB)));
        }
    } else {
        vlSelfRef.umips_top__DOT__ALUoutE = ((2U & (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__ALUControlDE))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__ALUControlDE))
                                                  ? 
                                                 (vlSelfRef.umips_top__DOT__ALU_in_1 
                                                  ^ vlSelfRef.umips_top__DOT__ALU__DOT__BB)
                                                  : vlSelfRef.umips_top__DOT__ALU__DOT__S)
                                              : ((1U 
                                                  & (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__ALUControlDE))
                                                  ? 
                                                 (vlSelfRef.umips_top__DOT__ALU_in_1 
                                                  | vlSelfRef.umips_top__DOT__ALU__DOT__BB)
                                                  : 
                                                 (vlSelfRef.umips_top__DOT__ALU_in_1 
                                                  & vlSelfRef.umips_top__DOT__ALU__DOT__BB)));
    }
}

VL_INLINE_OPT void Vumips_top___024root___nba_sequent__TOP__5(Vumips_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vumips_top___024root___nba_sequent__TOP__5\n"); );
    Vumips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.reset) {
        vlSelfRef.umips_top__DOT__read_dataM = 0U;
        vlSelfRef.umips_top__DOT__mem_access_status = 0U;
        vlSelfRef.umips_top__DOT__PC_r = 0U;
    } else {
        if (vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__MemReadEM) {
            vlSelfRef.umips_top__DOT__read_dataM = 
                ((IData)(vlSelfRef.umips_top__DOT__cache__DOT__hit)
                  ? vlSelfRef.umips_top__DOT__cache__DOT__cache_memory
                 [(0x1fU & vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__ALUoutEM)][0U]
                  : 0U);
            vlSelfRef.umips_top__DOT__mem_access_status 
                = (1U & (~ (IData)(vlSelfRef.umips_top__DOT__cache__DOT__hit)));
        }
        if ((1U & (~ ((~ (IData)(vlSelfRef.reset)) 
                      & ((IData)(vlSelfRef.umips_top__DOT__StallF) 
                         | ((IData)(vlSelfRef.umips_top__DOT__mult_status) 
                            | ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__start_mult_r) 
                               | ((IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__start_multDE) 
                                  | ((IData)(vlSelfRef.umips_top__DOT__FD_nEN) 
                                     & (IData)(vlSelfRef.umips_top__DOT__is_lw_sw)))))))))) {
            vlSelfRef.umips_top__DOT__PC_r = ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__se_ze_r)
                                               ? (0x3ffffffU 
                                                  & VL_SHIFTL_III(26,26,32, vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__InstrFD, 2U))
                                               : (((IData)(vlSelfRef.umips_top__DOT__controller__DOT__Output_branch_r) 
                                                   & (vlSelfRef.umips_top__DOT__RF_ReadData1_D 
                                                      != vlSelfRef.umips_top__DOT__RF_ReadData2_D))
                                                   ? 
                                                  (VL_SHIFTL_III(32,32,32, vlSelfRef.umips_top__DOT__SignImmD, 2U) 
                                                   + vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__PCplus4FD)
                                                   : vlSelfRef.umips_top__DOT__PCplus4_out));
        }
    }
    if (vlSelfRef.__VdlySet__umips_top__DOT__cache__DOT__cache_memory__v0) {
        vlSelfRef.umips_top__DOT__cache__DOT__cache_memory[vlSelfRef.__VdlyDim0__umips_top__DOT__cache__DOT__cache_memory__v0][0U] 
            = vlSelfRef.__VdlyVal__umips_top__DOT__cache__DOT__cache_memory__v0[0U];
        vlSelfRef.umips_top__DOT__cache__DOT__cache_memory[vlSelfRef.__VdlyDim0__umips_top__DOT__cache__DOT__cache_memory__v0][1U] 
            = vlSelfRef.__VdlyVal__umips_top__DOT__cache__DOT__cache_memory__v0[1U];
        vlSelfRef.umips_top__DOT__cache__DOT__cache_memory[vlSelfRef.__VdlyDim0__umips_top__DOT__cache__DOT__cache_memory__v0][2U] 
            = vlSelfRef.__VdlyVal__umips_top__DOT__cache__DOT__cache_memory__v0[2U];
        vlSelfRef.umips_top__DOT__cache__DOT__cache_memory[vlSelfRef.__VdlyDim0__umips_top__DOT__cache__DOT__cache_memory__v0][3U] 
            = vlSelfRef.__VdlyVal__umips_top__DOT__cache__DOT__cache_memory__v0[3U];
    }
    vlSelfRef.umips_top__DOT__is_lw_sw = ((1U & (~ (IData)(vlSelfRef.reset))) 
                                          && ((0x23U 
                                               == (0x3fU 
                                                   & ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                      >> 6U))) 
                                              || (0x2bU 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                      >> 6U)))));
}

VL_INLINE_OPT void Vumips_top___024root___nba_sequent__TOP__6(Vumips_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vumips_top___024root___nba_sequent__TOP__6\n"); );
    Vumips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__InstrFD 
        = vlSelfRef.__Vdly__umips_top__DOT__pipeline_regFD__DOT__InstrFD;
    if (vlSelfRef.reset) {
        vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__ALUoutEM = 0U;
        vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__PCplus4FD = 0U;
    } else {
        vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__ALUoutEM 
            = vlSelfRef.umips_top__DOT__ALUoutE;
        if ((1U & (~ (IData)(vlSelfRef.umips_top__DOT__FD_nEN)))) {
            vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__PCplus4FD 
                = vlSelfRef.umips_top__DOT__PCplus4_out;
        }
    }
    vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__MemReadEM 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__MemReadDE));
    vlSelfRef.umips_top__DOT__mult_status = (1U & (~ (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__start_multDE)));
    vlSelfRef.umips_top__DOT__SignImmD = (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__InstrFD 
                                                          >> 0xfU)))) 
                                           << 0x10U) 
                                          | (0xffffU 
                                             & vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__InstrFD));
    vlSelfRef.umips_top__DOT__controller__DOT__op_Func 
        = ((0xfc0U & (vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__InstrFD 
                      >> 0x14U)) | (0x3fU & vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__InstrFD));
    if ((0x800U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
        if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                      >> 0xaU)))) {
            if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                          >> 9U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                              >> 8U)))) {
                    if ((0x80U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                        if ((0x40U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out35 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out118 = 2U;
                            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out7 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out63 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out91 = 0U;
                        }
                    }
                }
            }
            if ((0x200U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                              >> 8U)))) {
                    if ((0x80U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                        if ((0x40U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out8 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out119 = 2U;
                            vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out64 = 0U;
                            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out92 = 0U;
                        }
                    }
                }
            }
        }
        vlSelfRef.umips_top__DOT__controller__DOT__RegWrite_r 
            = ((1U & ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                      >> 0xaU)) || ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                              >> 9U))) 
                                    || ((1U & ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                               >> 8U)) 
                                        || ((1U & (~ 
                                                   ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                    >> 7U))) 
                                            || (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                    >> 6U)))))));
        if ((0x400U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
            vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out138 = 4U;
            vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out83 = 0U;
            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out110 = 0U;
        } else if ((0x200U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
            if ((0x100U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out138 = 4U;
                vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out83 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out110 = 0U;
            } else if ((0x80U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                              >> 6U)))) {
                    vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out138 = 4U;
                    vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out83 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out110 = 0U;
                }
            } else {
                vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out138 = 4U;
                vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out83 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out110 = 0U;
            }
        } else if ((0x100U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
            vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out138 = 4U;
            vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out83 = 0U;
            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out110 = 0U;
        } else if ((0x80U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
            if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                          >> 6U)))) {
                vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out138 = 4U;
                vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out83 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out110 = 0U;
            }
        } else {
            vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out138 = 4U;
            vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out83 = 0U;
            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out110 = 0U;
        }
    } else {
        vlSelfRef.umips_top__DOT__controller__DOT__RegWrite_r 
            = ((1U & ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                      >> 0xaU)) || ((1U & ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                           >> 9U)) 
                                    || (1U & ((0x100U 
                                               & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                               ? ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                  >> 7U)
                                               : ((0x80U 
                                                   & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                                   ? 
                                                  ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                   >> 6U)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                       >> 6U)) 
                                                   || ((1U 
                                                        & ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                           >> 5U)) 
                                                       || ((0x10U 
                                                            & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                                            ? 
                                                           ((8U 
                                                             & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                                             ? 
                                                            ((1U 
                                                              & ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                                 >> 2U)) 
                                                             || (1U 
                                                                 & ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                                    >> 1U)))
                                                             : 
                                                            ((1U 
                                                              & ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                                 >> 2U)) 
                                                             || ((1U 
                                                                  & ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                                     >> 1U)) 
                                                                 || (1U 
                                                                     & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func)))))
                                                            : 
                                                           ((1U 
                                                             & ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                                >> 3U)) 
                                                            || ((1U 
                                                                 & ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                                    >> 2U)) 
                                                                || ((1U 
                                                                     & ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                                        >> 1U)) 
                                                                    || (1U 
                                                                        & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func)))))))))))));
        if ((0x400U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
            vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out138 = 4U;
            vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out83 = 0U;
            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out110 = 0U;
        } else if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                             >> 9U)))) {
            if ((0x100U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                if ((0x80U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                    vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out138 = 4U;
                    vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out83 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out110 = 0U;
                }
            } else if ((0x80U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                if ((0x40U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                    vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out138 = 4U;
                    vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out83 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out110 = 0U;
                }
            } else if ((0x40U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out138 = 4U;
                vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out83 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out110 = 0U;
            } else if ((0x20U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                if ((0x10U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                    vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out138 = 4U;
                    vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out83 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out110 = 0U;
                } else if ((8U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                    if ((4U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                        vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out138 = 4U;
                        vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out83 = 0U;
                        vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                        vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                        vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out110 = 0U;
                    } else if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                         >> 1U)))) {
                        vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out138 = 4U;
                        vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out83 = 0U;
                        vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                        vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                        vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out110 = 0U;
                    }
                } else if ((4U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                    if ((2U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                        if ((1U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out138 = 4U;
                            vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out83 = 0U;
                            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out110 = 0U;
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                if ((8U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                    if ((4U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                        vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out138 = 4U;
                        vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out83 = 0U;
                        vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                        vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                        vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out110 = 0U;
                    } else if ((2U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                        vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out138 = 4U;
                        vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out83 = 0U;
                        vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                        vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                        vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out110 = 0U;
                    }
                } else if ((4U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                    vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out138 = 4U;
                    vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out83 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out110 = 0U;
                } else if ((2U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                    if ((1U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                        vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out138 = 4U;
                        vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out83 = 0U;
                        vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                        vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                        vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out110 = 0U;
                    }
                } else if ((1U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                    vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out138 = 4U;
                    vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out83 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out110 = 0U;
                }
            } else if ((8U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out138 = 4U;
                vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out83 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out110 = 0U;
            } else if ((4U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out138 = 4U;
                vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out83 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out110 = 0U;
            } else if ((2U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out138 = 4U;
                vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out83 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out110 = 0U;
            } else if ((1U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out138 = 4U;
                vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out83 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out110 = 0U;
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                  >> 0xbU)))) {
        if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                      >> 0xaU)))) {
            if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                          >> 9U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                              >> 8U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                  >> 7U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                      >> 6U)))) {
                            if ((0x20U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                                if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func)))) {
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out19 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out47 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out130 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out75 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out102 = 0U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                                                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out103 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out76 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out131 = 1U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out20 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out48 = 0U;
                                                }
                                            }
                                            if ((2U 
                                                 & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func)))) {
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out132 = 3U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out21 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out49 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out77 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out104 = 0U;
                                                }
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func)))) {
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out128 = 0xaU;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out17 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out45 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out73 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out100 = 0U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                                                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out46 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out129 = 0xaU;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out18 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out74 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out101 = 0U;
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out127 = 2U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out16 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out44 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out72 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out99 = 0U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func)))) {
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out126 = 2U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out15 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out43 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out71 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out98 = 0U;
                                                }
                                            }
                                        }
                                    }
                                    if ((8U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out23 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out106 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out79 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out134 = 7U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out51 = 0U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func)))) {
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out133 = 7U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out50 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out105 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out22 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out78 = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                          >> 5U)))) {
                                if ((0x10U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func)))) {
                                                    vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out80 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out24 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out52 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out107 = 1U;
                                                }
                                            }
                                            if ((2U 
                                                 & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func)))) {
                                                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out53 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out108 = 2U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out25 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out81 = 0U;
                                                }
                                            }
                                        }
                                    }
                                    if ((8U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out14 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out70 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out42 = 0U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func)))) {
                                                    vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out69 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out13 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out41 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out97 = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func)))) {
                                                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out54 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out26 = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((0x80U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                        if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                      >> 6U)))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out66 = 0U;
                        }
                    }
                }
                if ((0x100U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                    if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                  >> 7U)))) {
                        if ((0x40U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out67 = 0U;
                            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out11 = 0U;
                        }
                        if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                      >> 6U)))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out68 = 0U;
                            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out12 = 0U;
                        }
                    }
                }
            }
            if ((0x200U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                if ((0x100U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                    if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                  >> 7U)))) {
                        if ((0x40U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out114 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out87 = 0U;
                            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out3 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out31 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out59 = 0U;
                        }
                        if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                      >> 6U)))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out30 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out113 = 0U;
                            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out2 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out58 = 0U;
                            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out86 = 0U;
                        }
                    }
                    if ((0x80U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                        if ((0x40U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out65 = 0U;
                            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out9 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out93 = 3U;
                            vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out120 = 5U;
                            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out37 = 1U;
                        }
                        if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                      >> 6U)))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out60 = 0U;
                            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out4 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out32 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out115 = 3U;
                            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out88 = 0U;
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                              >> 8U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                  >> 7U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                      >> 6U)))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out56 = 0U;
                            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out28 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out84 = 0U;
                            vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out111 = 2U;
                            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out0 = 1U;
                        }
                        if ((0x40U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out29 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out85 = 0U;
                            vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out112 = 2U;
                            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out1 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out57 = 0U;
                        }
                    }
                    if ((0x80U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                        if ((0x40U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out62 = 0U;
                            vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out117 = 7U;
                            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out6 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out34 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out90 = 0U;
                        }
                        if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                      >> 6U)))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out33 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out5 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r__strong__out116 = 7U;
                            vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r__strong__out61 = 0U;
                            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out89 = 0U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.umips_top__DOT__controller__DOT__MemWrite_r 
        = ((1U & ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                  >> 0xbU)) && ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                          >> 0xaU))) 
                                && ((1U & ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                           >> 9U)) 
                                    && ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                  >> 8U))) 
                                        && ((1U & ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                   >> 7U)) 
                                            && (1U 
                                                & ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                   >> 6U)))))));
    vlSelfRef.umips_top__DOT__controller__DOT__se_ze_r 
        = ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                     >> 0xbU))) && ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                              >> 0xaU))) 
                                    && ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                  >> 9U))) 
                                        && ((1U & (~ 
                                                   ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                    >> 8U))) 
                                            && ((1U 
                                                 & ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                    >> 7U)) 
                                                && (1U 
                                                    & (~ 
                                                       ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                        >> 6U))))))));
    vlSelfRef.umips_top__DOT__controller__DOT__Output_branch_r 
        = ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                     >> 0xbU))) && ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                              >> 0xaU))) 
                                    && ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                  >> 9U))) 
                                        && ((1U & ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                   >> 8U)) 
                                            && (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                    >> 7U)))))));
    vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__MemReadDE 
        = ((1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE_CLR)))) 
           && (IData)(vlSelfRef.umips_top__DOT__controller__DOT__MemRead_r));
    vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__start_multDE 
        = ((1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE_CLR)))) 
           && (IData)(vlSelfRef.umips_top__DOT__controller__DOT__start_mult_r));
    vlSelfRef.umips_top__DOT__controller__DOT__MemRead_r 
        = ((1U & ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                  >> 0xbU)) && ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                          >> 0xaU))) 
                                && ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                              >> 9U))) 
                                    && ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                  >> 8U))) 
                                        && ((1U & ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                   >> 7U)) 
                                            && (1U 
                                                & ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                   >> 6U)))))));
    vlSelfRef.umips_top__DOT__controller__DOT__start_mult_r 
        = ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                     >> 0xbU))) && ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                              >> 0xaU))) 
                                    && ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                  >> 9U))) 
                                        && ((1U & (~ 
                                                   ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                    >> 8U))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                     >> 7U))) 
                                                && ((1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                         >> 6U))) 
                                                    && ((1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                             >> 5U))) 
                                                        && ((1U 
                                                             & ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                                >> 4U)) 
                                                            && ((1U 
                                                                 & ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                                    >> 3U)) 
                                                                && ((1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                                         >> 2U))) 
                                                                    && (1U 
                                                                        & (~ 
                                                                           ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                                            >> 1U)))))))))))));
}

VL_INLINE_OPT void Vumips_top___024root___nba_comb__TOP__0(Vumips_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vumips_top___024root___nba_comb__TOP__0\n"); );
    Vumips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.umips_top__DOT__write_dataD = ((2U & (IData)(vlSelfRef.umips_top__DOT__pipeline_regMW__DOT__Out_SelectMW))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.umips_top__DOT__pipeline_regMW__DOT__Out_SelectMW))
                                                  ? vlSelfRef.umips_top__DOT__pipeline_regMW__DOT__lui_extendedMW
                                                  : vlSelfRef.umips_top__DOT__lo)
                                              : ((1U 
                                                  & (IData)(vlSelfRef.umips_top__DOT__pipeline_regMW__DOT__Out_SelectMW))
                                                  ? vlSelfRef.umips_top__DOT__hi
                                                  : 
                                                 ((IData)(vlSelfRef.umips_top__DOT__pipeline_regMW__DOT__MemtoRegMW)
                                                   ? 
                                                  ((IData)(vlSelfRef.umips_top__DOT__loc_access)
                                                    ? vlSelfRef.umips_top__DOT__read_dataM
                                                    : vlSelfRef.umips_top__DOT__pipeline_regMW__DOT__ReadDataMW)
                                                   : vlSelfRef.umips_top__DOT__pipeline_regMW__DOT__ALUoutMW)));
    vlSelfRef.umips_top__DOT__RF_ReadData1_D = ((((0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__InstrFD 
                                                       >> 0x15U))) 
                                                  & ((0x1fU 
                                                      & (vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__InstrFD 
                                                         >> 0x15U)) 
                                                     == (IData)(vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__WriteRegEM))) 
                                                 & (IData)(vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__RegWriteEM))
                                                 ? vlSelfRef.umips_top__DOT__pipeline_regMW__DOT__ALUoutMW
                                                 : 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__InstrFD 
                                                      >> 0x15U)))
                                                  ? 0U
                                                  : 
                                                 vlSelfRef.umips_top__DOT__regfile__DOT__rf
                                                 [(0x1fU 
                                                   & (vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__InstrFD 
                                                      >> 0x15U))]));
    vlSelfRef.umips_top__DOT__cache__DOT__hit = ((vlSelfRef.umips_top__DOT__cache__DOT__tag_memory
                                                  [
                                                  (0x1fU 
                                                   & vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__ALUoutEM)] 
                                                  == 
                                                  VL_SHIFTR_III(32,32,32, vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__ALUoutEM, 5U)) 
                                                 & (0U 
                                                    != 
                                                    (((vlSelfRef.umips_top__DOT__cache__DOT__cache_memory
                                                       [
                                                       (0x1fU 
                                                        & vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__ALUoutEM)][0U] 
                                                       | vlSelfRef.umips_top__DOT__cache__DOT__cache_memory
                                                       [
                                                       (0x1fU 
                                                        & vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__ALUoutEM)][1U]) 
                                                      | vlSelfRef.umips_top__DOT__cache__DOT__cache_memory
                                                      [
                                                      (0x1fU 
                                                       & vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__ALUoutEM)][2U]) 
                                                     | vlSelfRef.umips_top__DOT__cache__DOT__cache_memory
                                                     [
                                                     (0x1fU 
                                                      & vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__ALUoutEM)][3U])));
    vlSelfRef.umips_top__DOT__RF_ReadData2_D = ((((0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__InstrFD 
                                                       >> 0x10U))) 
                                                  & ((0x1fU 
                                                      & (vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__InstrFD 
                                                         >> 0x10U)) 
                                                     == (IData)(vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__WriteRegEM))) 
                                                 & ((IData)(vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__RegWriteEM) 
                                                    | (IData)(vlSelfRef.umips_top__DOT__controller__DOT__start_mult_r)))
                                                 ? vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__ALUoutEM
                                                 : 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__InstrFD 
                                                      >> 0x10U)))
                                                  ? 0U
                                                  : 
                                                 vlSelfRef.umips_top__DOT__regfile__DOT__rf
                                                 [(0x1fU 
                                                   & (vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__InstrFD 
                                                      >> 0x10U))]));
    vlSelfRef.umips_top__DOT__ALU_in_1 = ((2U & (IData)(vlSelfRef.umips_top__DOT__ForwardAE))
                                           ? ((1U & (IData)(vlSelfRef.umips_top__DOT__ForwardAE))
                                               ? vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RF_ReadData1_DE
                                               : vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__ALUoutEM)
                                           : ((1U & (IData)(vlSelfRef.umips_top__DOT__ForwardAE))
                                               ? vlSelfRef.umips_top__DOT__write_dataD
                                               : vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RF_ReadData1_DE));
    vlSelfRef.umips_top__DOT__ForwardBE_MUX_out = (
                                                   (2U 
                                                    & (IData)(vlSelfRef.umips_top__DOT__ForwardBE))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.umips_top__DOT__ForwardBE))
                                                     ? vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RF_ReadData2_DE
                                                     : vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__ALUoutEM)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.umips_top__DOT__ForwardBE))
                                                     ? vlSelfRef.umips_top__DOT__write_dataD
                                                     : vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RF_ReadData2_DE));
    vlSelfRef.umips_top__DOT__ALU_in_2 = ((IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__ALUSrcDE)
                                           ? vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__SignImmDE
                                           : vlSelfRef.umips_top__DOT__ForwardBE_MUX_out);
    vlSelfRef.umips_top__DOT__ALU__DOT__BB = ((8U & (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__ALUControlDE))
                                               ? (~ vlSelfRef.umips_top__DOT__ALU_in_2)
                                               : vlSelfRef.umips_top__DOT__ALU_in_2);
    vlSelfRef.umips_top__DOT__ALU__DOT__S = (vlSelfRef.umips_top__DOT__ALU_in_1 
                                             + (vlSelfRef.umips_top__DOT__ALU__DOT__BB 
                                                + (1U 
                                                   & ((IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__ALUControlDE) 
                                                      >> 3U))));
}

VL_INLINE_OPT void Vumips_top___024root___nba_comb__TOP__1(Vumips_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vumips_top___024root___nba_comb__TOP__1\n"); );
    Vumips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ umips_top__DOT__hazard__DOT__lwstall;
    umips_top__DOT__hazard__DOT__lwstall = 0;
    CData/*0:0*/ umips_top__DOT__hazard__DOT__branchstall;
    umips_top__DOT__hazard__DOT__branchstall = 0;
    CData/*0:0*/ umips_top__DOT__hazard__DOT__jumpstall;
    umips_top__DOT__hazard__DOT__jumpstall = 0;
    // Body
    vlSelfRef.umips_top__DOT__FD_nEN = (((IData)(vlSelfRef.umips_top__DOT__FD_MemStall) 
                                         | (IData)(vlSelfRef.umips_top__DOT__mem_access_status)) 
                                        & ((~ ((IData)(vlSelfRef.umips_top__DOT__loc_access) 
                                               & (4U 
                                                  == (IData)(vlSelfRef.umips_top__DOT__lw_sw_cnt)))) 
                                           & (IData)(vlSelfRef.umips_top__DOT__is_lw_sw)));
    umips_top__DOT__hazard__DOT__branchstall = ((((IData)(vlSelfRef.umips_top__DOT__controller__DOT__Output_branch_r) 
                                                  & (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__RegWriteDE)) 
                                                 & (((IData)(vlSelfRef.umips_top__DOT__WriteRegE) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__InstrFD 
                                                         >> 0x15U))) 
                                                    | ((IData)(vlSelfRef.umips_top__DOT__WriteRegE) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__InstrFD 
                                                           >> 0x10U))))) 
                                                | (((IData)(vlSelfRef.umips_top__DOT__controller__DOT__Output_branch_r) 
                                                    & (IData)(vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__MemtoRegEM)) 
                                                   & (((IData)(vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__WriteRegEM) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__InstrFD 
                                                           >> 0x15U))) 
                                                      | ((IData)(vlSelfRef.umips_top__DOT__pipeline_regEM__DOT__WriteRegEM) 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__InstrFD 
                                                             >> 0x10U))))));
    umips_top__DOT__hazard__DOT__lwstall = ((0x23U 
                                             == (vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__InstrFD 
                                                 >> 0x1aU)) 
                                            & (IData)(vlSelfRef.umips_top__DOT__FD_nEN));
    umips_top__DOT__hazard__DOT__jumpstall = (2U == 
                                              (vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__InstrFD 
                                               >> 0x1aU));
    vlSelfRef.umips_top__DOT__StallF = (((IData)(umips_top__DOT__hazard__DOT__jumpstall) 
                                         | (IData)(vlSelfRef.umips_top__DOT__mult_status)) 
                                        | (IData)(umips_top__DOT__hazard__DOT__branchstall));
    vlSelfRef.umips_top__DOT__pipeline_regDE_CLR = 
        ((IData)(umips_top__DOT__hazard__DOT__lwstall) 
         | (IData)(umips_top__DOT__hazard__DOT__branchstall));
}

void Vumips_top___024root___eval_triggers__act(Vumips_top___024root* vlSelf);

bool Vumips_top___024root___eval_phase__act(Vumips_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vumips_top___024root___eval_phase__act\n"); );
    Vumips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vumips_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vumips_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vumips_top___024root___eval_phase__nba(Vumips_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vumips_top___024root___eval_phase__nba\n"); );
    Vumips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vumips_top___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vumips_top___024root___dump_triggers__nba(Vumips_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vumips_top___024root___dump_triggers__act(Vumips_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vumips_top___024root___eval(Vumips_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vumips_top___024root___eval\n"); );
    Vumips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vumips_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("umips_top.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vumips_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("umips_top.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vumips_top___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vumips_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vumips_top___024root___eval_debug_assertions(Vumips_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vumips_top___024root___eval_debug_assertions\n"); );
    Vumips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG

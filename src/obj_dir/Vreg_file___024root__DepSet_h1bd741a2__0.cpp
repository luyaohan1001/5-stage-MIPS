// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreg_file.h for the primary calling header

#include "Vreg_file__pch.h"
#include "Vreg_file___024root.h"

void Vreg_file___024root___ico_sequent__TOP__0(Vreg_file___024root* vlSelf);

void Vreg_file___024root___eval_ico(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_ico\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vreg_file___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vreg_file___024root___ico_sequent__TOP__0(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___ico_sequent__TOP__0\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.RD12 = ((0U == (IData)(vlSelfRef.PR12))
                       ? 0U : vlSelfRef.regfile__DOT__rf
                      [vlSelfRef.PR12]);
    vlSelfRef.RD22 = ((0U == (IData)(vlSelfRef.PR22))
                       ? 0U : vlSelfRef.regfile__DOT__rf
                      [vlSelfRef.PR22]);
    vlSelfRef.RD1 = ((0U == (IData)(vlSelfRef.PR1))
                      ? 0U : vlSelfRef.regfile__DOT__rf
                     [vlSelfRef.PR1]);
    vlSelfRef.RD2 = ((0U == (IData)(vlSelfRef.PR2))
                      ? 0U : vlSelfRef.regfile__DOT__rf
                     [vlSelfRef.PR2]);
}

void Vreg_file___024root___eval_triggers__ico(Vreg_file___024root* vlSelf);

bool Vreg_file___024root___eval_phase__ico(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_phase__ico\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vreg_file___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vreg_file___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vreg_file___024root___eval_act(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_act\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vreg_file___024root___nba_sequent__TOP__0(Vreg_file___024root* vlSelf);

void Vreg_file___024root___eval_nba(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_nba\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vreg_file___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vreg_file___024root___nba_sequent__TOP__0(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___nba_sequent__TOP__0\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__regfile__DOT__rf__v0;
    __VdlySet__regfile__DOT__rf__v0 = 0;
    IData/*31:0*/ __VdlyVal__regfile__DOT__rf__v32;
    __VdlyVal__regfile__DOT__rf__v32 = 0;
    CData/*4:0*/ __VdlyDim0__regfile__DOT__rf__v32;
    __VdlyDim0__regfile__DOT__rf__v32 = 0;
    CData/*0:0*/ __VdlySet__regfile__DOT__rf__v32;
    __VdlySet__regfile__DOT__rf__v32 = 0;
    IData/*31:0*/ __VdlyVal__regfile__DOT__rf__v33;
    __VdlyVal__regfile__DOT__rf__v33 = 0;
    CData/*4:0*/ __VdlyDim0__regfile__DOT__rf__v33;
    __VdlyDim0__regfile__DOT__rf__v33 = 0;
    CData/*0:0*/ __VdlySet__regfile__DOT__rf__v33;
    __VdlySet__regfile__DOT__rf__v33 = 0;
    // Body
    __VdlySet__regfile__DOT__rf__v0 = 0U;
    __VdlySet__regfile__DOT__rf__v32 = 0U;
    __VdlySet__regfile__DOT__rf__v33 = 0U;
    if (vlSelfRef.Reset) {
        __VdlySet__regfile__DOT__rf__v0 = 1U;
    } else {
        if (((IData)(vlSelfRef.Write) & (0U != (IData)(vlSelfRef.WR)))) {
            __VdlyVal__regfile__DOT__rf__v32 = vlSelfRef.WD;
            __VdlyDim0__regfile__DOT__rf__v32 = vlSelfRef.WR;
            __VdlySet__regfile__DOT__rf__v32 = 1U;
        }
        if (((IData)(vlSelfRef.Write2) & (0U != (IData)(vlSelfRef.WR2)))) {
            __VdlyVal__regfile__DOT__rf__v33 = vlSelfRef.WD2;
            __VdlyDim0__regfile__DOT__rf__v33 = vlSelfRef.WR2;
            __VdlySet__regfile__DOT__rf__v33 = 1U;
        }
    }
    if (__VdlySet__regfile__DOT__rf__v0) {
        vlSelfRef.regfile__DOT__rf[0U] = 0U;
        vlSelfRef.regfile__DOT__rf[1U] = 0U;
        vlSelfRef.regfile__DOT__rf[2U] = 0U;
        vlSelfRef.regfile__DOT__rf[3U] = 0U;
        vlSelfRef.regfile__DOT__rf[4U] = 0U;
        vlSelfRef.regfile__DOT__rf[5U] = 0U;
        vlSelfRef.regfile__DOT__rf[6U] = 0U;
        vlSelfRef.regfile__DOT__rf[7U] = 0U;
        vlSelfRef.regfile__DOT__rf[8U] = 0U;
        vlSelfRef.regfile__DOT__rf[9U] = 0U;
        vlSelfRef.regfile__DOT__rf[0xaU] = 0U;
        vlSelfRef.regfile__DOT__rf[0xbU] = 0U;
        vlSelfRef.regfile__DOT__rf[0xcU] = 0U;
        vlSelfRef.regfile__DOT__rf[0xdU] = 0U;
        vlSelfRef.regfile__DOT__rf[0xeU] = 0U;
        vlSelfRef.regfile__DOT__rf[0xfU] = 0U;
        vlSelfRef.regfile__DOT__rf[0x10U] = 0U;
        vlSelfRef.regfile__DOT__rf[0x11U] = 0U;
        vlSelfRef.regfile__DOT__rf[0x12U] = 0U;
        vlSelfRef.regfile__DOT__rf[0x13U] = 0U;
        vlSelfRef.regfile__DOT__rf[0x14U] = 0U;
        vlSelfRef.regfile__DOT__rf[0x15U] = 0U;
        vlSelfRef.regfile__DOT__rf[0x16U] = 0U;
        vlSelfRef.regfile__DOT__rf[0x17U] = 0U;
        vlSelfRef.regfile__DOT__rf[0x18U] = 0U;
        vlSelfRef.regfile__DOT__rf[0x19U] = 0U;
        vlSelfRef.regfile__DOT__rf[0x1aU] = 0U;
        vlSelfRef.regfile__DOT__rf[0x1bU] = 0U;
        vlSelfRef.regfile__DOT__rf[0x1cU] = 0U;
        vlSelfRef.regfile__DOT__rf[0x1dU] = 0U;
        vlSelfRef.regfile__DOT__rf[0x1eU] = 0U;
        vlSelfRef.regfile__DOT__rf[0x1fU] = 0U;
    }
    if (__VdlySet__regfile__DOT__rf__v32) {
        vlSelfRef.regfile__DOT__rf[__VdlyDim0__regfile__DOT__rf__v32] 
            = __VdlyVal__regfile__DOT__rf__v32;
    }
    if (__VdlySet__regfile__DOT__rf__v33) {
        vlSelfRef.regfile__DOT__rf[__VdlyDim0__regfile__DOT__rf__v33] 
            = __VdlyVal__regfile__DOT__rf__v33;
    }
    vlSelfRef.RD12 = ((0U == (IData)(vlSelfRef.PR12))
                       ? 0U : vlSelfRef.regfile__DOT__rf
                      [vlSelfRef.PR12]);
    vlSelfRef.RD22 = ((0U == (IData)(vlSelfRef.PR22))
                       ? 0U : vlSelfRef.regfile__DOT__rf
                      [vlSelfRef.PR22]);
    vlSelfRef.RD1 = ((0U == (IData)(vlSelfRef.PR1))
                      ? 0U : vlSelfRef.regfile__DOT__rf
                     [vlSelfRef.PR1]);
    vlSelfRef.RD2 = ((0U == (IData)(vlSelfRef.PR2))
                      ? 0U : vlSelfRef.regfile__DOT__rf
                     [vlSelfRef.PR2]);
}

void Vreg_file___024root___eval_triggers__act(Vreg_file___024root* vlSelf);

bool Vreg_file___024root___eval_phase__act(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_phase__act\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vreg_file___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vreg_file___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vreg_file___024root___eval_phase__nba(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_phase__nba\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vreg_file___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_file___024root___dump_triggers__ico(Vreg_file___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_file___024root___dump_triggers__nba(Vreg_file___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_file___024root___dump_triggers__act(Vreg_file___024root* vlSelf);
#endif  // VL_DEBUG

void Vreg_file___024root___eval(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vreg_file___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("reg_file.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vreg_file___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vreg_file___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("reg_file.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vreg_file___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("reg_file.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vreg_file___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vreg_file___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vreg_file___024root___eval_debug_assertions(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_debug_assertions\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.Clk & 0xfeU)))) {
        Verilated::overWidthError("Clk");}
    if (VL_UNLIKELY(((vlSelfRef.Write & 0xfeU)))) {
        Verilated::overWidthError("Write");}
    if (VL_UNLIKELY(((vlSelfRef.Write2 & 0xfeU)))) {
        Verilated::overWidthError("Write2");}
    if (VL_UNLIKELY(((vlSelfRef.Reset & 0xfeU)))) {
        Verilated::overWidthError("Reset");}
    if (VL_UNLIKELY(((vlSelfRef.PR1 & 0xe0U)))) {
        Verilated::overWidthError("PR1");}
    if (VL_UNLIKELY(((vlSelfRef.PR2 & 0xe0U)))) {
        Verilated::overWidthError("PR2");}
    if (VL_UNLIKELY(((vlSelfRef.WR & 0xe0U)))) {
        Verilated::overWidthError("WR");}
    if (VL_UNLIKELY(((vlSelfRef.PR12 & 0xe0U)))) {
        Verilated::overWidthError("PR12");}
    if (VL_UNLIKELY(((vlSelfRef.PR22 & 0xe0U)))) {
        Verilated::overWidthError("PR22");}
    if (VL_UNLIKELY(((vlSelfRef.WR2 & 0xe0U)))) {
        Verilated::overWidthError("WR2");}
}
#endif  // VL_DEBUG

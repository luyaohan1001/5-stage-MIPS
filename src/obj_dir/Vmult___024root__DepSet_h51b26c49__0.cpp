// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmult.h for the primary calling header

#include "Vmult__pch.h"
#include "Vmult___024root.h"

void Vmult___024root___eval_act(Vmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmult___024root___eval_act\n"); );
    Vmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vmult___024root___nba_sequent__TOP__0(Vmult___024root* vlSelf);

void Vmult___024root___eval_nba(Vmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmult___024root___eval_nba\n"); );
    Vmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmult___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vmult___024root___nba_sequent__TOP__0(Vmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmult___024root___nba_sequent__TOP__0\n"); );
    Vmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mult_status = (1U & (~ (IData)(vlSelfRef.start)));
    if (vlSelfRef.start) {
        vlSelfRef.s = ((IData)(vlSelfRef.in_is_signed)
                        ? VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.in_a), 
                                      VL_EXTENDS_QI(64,32, vlSelfRef.in_b))
                        : ((QData)((IData)(vlSelfRef.in_a)) 
                           * (QData)((IData)(vlSelfRef.in_b))));
    }
}

void Vmult___024root___eval_triggers__act(Vmult___024root* vlSelf);

bool Vmult___024root___eval_phase__act(Vmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmult___024root___eval_phase__act\n"); );
    Vmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmult___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmult___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmult___024root___eval_phase__nba(Vmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmult___024root___eval_phase__nba\n"); );
    Vmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmult___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmult___024root___dump_triggers__nba(Vmult___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmult___024root___dump_triggers__act(Vmult___024root* vlSelf);
#endif  // VL_DEBUG

void Vmult___024root___eval(Vmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmult___024root___eval\n"); );
    Vmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vmult___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("mult.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmult___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("mult.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmult___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmult___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmult___024root___eval_debug_assertions(Vmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmult___024root___eval_debug_assertions\n"); );
    Vmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.start & 0xfeU)))) {
        Verilated::overWidthError("start");}
    if (VL_UNLIKELY(((vlSelfRef.in_is_signed & 0xfeU)))) {
        Verilated::overWidthError("in_is_signed");}
}
#endif  // VL_DEBUG

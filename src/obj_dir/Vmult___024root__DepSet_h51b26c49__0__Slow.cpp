// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmult.h for the primary calling header

#include "Vmult__pch.h"
#include "Vmult___024root.h"

VL_ATTR_COLD void Vmult___024root___eval_static(Vmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmult___024root___eval_static\n"); );
    Vmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vmult___024root___eval_initial(Vmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmult___024root___eval_initial\n"); );
    Vmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmult___024root___eval_final(Vmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmult___024root___eval_final\n"); );
    Vmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmult___024root___eval_settle(Vmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmult___024root___eval_settle\n"); );
    Vmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmult___024root___dump_triggers__act(Vmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmult___024root___dump_triggers__act\n"); );
    Vmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmult___024root___dump_triggers__nba(Vmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmult___024root___dump_triggers__nba\n"); );
    Vmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmult___024root___ctor_var_reset(Vmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmult___024root___ctor_var_reset\n"); );
    Vmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    vlSelf->in_is_signed = VL_RAND_RESET_I(1);
    vlSelf->in_a = VL_RAND_RESET_I(32);
    vlSelf->in_b = VL_RAND_RESET_I(32);
    vlSelf->mult_status = VL_RAND_RESET_I(1);
    vlSelf->s = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}

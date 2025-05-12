// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreg_file.h for the primary calling header

#include "Vreg_file__pch.h"
#include "Vreg_file___024root.h"

VL_ATTR_COLD void Vreg_file___024root___eval_static(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_static\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__Clk__0 = vlSelfRef.Clk;
}

VL_ATTR_COLD void Vreg_file___024root___eval_initial(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_initial\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vreg_file___024root___eval_final(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_final\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_file___024root___dump_triggers__stl(Vreg_file___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vreg_file___024root___eval_phase__stl(Vreg_file___024root* vlSelf);

VL_ATTR_COLD void Vreg_file___024root___eval_settle(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_settle\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vreg_file___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("reg_file.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vreg_file___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_file___024root___dump_triggers__stl(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___dump_triggers__stl\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vreg_file___024root___ico_sequent__TOP__0(Vreg_file___024root* vlSelf);

VL_ATTR_COLD void Vreg_file___024root___eval_stl(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_stl\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vreg_file___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vreg_file___024root___eval_triggers__stl(Vreg_file___024root* vlSelf);

VL_ATTR_COLD bool Vreg_file___024root___eval_phase__stl(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_phase__stl\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vreg_file___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vreg_file___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_file___024root___dump_triggers__ico(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___dump_triggers__ico\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_file___024root___dump_triggers__act(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___dump_triggers__act\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge Clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_file___024root___dump_triggers__nba(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___dump_triggers__nba\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge Clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vreg_file___024root___ctor_var_reset(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___ctor_var_reset\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->Clk = VL_RAND_RESET_I(1);
    vlSelf->Write = VL_RAND_RESET_I(1);
    vlSelf->Write2 = VL_RAND_RESET_I(1);
    vlSelf->Reset = VL_RAND_RESET_I(1);
    vlSelf->PR1 = VL_RAND_RESET_I(5);
    vlSelf->PR2 = VL_RAND_RESET_I(5);
    vlSelf->WR = VL_RAND_RESET_I(5);
    vlSelf->WD = VL_RAND_RESET_I(32);
    vlSelf->PR12 = VL_RAND_RESET_I(5);
    vlSelf->PR22 = VL_RAND_RESET_I(5);
    vlSelf->WR2 = VL_RAND_RESET_I(5);
    vlSelf->WD2 = VL_RAND_RESET_I(32);
    vlSelf->RD12 = VL_RAND_RESET_I(32);
    vlSelf->RD22 = VL_RAND_RESET_I(32);
    vlSelf->RD1 = VL_RAND_RESET_I(32);
    vlSelf->RD2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->regfile__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__Clk__0 = VL_RAND_RESET_I(1);
}

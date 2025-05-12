// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreg_file.h for the primary calling header

#include "Vreg_file__pch.h"
#include "Vreg_file__Syms.h"
#include "Vreg_file___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_file___024root___dump_triggers__ico(Vreg_file___024root* vlSelf);
#endif  // VL_DEBUG

void Vreg_file___024root___eval_triggers__ico(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_triggers__ico\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vreg_file___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_file___024root___dump_triggers__act(Vreg_file___024root* vlSelf);
#endif  // VL_DEBUG

void Vreg_file___024root___eval_triggers__act(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_triggers__act\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.Clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__Clk__0 = vlSelfRef.Clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vreg_file___024root___dump_triggers__act(vlSelf);
    }
#endif
}

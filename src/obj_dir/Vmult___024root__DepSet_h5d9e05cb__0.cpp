// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmult.h for the primary calling header

#include "Vmult__pch.h"
#include "Vmult__Syms.h"
#include "Vmult___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmult___024root___dump_triggers__act(Vmult___024root* vlSelf);
#endif  // VL_DEBUG

void Vmult___024root___eval_triggers__act(Vmult___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmult___024root___eval_triggers__act\n"); );
    Vmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmult___024root___dump_triggers__act(vlSelf);
    }
#endif
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vumips_top.h for the primary calling header

#include "Vumips_top__pch.h"
#include "Vumips_top__Syms.h"
#include "Vumips_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vumips_top___024root___dump_triggers__act(Vumips_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vumips_top___024root___eval_triggers__act(Vumips_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vumips_top___024root___eval_triggers__act\n"); );
    Vumips_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.umips_top__DOT__mem_access_status)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__umips_top__DOT__mem_access_status__0)));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.reset) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset__0))));
    vlSelfRef.__VactTriggered.setBit(3U, ((~ (IData)(vlSelfRef.clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__umips_top__DOT__mem_access_status__0 
        = vlSelfRef.umips_top__DOT__mem_access_status;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vumips_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

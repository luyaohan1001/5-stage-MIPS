// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipeline_RegDE.h for the primary calling header

#include "VPipeline_RegDE__pch.h"
#include "VPipeline_RegDE__Syms.h"
#include "VPipeline_RegDE___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipeline_RegDE___024root___dump_triggers__ico(VPipeline_RegDE___024root* vlSelf);
#endif  // VL_DEBUG

void VPipeline_RegDE___024root___eval_triggers__ico(VPipeline_RegDE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline_RegDE___024root___eval_triggers__ico\n"); );
    VPipeline_RegDE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPipeline_RegDE___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipeline_RegDE___024root___dump_triggers__act(VPipeline_RegDE___024root* vlSelf);
#endif  // VL_DEBUG

void VPipeline_RegDE___024root___eval_triggers__act(VPipeline_RegDE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline_RegDE___024root___eval_triggers__act\n"); );
    VPipeline_RegDE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.branch_target_predictor_buffer__02Eclk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__branch_target_predictor_buffer__02Eclk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.branch_target_predictor_buffer__02Ereset) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__branch_target_predictor_buffer__02Ereset__0))));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.umips_top__02Eclk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__umips_top__02Eclk__0))));
    vlSelfRef.__VactTriggered.setBit(3U, ((~ (IData)(vlSelfRef.umips_top__DOT__mem_access_status)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__umips_top__DOT__mem_access_status__0)));
    vlSelfRef.__VactTriggered.setBit(4U, ((IData)(vlSelfRef.umips_top__02Ereset) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__umips_top__02Ereset__0))));
    vlSelfRef.__VactTriggered.setBit(5U, ((~ (IData)(vlSelfRef.umips_top__02Eclk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__umips_top__02Eclk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__branch_target_predictor_buffer__02Eclk__0 
        = vlSelfRef.branch_target_predictor_buffer__02Eclk;
    vlSelfRef.__Vtrigprevexpr___TOP__branch_target_predictor_buffer__02Ereset__0 
        = vlSelfRef.branch_target_predictor_buffer__02Ereset;
    vlSelfRef.__Vtrigprevexpr___TOP__umips_top__02Eclk__0 
        = vlSelfRef.umips_top__02Eclk;
    vlSelfRef.__Vtrigprevexpr___TOP__umips_top__DOT__mem_access_status__0 
        = vlSelfRef.umips_top__DOT__mem_access_status;
    vlSelfRef.__Vtrigprevexpr___TOP__umips_top__02Ereset__0 
        = vlSelfRef.umips_top__02Ereset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPipeline_RegDE___024root___dump_triggers__act(vlSelf);
    }
#endif
}

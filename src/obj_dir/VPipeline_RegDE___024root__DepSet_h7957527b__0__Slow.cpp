// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipeline_RegDE.h for the primary calling header

#include "VPipeline_RegDE__pch.h"
#include "VPipeline_RegDE__Syms.h"
#include "VPipeline_RegDE___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipeline_RegDE___024root___dump_triggers__stl(VPipeline_RegDE___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VPipeline_RegDE___024root___eval_triggers__stl(VPipeline_RegDE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline_RegDE___024root___eval_triggers__stl\n"); );
    VPipeline_RegDE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPipeline_RegDE___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

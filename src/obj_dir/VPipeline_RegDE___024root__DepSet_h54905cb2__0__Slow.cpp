// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipeline_RegDE.h for the primary calling header

#include "VPipeline_RegDE__pch.h"
#include "VPipeline_RegDE___024root.h"

VL_ATTR_COLD void VPipeline_RegDE___024root___eval_static(VPipeline_RegDE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline_RegDE___024root___eval_static\n"); );
    VPipeline_RegDE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

VL_ATTR_COLD void VPipeline_RegDE___024root___eval_initial__TOP(VPipeline_RegDE___024root* vlSelf);

VL_ATTR_COLD void VPipeline_RegDE___024root___eval_initial(VPipeline_RegDE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline_RegDE___024root___eval_initial\n"); );
    VPipeline_RegDE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VPipeline_RegDE___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void VPipeline_RegDE___024root___eval_initial__TOP(VPipeline_RegDE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline_RegDE___024root___eval_initial__TOP\n"); );
    VPipeline_RegDE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e62696eU;
    __Vtemp_1[1U] = 0x74657374U;
    __Vtemp_1[2U] = 0x626e655fU;
    VL_READMEM_N(false, 8, 65536, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelfRef.umips_top__DOT__instr_memory__DOT__instr_mem)
                 , 0, ~0ULL);
    vlSelfRef.umips_top__DOT__controller__DOT__Output_branch_r = 0U;
    vlSelfRef.umips_top__DOT__controller__DOT__se_ze_r = 0U;
}

VL_ATTR_COLD void VPipeline_RegDE___024root___eval_final(VPipeline_RegDE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline_RegDE___024root___eval_final\n"); );
    VPipeline_RegDE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipeline_RegDE___024root___dump_triggers__stl(VPipeline_RegDE___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VPipeline_RegDE___024root___eval_phase__stl(VPipeline_RegDE___024root* vlSelf);

VL_ATTR_COLD void VPipeline_RegDE___024root___eval_settle(VPipeline_RegDE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline_RegDE___024root___eval_settle\n"); );
    VPipeline_RegDE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VPipeline_RegDE___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("branch_target_predictor_buffer.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VPipeline_RegDE___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipeline_RegDE___024root___dump_triggers__stl(VPipeline_RegDE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline_RegDE___024root___dump_triggers__stl\n"); );
    VPipeline_RegDE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void VPipeline_RegDE___024root___stl_sequent__TOP__0(VPipeline_RegDE___024root* vlSelf);

VL_ATTR_COLD void VPipeline_RegDE___024root___eval_stl(VPipeline_RegDE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline_RegDE___024root___eval_stl\n"); );
    VPipeline_RegDE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VPipeline_RegDE___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VPipeline_RegDE___024root___stl_sequent__TOP__0(VPipeline_RegDE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline_RegDE___024root___stl_sequent__TOP__0\n"); );
    VPipeline_RegDE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ branch_target_predictor_buffer__DOT____VdfgRegularize_hfe5f1242_0_0;
    branch_target_predictor_buffer__DOT____VdfgRegularize_hfe5f1242_0_0 = 0;
    CData/*0:0*/ umips_top__DOT__hazard__DOT__lwstall;
    umips_top__DOT__hazard__DOT__lwstall = 0;
    CData/*0:0*/ umips_top__DOT__hazard__DOT__branchstall;
    umips_top__DOT__hazard__DOT__branchstall = 0;
    CData/*0:0*/ umips_top__DOT__hazard__DOT__jumpstall;
    umips_top__DOT__hazard__DOT__jumpstall = 0;
    // Body
    vlSelfRef.umips_top__DOT__SignImmD = (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__InstrFD 
                                                          >> 0xfU)))) 
                                           << 0x10U) 
                                          | (0xffffU 
                                             & vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__InstrFD));
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
    vlSelfRef.branch_target_predictor_buffer__DOT__entry_addr 
        = (0x3fU & ((IData)(vlSelfRef.update) ? VL_SHIFTR_III(8,8,32, 
                                                              (0xffU 
                                                               & vlSelfRef.branchUpdatePC), 2U)
                     : VL_SHIFTR_III(8,8,32, (0xffU 
                                              & vlSelfRef.branching_addressF), 2U)));
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
    vlSelfRef.umips_top__DOT__FD_nEN = (((IData)(vlSelfRef.umips_top__DOT__FD_MemStall) 
                                         | (IData)(vlSelfRef.umips_top__DOT__mem_access_status)) 
                                        & ((~ ((IData)(vlSelfRef.umips_top__DOT__loc_access) 
                                               & (4U 
                                                  == (IData)(vlSelfRef.umips_top__DOT__lw_sw_cnt)))) 
                                           & (IData)(vlSelfRef.umips_top__DOT__is_lw_sw)));
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
    vlSelfRef.umips_top__DOT__write_dataD = ((2U & (IData)(vlSelfRef.umips_top__DOT__pipeline_regMW__DOT__Out_SelectMW))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.umips_top__DOT__pipeline_regMW__DOT__Out_SelectMW))
                                                  ? (IData)(vlSelfRef.umips_top__DOT__pipeline_regMW__DOT__lui_extendedMW)
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
    vlSelfRef.umips_top__DOT__controller__DOT__op_Func 
        = ((0xfc0U & (vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__InstrFD 
                      >> 0x14U)) | (0x3fU & vlSelfRef.umips_top__DOT__pipeline_regFD__DOT__InstrFD));
    branch_target_predictor_buffer__DOT____VdfgRegularize_hfe5f1242_0_0 
        = (IData)(vlSelfRef.branch_target_predictor_buffer__DOT__entries
                  [vlSelfRef.branch_target_predictor_buffer__DOT__entry_addr]);
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
    if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                  >> 0xbU)))) {
        if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                      >> 0xaU)))) {
            if ((0x200U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                if ((0x100U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                    if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                  >> 7U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                      >> 6U)))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out2 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out30 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out58 = 0U;
                        }
                        if ((0x40U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out59 = 0U;
                            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out3 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out31 = 1U;
                        }
                    }
                    if ((0x80U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                        if ((0x40U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out37 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out65 = 3U;
                            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out9 = 1U;
                        }
                        if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                      >> 6U)))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out4 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out32 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out60 = 0U;
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                              >> 8U)))) {
                    if ((0x80U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                        if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                      >> 6U)))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out33 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out5 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out61 = 0U;
                        }
                        if ((0x40U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out34 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out6 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out62 = 0U;
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                  >> 7U)))) {
                        if ((0x40U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out29 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out1 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out57 = 0U;
                        }
                        if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                      >> 6U)))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out28 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out0 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out56 = 0U;
                        }
                    }
                }
            }
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
                                            if ((2U 
                                                 & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func)))) {
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out21 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out76 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out49 = 0U;
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func)))) {
                                                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out74 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out19 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out47 = 0U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                                                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out48 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out20 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out75 = 0U;
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
                                                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out72 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out17 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out45 = 0U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out18 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out46 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out73 = 0U;
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out16 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out44 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out71 = 0U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func)))) {
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out15 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out43 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out70 = 0U;
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
                                                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out51 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out23 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out78 = 0U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func)))) {
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out22 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out50 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out77 = 0U;
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
                                            if ((2U 
                                                 & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func)))) {
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out25 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out80 = 2U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out53 = 0U;
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func)))) {
                                                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out79 = 1U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out24 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out52 = 0U;
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
                                                     & (~ (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func)))) {
                                                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out41 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out69 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out13 = 0U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                                                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out42 = 0U;
                                                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out14 = 0U;
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
                                                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out81 = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0x100U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                    if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                  >> 7U)))) {
                        if ((0x40U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out11 = 0U;
                        }
                        if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                      >> 6U)))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out12 = 0U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.umips_top__DOT__controller__DOT__MemtoReg_r 
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
    if ((0x800U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
        if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                      >> 0xaU)))) {
            if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                          >> 9U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                              >> 8U)))) {
                    if ((0x80U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                        if ((0x40U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out7 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out35 = 1U;
                            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out63 = 0U;
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
                            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out64 = 0U;
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
            vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r = 4U;
            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out82 = 0U;
        } else if ((0x200U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
            if ((0x100U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r = 4U;
                vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out82 = 0U;
            } else if ((0x80U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r 
                    = ((0x40U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                        ? 2U : 4U);
                if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                              >> 6U)))) {
                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out82 = 0U;
                }
            } else {
                vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r = 4U;
                vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out82 = 0U;
            }
        } else if ((0x100U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
            vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r = 4U;
            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out82 = 0U;
        } else if ((0x80U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
            vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r 
                = ((0x40U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                    ? 2U : 4U);
            if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                          >> 6U)))) {
                vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out82 = 0U;
            }
        } else {
            vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r = 4U;
            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out82 = 0U;
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
            vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r = 4U;
            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out82 = 0U;
        } else {
            vlSelfRef.umips_top__DOT__controller__DOT__ALU_op_r 
                = ((0x200U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                    ? ((0x100U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                        ? ((0x80U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                            ? ((0x40U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                ? 5U : 3U) : ((0x40U 
                                               & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                               ? 1U
                                               : 0U))
                        : ((0x80U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                            ? 7U : 2U)) : ((0x100U 
                                            & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                            ? ((0x80U 
                                                & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                                ? 4U
                                                : 0U)
                                            : ((0x80U 
                                                & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                                ? (
                                                   (0x40U 
                                                    & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                                    ? 4U
                                                    : 0U)
                                                : (
                                                   (0x40U 
                                                    & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                                    ? 4U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                                      ? 4U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                                        ? 4U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                                         ? 7U
                                                         : 4U))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                                          ? 4U
                                                          : 3U)
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                                          ? 1U
                                                          : 0U))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                                         ? 0xaU
                                                         : 2U))))
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                                        ? 4U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                                         ? 4U
                                                         : 0U))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                                        ? 4U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                                          ? 4U
                                                          : 0U)
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                                          ? 4U
                                                          : 0U))))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                                       ? 4U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                                        ? 4U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                                         ? 4U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))
                                                          ? 4U
                                                          : 0U))))))))));
            if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                          >> 9U)))) {
                if ((0x100U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                    if ((0x80U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                        vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                        vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                        vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out82 = 0U;
                    }
                } else if ((0x80U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                    if ((0x40U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                        vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                        vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                        vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out82 = 0U;
                    }
                } else if ((0x40U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out82 = 0U;
                } else if ((0x20U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                    if ((0x10U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                        vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                        vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                        vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out82 = 0U;
                    } else if ((8U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                        if ((4U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out82 = 0U;
                        } else if ((1U & (~ ((IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func) 
                                             >> 1U)))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out82 = 0U;
                        }
                    } else if ((4U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                        if ((2U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                            if ((1U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                                vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                                vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                                vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out82 = 0U;
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                    if ((8U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                        if ((4U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out82 = 0U;
                        } else if ((2U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out82 = 0U;
                        }
                    } else if ((4U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                        vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                        vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                        vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out82 = 0U;
                    } else if ((2U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                        if ((1U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                            vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                            vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                            vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out82 = 0U;
                        }
                    } else if ((1U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                        vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                        vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                        vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out82 = 0U;
                    }
                } else if ((8U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out82 = 0U;
                } else if ((4U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out82 = 0U;
                } else if ((2U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out82 = 0U;
                } else if ((1U & (IData)(vlSelfRef.umips_top__DOT__controller__DOT__op_Func))) {
                    vlSelfRef.umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = 0U;
                    vlSelfRef.umips_top__DOT__controller__DOT__Out_select_r__strong__out82 = 0U;
                }
            }
        }
    }
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
    if (vlSelfRef.access) {
        vlSelfRef.found = (0xffffffffU != branch_target_predictor_buffer__DOT____VdfgRegularize_hfe5f1242_0_0);
        vlSelfRef.predictPC = branch_target_predictor_buffer__DOT____VdfgRegularize_hfe5f1242_0_0;
    } else {
        vlSelfRef.found = 0U;
        vlSelfRef.predictPC = 0U;
    }
    vlSelfRef.umips_top__DOT__ALU_in_2 = ((IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__ALUSrcDE)
                                           ? vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__SignImmDE
                                           : vlSelfRef.umips_top__DOT__ForwardBE_MUX_out);
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
    vlSelfRef.umips_top__DOT__ALU__DOT__BB = ((8U & (IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__ALUControlDE))
                                               ? (~ vlSelfRef.umips_top__DOT__ALU_in_2)
                                               : vlSelfRef.umips_top__DOT__ALU_in_2);
    vlSelfRef.umips_top__DOT__ALU__DOT__S = (vlSelfRef.umips_top__DOT__ALU_in_1 
                                             + (vlSelfRef.umips_top__DOT__ALU__DOT__BB 
                                                + (1U 
                                                   & ((IData)(vlSelfRef.umips_top__DOT__pipeline_regDE__DOT__ALUControlDE) 
                                                      >> 3U))));
}

VL_ATTR_COLD void VPipeline_RegDE___024root___eval_triggers__stl(VPipeline_RegDE___024root* vlSelf);

VL_ATTR_COLD bool VPipeline_RegDE___024root___eval_phase__stl(VPipeline_RegDE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline_RegDE___024root___eval_phase__stl\n"); );
    VPipeline_RegDE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VPipeline_RegDE___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VPipeline_RegDE___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipeline_RegDE___024root___dump_triggers__ico(VPipeline_RegDE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline_RegDE___024root___dump_triggers__ico\n"); );
    VPipeline_RegDE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void VPipeline_RegDE___024root___dump_triggers__act(VPipeline_RegDE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline_RegDE___024root___dump_triggers__act\n"); );
    VPipeline_RegDE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge branch_target_predictor_buffer.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge branch_target_predictor_buffer.reset)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge umips_top.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge umips_top.mem_access_status)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge umips_top.reset)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(negedge umips_top.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipeline_RegDE___024root___dump_triggers__nba(VPipeline_RegDE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline_RegDE___024root___dump_triggers__nba\n"); );
    VPipeline_RegDE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge branch_target_predictor_buffer.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge branch_target_predictor_buffer.reset)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge umips_top.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge umips_top.mem_access_status)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge umips_top.reset)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(negedge umips_top.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPipeline_RegDE___024root___ctor_var_reset(VPipeline_RegDE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline_RegDE___024root___ctor_var_reset\n"); );
    VPipeline_RegDE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->branch_target_predictor_buffer__02Eclk = VL_RAND_RESET_I(1);
    vlSelf->branch_target_predictor_buffer__02Ereset = VL_RAND_RESET_I(1);
    vlSelf->branching_addressF = VL_RAND_RESET_I(32);
    vlSelf->access = VL_RAND_RESET_I(1);
    vlSelf->update = VL_RAND_RESET_I(1);
    vlSelf->branchUpdatePC = VL_RAND_RESET_I(32);
    vlSelf->branchUpdateTarget = VL_RAND_RESET_I(32);
    vlSelf->found = VL_RAND_RESET_I(1);
    vlSelf->predictPC = VL_RAND_RESET_I(32);
    vlSelf->state = VL_RAND_RESET_I(2);
    vlSelf->umips_top__02Eclk = VL_RAND_RESET_I(1);
    vlSelf->umips_top__02Ereset = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->branch_target_predictor_buffer__DOT__entries[__Vi0] = VL_RAND_RESET_Q(34);
    }
    vlSelf->branch_target_predictor_buffer__DOT__entry_addr = VL_RAND_RESET_I(6);
    vlSelf->umips_top__DOT__PCplus4_out = VL_RAND_RESET_I(32);
    vlSelf->umips_top__DOT__PC_r = VL_RAND_RESET_I(32);
    vlSelf->umips_top__DOT__mem_access_status = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__read_dataM = VL_RAND_RESET_I(32);
    vlSelf->umips_top__DOT__FD_MemStall = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__is_lw_sw = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__lw_sw_cnt = VL_RAND_RESET_I(3);
    vlSelf->umips_top__DOT__loc_access = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__write_dataD = VL_RAND_RESET_I(32);
    vlSelf->umips_top__DOT__mult_status = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__SignImmD = VL_RAND_RESET_I(32);
    vlSelf->umips_top__DOT__RF_ReadData1_D = VL_RAND_RESET_I(32);
    vlSelf->umips_top__DOT__RF_ReadData2_D = VL_RAND_RESET_I(32);
    vlSelf->umips_top__DOT__ALU_in_1 = VL_RAND_RESET_I(32);
    vlSelf->umips_top__DOT__ALU_in_2 = VL_RAND_RESET_I(32);
    vlSelf->umips_top__DOT__ForwardBE_MUX_out = VL_RAND_RESET_I(32);
    vlSelf->umips_top__DOT__ALUoutE = VL_RAND_RESET_I(32);
    vlSelf->umips_top__DOT__mult_resultE = VL_RAND_RESET_Q(64);
    vlSelf->umips_top__DOT__WriteRegE = VL_RAND_RESET_I(5);
    vlSelf->umips_top__DOT__ForwardAE = VL_RAND_RESET_I(2);
    vlSelf->umips_top__DOT__ForwardBE = VL_RAND_RESET_I(2);
    vlSelf->umips_top__DOT__hi = VL_RAND_RESET_I(32);
    vlSelf->umips_top__DOT__lo = VL_RAND_RESET_I(32);
    vlSelf->umips_top__DOT__FD_nEN = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__pipeline_regDE_CLR = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__StallF = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->umips_top__DOT__instr_memory__DOT__instr_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->umips_top__DOT__pipeline_regFD__DOT__InstrFD = VL_RAND_RESET_I(32);
    vlSelf->umips_top__DOT__pipeline_regFD__DOT__PCplus4FD = VL_RAND_RESET_I(32);
    vlSelf->umips_top__DOT__controller__DOT__MemRead_r = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__MemWrite_r = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__RegWrite_r = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__se_ze_r = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__start_mult_r = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__MemtoReg_r = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__ALU_op_r = VL_RAND_RESET_I(4);
    vlSelf->umips_top__DOT__controller__DOT__Output_branch_r = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__op_Func = VL_RAND_RESET_I(12);
    vlSelf->umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out0 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out1 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out2 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out3 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out4 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out5 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out6 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out7 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out8 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out9 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out11 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out12 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out13 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out14 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out15 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out16 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out17 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out18 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out19 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out20 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out21 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out22 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out23 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out24 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out25 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out26 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__ALUSrcA_r__strong__out27 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__RegDst_r__strong__out28 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__RegDst_r__strong__out29 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__RegDst_r__strong__out30 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__RegDst_r__strong__out31 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__RegDst_r__strong__out32 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__RegDst_r__strong__out33 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__RegDst_r__strong__out34 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__RegDst_r__strong__out35 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__RegDst_r__strong__out37 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__RegDst_r__strong__out41 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__RegDst_r__strong__out42 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__RegDst_r__strong__out43 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__RegDst_r__strong__out44 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__RegDst_r__strong__out45 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__RegDst_r__strong__out46 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__RegDst_r__strong__out47 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__RegDst_r__strong__out48 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__RegDst_r__strong__out49 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__RegDst_r__strong__out50 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__RegDst_r__strong__out51 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__RegDst_r__strong__out52 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__RegDst_r__strong__out53 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__RegDst_r__strong__out54 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__RegDst_r__strong__out55 = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__controller__DOT__Out_select_r__strong__out56 = VL_RAND_RESET_I(2);
    vlSelf->umips_top__DOT__controller__DOT__Out_select_r__strong__out57 = VL_RAND_RESET_I(2);
    vlSelf->umips_top__DOT__controller__DOT__Out_select_r__strong__out58 = VL_RAND_RESET_I(2);
    vlSelf->umips_top__DOT__controller__DOT__Out_select_r__strong__out59 = VL_RAND_RESET_I(2);
    vlSelf->umips_top__DOT__controller__DOT__Out_select_r__strong__out60 = VL_RAND_RESET_I(2);
    vlSelf->umips_top__DOT__controller__DOT__Out_select_r__strong__out61 = VL_RAND_RESET_I(2);
    vlSelf->umips_top__DOT__controller__DOT__Out_select_r__strong__out62 = VL_RAND_RESET_I(2);
    vlSelf->umips_top__DOT__controller__DOT__Out_select_r__strong__out63 = VL_RAND_RESET_I(2);
    vlSelf->umips_top__DOT__controller__DOT__Out_select_r__strong__out64 = VL_RAND_RESET_I(2);
    vlSelf->umips_top__DOT__controller__DOT__Out_select_r__strong__out65 = VL_RAND_RESET_I(2);
    vlSelf->umips_top__DOT__controller__DOT__Out_select_r__strong__out69 = VL_RAND_RESET_I(2);
    vlSelf->umips_top__DOT__controller__DOT__Out_select_r__strong__out70 = VL_RAND_RESET_I(2);
    vlSelf->umips_top__DOT__controller__DOT__Out_select_r__strong__out71 = VL_RAND_RESET_I(2);
    vlSelf->umips_top__DOT__controller__DOT__Out_select_r__strong__out72 = VL_RAND_RESET_I(2);
    vlSelf->umips_top__DOT__controller__DOT__Out_select_r__strong__out73 = VL_RAND_RESET_I(2);
    vlSelf->umips_top__DOT__controller__DOT__Out_select_r__strong__out74 = VL_RAND_RESET_I(2);
    vlSelf->umips_top__DOT__controller__DOT__Out_select_r__strong__out75 = VL_RAND_RESET_I(2);
    vlSelf->umips_top__DOT__controller__DOT__Out_select_r__strong__out76 = VL_RAND_RESET_I(2);
    vlSelf->umips_top__DOT__controller__DOT__Out_select_r__strong__out77 = VL_RAND_RESET_I(2);
    vlSelf->umips_top__DOT__controller__DOT__Out_select_r__strong__out78 = VL_RAND_RESET_I(2);
    vlSelf->umips_top__DOT__controller__DOT__Out_select_r__strong__out79 = VL_RAND_RESET_I(2);
    vlSelf->umips_top__DOT__controller__DOT__Out_select_r__strong__out80 = VL_RAND_RESET_I(2);
    vlSelf->umips_top__DOT__controller__DOT__Out_select_r__strong__out81 = VL_RAND_RESET_I(2);
    vlSelf->umips_top__DOT__controller__DOT__Out_select_r__strong__out82 = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->umips_top__DOT__regfile__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->umips_top__DOT__pipeline_regDE__DOT__MemReadDE = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__pipeline_regDE__DOT__RegWriteDE = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__pipeline_regDE__DOT__MemtoRegDE = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__pipeline_regDE__DOT__MemWriteDE = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__pipeline_regDE__DOT__ALUControlDE = VL_RAND_RESET_I(4);
    vlSelf->umips_top__DOT__pipeline_regDE__DOT__ALUSrcDE = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__pipeline_regDE__DOT__start_multDE = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__pipeline_regDE__DOT__RegDstDE = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__pipeline_regDE__DOT__Out_selectDE = VL_RAND_RESET_I(2);
    vlSelf->umips_top__DOT__pipeline_regDE__DOT__RF_ReadData1_DE = VL_RAND_RESET_I(32);
    vlSelf->umips_top__DOT__pipeline_regDE__DOT__RF_ReadData2_DE = VL_RAND_RESET_I(32);
    vlSelf->umips_top__DOT__pipeline_regDE__DOT__RsDE = VL_RAND_RESET_I(5);
    vlSelf->umips_top__DOT__pipeline_regDE__DOT__RtDE = VL_RAND_RESET_I(5);
    vlSelf->umips_top__DOT__pipeline_regDE__DOT__RdDE = VL_RAND_RESET_I(5);
    vlSelf->umips_top__DOT__pipeline_regDE__DOT__SignImmDE = VL_RAND_RESET_I(32);
    vlSelf->umips_top__DOT__ALU__DOT__BB = VL_RAND_RESET_I(32);
    vlSelf->umips_top__DOT__ALU__DOT__S = VL_RAND_RESET_I(32);
    vlSelf->umips_top__DOT__pipeline_regEM__DOT__MemReadEM = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__pipeline_regEM__DOT__RegWriteEM = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__pipeline_regEM__DOT__MemtoRegEM = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__pipeline_regEM__DOT__MemWiteEM = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__pipeline_regEM__DOT__mult_finishEM = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__pipeline_regEM__DOT__Out_selectEM = VL_RAND_RESET_I(2);
    vlSelf->umips_top__DOT__pipeline_regEM__DOT__mult_resultEM = VL_RAND_RESET_Q(64);
    vlSelf->umips_top__DOT__pipeline_regEM__DOT__ALUoutEM = VL_RAND_RESET_I(32);
    vlSelf->umips_top__DOT__pipeline_regEM__DOT__write_dataEM = VL_RAND_RESET_I(32);
    vlSelf->umips_top__DOT__pipeline_regEM__DOT__WriteRegEM = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->umips_top__DOT__cache__DOT__cache_memory[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->umips_top__DOT__cache__DOT__tag_memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->umips_top__DOT__cache__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__pipeline_regMW__DOT__RegWriteMW = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__pipeline_regMW__DOT__MemtoRegMW = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__pipeline_regMW__DOT__mult_finishMW = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__pipeline_regMW__DOT__Out_SelectMW = VL_RAND_RESET_I(2);
    vlSelf->umips_top__DOT__pipeline_regMW__DOT__ALUoutMW = VL_RAND_RESET_I(32);
    vlSelf->umips_top__DOT__pipeline_regMW__DOT__mult_resultMW = VL_RAND_RESET_Q(64);
    vlSelf->umips_top__DOT__pipeline_regMW__DOT__ReadDataMW = VL_RAND_RESET_I(32);
    vlSelf->umips_top__DOT__pipeline_regMW__DOT__lui_extendedMW = VL_RAND_RESET_I(1);
    vlSelf->umips_top__DOT__pipeline_regMW__DOT__WriteRegMW = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__umips_top__DOT__lw_sw_cnt = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__umips_top__DOT__pipeline_regFD__DOT__InstrFD = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->__VdlyVal__umips_top__DOT__cache__DOT__cache_memory__v0);
    vlSelf->__VdlyDim0__umips_top__DOT__cache__DOT__cache_memory__v0 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__umips_top__DOT__cache__DOT__cache_memory__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__branch_target_predictor_buffer__02Eclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__branch_target_predictor_buffer__02Ereset__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__umips_top__02Eclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__umips_top__DOT__mem_access_status__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__umips_top__02Ereset__0 = VL_RAND_RESET_I(1);
}

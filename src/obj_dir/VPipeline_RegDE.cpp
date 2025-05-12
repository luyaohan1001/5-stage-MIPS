// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPipeline_RegDE__pch.h"

//============================================================
// Constructors

VPipeline_RegDE::VPipeline_RegDE(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VPipeline_RegDE__Syms(contextp(), _vcname__, this)}
    , branch_target_predictor_buffer__02Eclk{vlSymsp->TOP.branch_target_predictor_buffer__02Eclk}
    , branch_target_predictor_buffer__02Ereset{vlSymsp->TOP.branch_target_predictor_buffer__02Ereset}
    , umips_top__02Eclk{vlSymsp->TOP.umips_top__02Eclk}
    , umips_top__02Ereset{vlSymsp->TOP.umips_top__02Ereset}
    , access{vlSymsp->TOP.access}
    , update{vlSymsp->TOP.update}
    , found{vlSymsp->TOP.found}
    , state{vlSymsp->TOP.state}
    , branching_addressF{vlSymsp->TOP.branching_addressF}
    , branchUpdatePC{vlSymsp->TOP.branchUpdatePC}
    , branchUpdateTarget{vlSymsp->TOP.branchUpdateTarget}
    , predictPC{vlSymsp->TOP.predictPC}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VPipeline_RegDE::VPipeline_RegDE(const char* _vcname__)
    : VPipeline_RegDE(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VPipeline_RegDE::~VPipeline_RegDE() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VPipeline_RegDE___024root___eval_debug_assertions(VPipeline_RegDE___024root* vlSelf);
#endif  // VL_DEBUG
void VPipeline_RegDE___024root___eval_static(VPipeline_RegDE___024root* vlSelf);
void VPipeline_RegDE___024root___eval_initial(VPipeline_RegDE___024root* vlSelf);
void VPipeline_RegDE___024root___eval_settle(VPipeline_RegDE___024root* vlSelf);
void VPipeline_RegDE___024root___eval(VPipeline_RegDE___024root* vlSelf);

void VPipeline_RegDE::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPipeline_RegDE::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VPipeline_RegDE___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VPipeline_RegDE___024root___eval_static(&(vlSymsp->TOP));
        VPipeline_RegDE___024root___eval_initial(&(vlSymsp->TOP));
        VPipeline_RegDE___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VPipeline_RegDE___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VPipeline_RegDE::eventsPending() { return false; }

uint64_t VPipeline_RegDE::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VPipeline_RegDE::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VPipeline_RegDE___024root___eval_final(VPipeline_RegDE___024root* vlSelf);

VL_ATTR_COLD void VPipeline_RegDE::final() {
    VPipeline_RegDE___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VPipeline_RegDE::hierName() const { return vlSymsp->name(); }
const char* VPipeline_RegDE::modelName() const { return "VPipeline_RegDE"; }
unsigned VPipeline_RegDE::threads() const { return 1; }
void VPipeline_RegDE::prepareClone() const { contextp()->prepareClone(); }
void VPipeline_RegDE::atClone() const {
    contextp()->threadPoolpOnClone();
}

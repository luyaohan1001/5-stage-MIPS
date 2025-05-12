// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vreg_file__pch.h"

//============================================================
// Constructors

Vreg_file::Vreg_file(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vreg_file__Syms(contextp(), _vcname__, this)}
    , Clk{vlSymsp->TOP.Clk}
    , Write{vlSymsp->TOP.Write}
    , Write2{vlSymsp->TOP.Write2}
    , Reset{vlSymsp->TOP.Reset}
    , PR1{vlSymsp->TOP.PR1}
    , PR2{vlSymsp->TOP.PR2}
    , WR{vlSymsp->TOP.WR}
    , PR12{vlSymsp->TOP.PR12}
    , PR22{vlSymsp->TOP.PR22}
    , WR2{vlSymsp->TOP.WR2}
    , WD{vlSymsp->TOP.WD}
    , WD2{vlSymsp->TOP.WD2}
    , RD12{vlSymsp->TOP.RD12}
    , RD22{vlSymsp->TOP.RD22}
    , RD1{vlSymsp->TOP.RD1}
    , RD2{vlSymsp->TOP.RD2}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vreg_file::Vreg_file(const char* _vcname__)
    : Vreg_file(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vreg_file::~Vreg_file() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vreg_file___024root___eval_debug_assertions(Vreg_file___024root* vlSelf);
#endif  // VL_DEBUG
void Vreg_file___024root___eval_static(Vreg_file___024root* vlSelf);
void Vreg_file___024root___eval_initial(Vreg_file___024root* vlSelf);
void Vreg_file___024root___eval_settle(Vreg_file___024root* vlSelf);
void Vreg_file___024root___eval(Vreg_file___024root* vlSelf);

void Vreg_file::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vreg_file::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vreg_file___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vreg_file___024root___eval_static(&(vlSymsp->TOP));
        Vreg_file___024root___eval_initial(&(vlSymsp->TOP));
        Vreg_file___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vreg_file___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vreg_file::eventsPending() { return false; }

uint64_t Vreg_file::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vreg_file::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vreg_file___024root___eval_final(Vreg_file___024root* vlSelf);

VL_ATTR_COLD void Vreg_file::final() {
    Vreg_file___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vreg_file::hierName() const { return vlSymsp->name(); }
const char* Vreg_file::modelName() const { return "Vreg_file"; }
unsigned Vreg_file::threads() const { return 1; }
void Vreg_file::prepareClone() const { contextp()->prepareClone(); }
void Vreg_file::atClone() const {
    contextp()->threadPoolpOnClone();
}

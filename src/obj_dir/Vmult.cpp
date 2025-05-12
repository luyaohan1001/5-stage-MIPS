// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmult__pch.h"

//============================================================
// Constructors

Vmult::Vmult(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmult__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , start{vlSymsp->TOP.start}
    , in_is_signed{vlSymsp->TOP.in_is_signed}
    , mult_status{vlSymsp->TOP.mult_status}
    , in_a{vlSymsp->TOP.in_a}
    , in_b{vlSymsp->TOP.in_b}
    , s{vlSymsp->TOP.s}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmult::Vmult(const char* _vcname__)
    : Vmult(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmult::~Vmult() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmult___024root___eval_debug_assertions(Vmult___024root* vlSelf);
#endif  // VL_DEBUG
void Vmult___024root___eval_static(Vmult___024root* vlSelf);
void Vmult___024root___eval_initial(Vmult___024root* vlSelf);
void Vmult___024root___eval_settle(Vmult___024root* vlSelf);
void Vmult___024root___eval(Vmult___024root* vlSelf);

void Vmult::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmult::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmult___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmult___024root___eval_static(&(vlSymsp->TOP));
        Vmult___024root___eval_initial(&(vlSymsp->TOP));
        Vmult___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmult___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmult::eventsPending() { return false; }

uint64_t Vmult::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmult::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmult___024root___eval_final(Vmult___024root* vlSelf);

VL_ATTR_COLD void Vmult::final() {
    Vmult___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmult::hierName() const { return vlSymsp->name(); }
const char* Vmult::modelName() const { return "Vmult"; }
unsigned Vmult::threads() const { return 1; }
void Vmult::prepareClone() const { contextp()->prepareClone(); }
void Vmult::atClone() const {
    contextp()->threadPoolpOnClone();
}

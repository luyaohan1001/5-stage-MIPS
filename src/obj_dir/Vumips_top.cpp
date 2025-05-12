// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vumips_top__pch.h"

//============================================================
// Constructors

Vumips_top::Vumips_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vumips_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vumips_top::Vumips_top(const char* _vcname__)
    : Vumips_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vumips_top::~Vumips_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vumips_top___024root___eval_debug_assertions(Vumips_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vumips_top___024root___eval_static(Vumips_top___024root* vlSelf);
void Vumips_top___024root___eval_initial(Vumips_top___024root* vlSelf);
void Vumips_top___024root___eval_settle(Vumips_top___024root* vlSelf);
void Vumips_top___024root___eval(Vumips_top___024root* vlSelf);

void Vumips_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vumips_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vumips_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vumips_top___024root___eval_static(&(vlSymsp->TOP));
        Vumips_top___024root___eval_initial(&(vlSymsp->TOP));
        Vumips_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vumips_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vumips_top::eventsPending() { return false; }

uint64_t Vumips_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vumips_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vumips_top___024root___eval_final(Vumips_top___024root* vlSelf);

VL_ATTR_COLD void Vumips_top::final() {
    Vumips_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vumips_top::hierName() const { return vlSymsp->name(); }
const char* Vumips_top::modelName() const { return "Vumips_top"; }
unsigned Vumips_top::threads() const { return 1; }
void Vumips_top::prepareClone() const { contextp()->prepareClone(); }
void Vumips_top::atClone() const {
    contextp()->threadPoolpOnClone();
}

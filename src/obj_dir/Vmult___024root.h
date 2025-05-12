// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmult.h for the primary calling header

#ifndef VERILATED_VMULT___024ROOT_H_
#define VERILATED_VMULT___024ROOT_H_  // guard

#include "verilated.h"


class Vmult__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmult___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(start,0,0);
    VL_IN8(in_is_signed,0,0);
    VL_OUT8(mult_status,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(in_a,31,0);
    VL_IN(in_b,31,0);
    IData/*31:0*/ __VactIterCount;
    VL_OUT64(s,63,0);
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmult__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmult___024root(Vmult__Syms* symsp, const char* v__name);
    ~Vmult___024root();
    VL_UNCOPYABLE(Vmult___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

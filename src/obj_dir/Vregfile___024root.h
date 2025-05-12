// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregfile.h for the primary calling header

#ifndef VERILATED_VREGFILE___024ROOT_H_
#define VERILATED_VREGFILE___024ROOT_H_  // guard

#include "verilated.h"


class Vregfile__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregfile___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(Clk,0,0);
    VL_IN8(Write,0,0);
    VL_IN8(Write2,0,0);
    VL_IN8(Reset,0,0);
    VL_IN8(PR1,4,0);
    VL_IN8(PR2,4,0);
    VL_IN8(WR,4,0);
    VL_IN8(PR12,4,0);
    VL_IN8(PR22,4,0);
    VL_IN8(WR2,4,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__Clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(WD,31,0);
    VL_IN(WD2,31,0);
    VL_OUT(RD12,31,0);
    VL_OUT(RD22,31,0);
    VL_OUT(RD1,31,0);
    VL_OUT(RD2,31,0);
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> regfile__DOT__rf;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vregfile__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vregfile___024root(Vregfile__Syms* symsp, const char* v__name);
    ~Vregfile___024root();
    VL_UNCOPYABLE(Vregfile___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

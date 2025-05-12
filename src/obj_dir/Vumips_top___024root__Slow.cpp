// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vumips_top.h for the primary calling header

#include "Vumips_top__pch.h"
#include "Vumips_top__Syms.h"
#include "Vumips_top___024root.h"

void Vumips_top___024root___ctor_var_reset(Vumips_top___024root* vlSelf);

Vumips_top___024root::Vumips_top___024root(Vumips_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vumips_top___024root___ctor_var_reset(this);
}

void Vumips_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vumips_top___024root::~Vumips_top___024root() {
}

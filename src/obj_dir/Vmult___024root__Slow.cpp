// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmult.h for the primary calling header

#include "Vmult__pch.h"
#include "Vmult__Syms.h"
#include "Vmult___024root.h"

void Vmult___024root___ctor_var_reset(Vmult___024root* vlSelf);

Vmult___024root::Vmult___024root(Vmult__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmult___024root___ctor_var_reset(this);
}

void Vmult___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmult___024root::~Vmult___024root() {
}

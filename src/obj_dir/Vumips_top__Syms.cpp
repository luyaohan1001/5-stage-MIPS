// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vumips_top__pch.h"
#include "Vumips_top.h"
#include "Vumips_top___024root.h"

// FUNCTIONS
Vumips_top__Syms::~Vumips_top__Syms()
{
}

Vumips_top__Syms::Vumips_top__Syms(VerilatedContext* contextp, const char* namep, Vumips_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(58);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-9);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}

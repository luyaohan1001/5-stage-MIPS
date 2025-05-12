// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VPipeline_RegDE__pch.h"
#include "VPipeline_RegDE.h"
#include "VPipeline_RegDE___024root.h"

// FUNCTIONS
VPipeline_RegDE__Syms::~VPipeline_RegDE__Syms()
{
}

VPipeline_RegDE__Syms::VPipeline_RegDE__Syms(VerilatedContext* contextp, const char* namep, VPipeline_RegDE* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(115);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-9);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}

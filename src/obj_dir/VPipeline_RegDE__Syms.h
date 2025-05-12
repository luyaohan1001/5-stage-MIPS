// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPIPELINE_REGDE__SYMS_H_
#define VERILATED_VPIPELINE_REGDE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VPipeline_RegDE.h"

// INCLUDE MODULE CLASSES
#include "VPipeline_RegDE___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VPipeline_RegDE__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VPipeline_RegDE* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VPipeline_RegDE___024root      TOP;

    // CONSTRUCTORS
    VPipeline_RegDE__Syms(VerilatedContext* contextp, const char* namep, VPipeline_RegDE* modelp);
    ~VPipeline_RegDE__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard

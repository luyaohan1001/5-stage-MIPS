// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMULT__SYMS_H_
#define VERILATED_VMULT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmult.h"

// INCLUDE MODULE CLASSES
#include "Vmult___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vmult__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmult* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmult___024root                TOP;

    // CONSTRUCTORS
    Vmult__Syms(VerilatedContext* contextp, const char* namep, Vmult* modelp);
    ~Vmult__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard

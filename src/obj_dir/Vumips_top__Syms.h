// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VUMIPS_TOP__SYMS_H_
#define VERILATED_VUMIPS_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vumips_top.h"

// INCLUDE MODULE CLASSES
#include "Vumips_top___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vumips_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vumips_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vumips_top___024root           TOP;

    // CONSTRUCTORS
    Vumips_top__Syms(VerilatedContext* contextp, const char* namep, Vumips_top* modelp);
    ~Vumips_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard

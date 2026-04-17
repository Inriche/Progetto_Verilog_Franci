// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VREGISTRO__SYMS_H_
#define VERILATED_VREGISTRO__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vregistro.h"

// INCLUDE MODULE CLASSES
#include "Vregistro___024root.h"
#include "Vregistro___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vregistro__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vregistro* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vregistro___024root            TOP;
    Vregistro___024unit            TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_registro;

    // CONSTRUCTORS
    Vregistro__Syms(VerilatedContext* contextp, const char* namep, Vregistro* modelp);
    ~Vregistro__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard

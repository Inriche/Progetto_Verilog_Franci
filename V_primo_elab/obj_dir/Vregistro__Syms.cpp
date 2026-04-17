// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vregistro__pch.h"
#include "Vregistro.h"
#include "Vregistro___024root.h"
#include "Vregistro___024unit.h"

// FUNCTIONS
Vregistro__Syms::~Vregistro__Syms()
{
}

Vregistro__Syms::Vregistro__Syms(VerilatedContext* contextp, const char* namep, Vregistro* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
        // Check resources
        Verilated::stackCheck(18);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope_registro.configure(this, name(), "registro", "registro", -12, VerilatedScope::SCOPE_OTHER);
}

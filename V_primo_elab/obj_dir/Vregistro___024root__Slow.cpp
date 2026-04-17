// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregistro.h for the primary calling header

#include "Vregistro__pch.h"
#include "Vregistro__Syms.h"
#include "Vregistro___024root.h"

void Vregistro___024root___ctor_var_reset(Vregistro___024root* vlSelf);

Vregistro___024root::Vregistro___024root(Vregistro__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vregistro___024root___ctor_var_reset(this);
}

void Vregistro___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vregistro___024root::~Vregistro___024root() {
}

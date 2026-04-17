// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestcomplemento.h for the primary calling header

#include "Vtestcomplemento__pch.h"
#include "Vtestcomplemento__Syms.h"
#include "Vtestcomplemento___024root.h"

void Vtestcomplemento___024root___ctor_var_reset(Vtestcomplemento___024root* vlSelf);

Vtestcomplemento___024root::Vtestcomplemento___024root(Vtestcomplemento__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestcomplemento___024root___ctor_var_reset(this);
}

void Vtestcomplemento___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestcomplemento___024root::~Vtestcomplemento___024root() {
}

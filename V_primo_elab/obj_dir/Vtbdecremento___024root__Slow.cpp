// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtbdecremento.h for the primary calling header

#include "Vtbdecremento__pch.h"
#include "Vtbdecremento__Syms.h"
#include "Vtbdecremento___024root.h"

void Vtbdecremento___024root___ctor_var_reset(Vtbdecremento___024root* vlSelf);

Vtbdecremento___024root::Vtbdecremento___024root(Vtbdecremento__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtbdecremento___024root___ctor_var_reset(this);
}

void Vtbdecremento___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtbdecremento___024root::~Vtbdecremento___024root() {
}

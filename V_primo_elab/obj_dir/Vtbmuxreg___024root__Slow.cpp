// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtbmuxreg.h for the primary calling header

#include "Vtbmuxreg__pch.h"
#include "Vtbmuxreg__Syms.h"
#include "Vtbmuxreg___024root.h"

void Vtbmuxreg___024root___ctor_var_reset(Vtbmuxreg___024root* vlSelf);

Vtbmuxreg___024root::Vtbmuxreg___024root(Vtbmuxreg__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtbmuxreg___024root___ctor_var_reset(this);
}

void Vtbmuxreg___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtbmuxreg___024root::~Vtbmuxreg___024root() {
}

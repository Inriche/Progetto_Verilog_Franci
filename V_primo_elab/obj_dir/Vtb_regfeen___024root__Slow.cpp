// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_regfeen.h for the primary calling header

#include "Vtb_regfeen__pch.h"
#include "Vtb_regfeen__Syms.h"
#include "Vtb_regfeen___024root.h"

void Vtb_regfeen___024root___ctor_var_reset(Vtb_regfeen___024root* vlSelf);

Vtb_regfeen___024root::Vtb_regfeen___024root(Vtb_regfeen__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_regfeen___024root___ctor_var_reset(this);
}

void Vtb_regfeen___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_regfeen___024root::~Vtb_regfeen___024root() {
}

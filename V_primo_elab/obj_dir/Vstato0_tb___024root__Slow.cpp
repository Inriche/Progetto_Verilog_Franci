// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstato0_tb.h for the primary calling header

#include "Vstato0_tb__pch.h"
#include "Vstato0_tb__Syms.h"
#include "Vstato0_tb___024root.h"

void Vstato0_tb___024root___ctor_var_reset(Vstato0_tb___024root* vlSelf);

Vstato0_tb___024root::Vstato0_tb___024root(Vstato0_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vstato0_tb___024root___ctor_var_reset(this);
}

void Vstato0_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vstato0_tb___024root::~Vstato0_tb___024root() {
}

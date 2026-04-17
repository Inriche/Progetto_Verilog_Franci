// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstato1_tb.h for the primary calling header

#include "Vstato1_tb__pch.h"
#include "Vstato1_tb__Syms.h"
#include "Vstato1_tb___024root.h"

void Vstato1_tb___024root___ctor_var_reset(Vstato1_tb___024root* vlSelf);

Vstato1_tb___024root::Vstato1_tb___024root(Vstato1_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vstato1_tb___024root___ctor_var_reset(this);
}

void Vstato1_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vstato1_tb___024root::~Vstato1_tb___024root() {
}

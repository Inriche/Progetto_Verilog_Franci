// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstato4tb.h for the primary calling header

#include "Vstato4tb__pch.h"
#include "Vstato4tb__Syms.h"
#include "Vstato4tb___024root.h"

void Vstato4tb___024root___ctor_var_reset(Vstato4tb___024root* vlSelf);

Vstato4tb___024root::Vstato4tb___024root(Vstato4tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vstato4tb___024root___ctor_var_reset(this);
}

void Vstato4tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vstato4tb___024root::~Vstato4tb___024root() {
}

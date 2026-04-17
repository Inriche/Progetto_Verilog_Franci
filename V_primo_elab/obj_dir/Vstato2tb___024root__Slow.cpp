// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstato2tb.h for the primary calling header

#include "Vstato2tb__pch.h"
#include "Vstato2tb__Syms.h"
#include "Vstato2tb___024root.h"

void Vstato2tb___024root___ctor_var_reset(Vstato2tb___024root* vlSelf);

Vstato2tb___024root::Vstato2tb___024root(Vstato2tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vstato2tb___024root___ctor_var_reset(this);
}

void Vstato2tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vstato2tb___024root::~Vstato2tb___024root() {
}

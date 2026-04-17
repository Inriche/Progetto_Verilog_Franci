// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstato3tb.h for the primary calling header

#include "Vstato3tb__pch.h"
#include "Vstato3tb__Syms.h"
#include "Vstato3tb___024root.h"

void Vstato3tb___024root___ctor_var_reset(Vstato3tb___024root* vlSelf);

Vstato3tb___024root::Vstato3tb___024root(Vstato3tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vstato3tb___024root___ctor_var_reset(this);
}

void Vstato3tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vstato3tb___024root::~Vstato3tb___024root() {
}

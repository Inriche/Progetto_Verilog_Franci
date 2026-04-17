// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontatore_tb.h for the primary calling header

#include "Vcontatore_tb__pch.h"
#include "Vcontatore_tb__Syms.h"
#include "Vcontatore_tb___024root.h"

void Vcontatore_tb___024root___ctor_var_reset(Vcontatore_tb___024root* vlSelf);

Vcontatore_tb___024root::Vcontatore_tb___024root(Vcontatore_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcontatore_tb___024root___ctor_var_reset(this);
}

void Vcontatore_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcontatore_tb___024root::~Vcontatore_tb___024root() {
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSommatore_tb.h for the primary calling header

#include "VSommatore_tb__pch.h"
#include "VSommatore_tb__Syms.h"
#include "VSommatore_tb___024root.h"

void VSommatore_tb___024root___ctor_var_reset(VSommatore_tb___024root* vlSelf);

VSommatore_tb___024root::VSommatore_tb___024root(VSommatore_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VSommatore_tb___024root___ctor_var_reset(this);
}

void VSommatore_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VSommatore_tb___024root::~VSommatore_tb___024root() {
}

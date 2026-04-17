// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VS1new_tb.h for the primary calling header

#include "VS1new_tb__pch.h"
#include "VS1new_tb__Syms.h"
#include "VS1new_tb___024root.h"

void VS1new_tb___024root___ctor_var_reset(VS1new_tb___024root* vlSelf);

VS1new_tb___024root::VS1new_tb___024root(VS1new_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VS1new_tb___024root___ctor_var_reset(this);
}

void VS1new_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VS1new_tb___024root::~VS1new_tb___024root() {
}

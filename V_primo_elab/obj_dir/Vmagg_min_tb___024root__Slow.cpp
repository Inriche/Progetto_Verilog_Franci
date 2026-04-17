// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmagg_min_tb.h for the primary calling header

#include "Vmagg_min_tb__pch.h"
#include "Vmagg_min_tb__Syms.h"
#include "Vmagg_min_tb___024root.h"

void Vmagg_min_tb___024root___ctor_var_reset(Vmagg_min_tb___024root* vlSelf);

Vmagg_min_tb___024root::Vmagg_min_tb___024root(Vmagg_min_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmagg_min_tb___024root___ctor_var_reset(this);
}

void Vmagg_min_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmagg_min_tb___024root::~Vmagg_min_tb___024root() {
}

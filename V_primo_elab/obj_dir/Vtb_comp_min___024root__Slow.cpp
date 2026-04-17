// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_comp_min.h for the primary calling header

#include "Vtb_comp_min__pch.h"
#include "Vtb_comp_min__Syms.h"
#include "Vtb_comp_min___024root.h"

void Vtb_comp_min___024root___ctor_var_reset(Vtb_comp_min___024root* vlSelf);

Vtb_comp_min___024root::Vtb_comp_min___024root(Vtb_comp_min__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_comp_min___024root___ctor_var_reset(this);
}

void Vtb_comp_min___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_comp_min___024root::~Vtb_comp_min___024root() {
}

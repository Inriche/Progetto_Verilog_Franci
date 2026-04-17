// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux3tb.h for the primary calling header

#include "Vmux3tb__pch.h"
#include "Vmux3tb__Syms.h"
#include "Vmux3tb___024root.h"

void Vmux3tb___024root___ctor_var_reset(Vmux3tb___024root* vlSelf);

Vmux3tb___024root::Vmux3tb___024root(Vmux3tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmux3tb___024root___ctor_var_reset(this);
}

void Vmux3tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmux3tb___024root::~Vmux3tb___024root() {
}

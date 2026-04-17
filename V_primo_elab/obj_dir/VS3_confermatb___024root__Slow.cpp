// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VS3_confermatb.h for the primary calling header

#include "VS3_confermatb__pch.h"
#include "VS3_confermatb__Syms.h"
#include "VS3_confermatb___024root.h"

void VS3_confermatb___024root___ctor_var_reset(VS3_confermatb___024root* vlSelf);

VS3_confermatb___024root::VS3_confermatb___024root(VS3_confermatb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VS3_confermatb___024root___ctor_var_reset(this);
}

void VS3_confermatb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VS3_confermatb___024root::~VS3_confermatb___024root() {
}

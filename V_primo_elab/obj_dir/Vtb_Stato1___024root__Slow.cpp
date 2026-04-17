// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Stato1.h for the primary calling header

#include "Vtb_Stato1__pch.h"
#include "Vtb_Stato1__Syms.h"
#include "Vtb_Stato1___024root.h"

void Vtb_Stato1___024root___ctor_var_reset(Vtb_Stato1___024root* vlSelf);

Vtb_Stato1___024root::Vtb_Stato1___024root(Vtb_Stato1__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_Stato1___024root___ctor_var_reset(this);
}

void Vtb_Stato1___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_Stato1___024root::~Vtb_Stato1___024root() {
}

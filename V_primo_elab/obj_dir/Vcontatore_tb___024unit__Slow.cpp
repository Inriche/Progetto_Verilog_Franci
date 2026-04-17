// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontatore_tb.h for the primary calling header

#include "Vcontatore_tb__pch.h"
#include "Vcontatore_tb__Syms.h"
#include "Vcontatore_tb___024unit.h"

void Vcontatore_tb___024unit___ctor_var_reset(Vcontatore_tb___024unit* vlSelf);

Vcontatore_tb___024unit::Vcontatore_tb___024unit(Vcontatore_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcontatore_tb___024unit___ctor_var_reset(this);
}

void Vcontatore_tb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcontatore_tb___024unit::~Vcontatore_tb___024unit() {
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdemux_tb.h for the primary calling header

#include "Vdemux_tb__pch.h"
#include "Vdemux_tb__Syms.h"
#include "Vdemux_tb___024unit.h"

void Vdemux_tb___024unit___ctor_var_reset(Vdemux_tb___024unit* vlSelf);

Vdemux_tb___024unit::Vdemux_tb___024unit(Vdemux_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdemux_tb___024unit___ctor_var_reset(this);
}

void Vdemux_tb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdemux_tb___024unit::~Vdemux_tb___024unit() {
}

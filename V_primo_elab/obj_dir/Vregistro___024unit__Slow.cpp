// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregistro.h for the primary calling header

#include "Vregistro__pch.h"
#include "Vregistro__Syms.h"
#include "Vregistro___024unit.h"

void Vregistro___024unit___ctor_var_reset(Vregistro___024unit* vlSelf);

Vregistro___024unit::Vregistro___024unit(Vregistro__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vregistro___024unit___ctor_var_reset(this);
}

void Vregistro___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vregistro___024unit::~Vregistro___024unit() {
}

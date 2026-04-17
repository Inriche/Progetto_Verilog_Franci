// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdemux_tb.h for the primary calling header

#include "Vdemux_tb__pch.h"
#include "Vdemux_tb___024unit.h"

VL_ATTR_COLD void Vdemux_tb___024unit___ctor_var_reset(Vdemux_tb___024unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdemux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdemux_tb___024unit___ctor_var_reset\n"); );
    // Body
    vlSelf->__VmonitorNum = VL_RAND_RESET_Q(64);
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}

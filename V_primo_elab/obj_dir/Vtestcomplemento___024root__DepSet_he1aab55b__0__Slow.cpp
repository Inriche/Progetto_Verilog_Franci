// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestcomplemento.h for the primary calling header

#include "Vtestcomplemento__pch.h"
#include "Vtestcomplemento___024root.h"

VL_ATTR_COLD void Vtestcomplemento___024root___eval_static(Vtestcomplemento___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestcomplemento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcomplemento___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtestcomplemento___024root___eval_final(Vtestcomplemento___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestcomplemento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcomplemento___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtestcomplemento___024root___eval_settle(Vtestcomplemento___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestcomplemento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcomplemento___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestcomplemento___024root___dump_triggers__act(Vtestcomplemento___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestcomplemento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcomplemento___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestcomplemento___024root___dump_triggers__nba(Vtestcomplemento___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestcomplemento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcomplemento___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestcomplemento___024root___ctor_var_reset(Vtestcomplemento___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestcomplemento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcomplemento___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->testcomplemento__DOT__Y = VL_RAND_RESET_I(4);
    }

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_regfe.h for the primary calling header

#include "Vtb_regfe__pch.h"
#include "Vtb_regfe___024root.h"

VL_ATTR_COLD void Vtb_regfe___024root___eval_static__TOP(Vtb_regfe___024root* vlSelf);

VL_ATTR_COLD void Vtb_regfe___024root___eval_static(Vtb_regfe___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_regfe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_regfe___024root___eval_static\n"); );
    // Body
    Vtb_regfe___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_regfe___024root___eval_static__TOP(Vtb_regfe___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_regfe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_regfe___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_regfe__DOT__dut__DOT__dato = 0U;
}

VL_ATTR_COLD void Vtb_regfe___024root___eval_final(Vtb_regfe___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_regfe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_regfe___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtb_regfe___024root___eval_settle(Vtb_regfe___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_regfe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_regfe___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_regfe___024root___dump_triggers__act(Vtb_regfe___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_regfe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_regfe___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge tb_regfe.C)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_regfe___024root___dump_triggers__nba(Vtb_regfe___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_regfe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_regfe___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge tb_regfe.C)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_regfe___024root___ctor_var_reset(Vtb_regfe___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_regfe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_regfe___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_regfe__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_regfe__DOT__A = VL_RAND_RESET_I(4);
    vlSelf->tb_regfe__DOT__C = VL_RAND_RESET_I(1);
    vlSelf->tb_regfe__DOT__dut__DOT__dato = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_regfe__DOT__C__0 = VL_RAND_RESET_I(1);
}

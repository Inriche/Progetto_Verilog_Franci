// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtbmuxreg.h for the primary calling header

#include "Vtbmuxreg__pch.h"
#include "Vtbmuxreg___024root.h"

VL_ATTR_COLD void Vtbmuxreg___024root___eval_static__TOP(Vtbmuxreg___024root* vlSelf);

VL_ATTR_COLD void Vtbmuxreg___024root___eval_static(Vtbmuxreg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbmuxreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbmuxreg___024root___eval_static\n"); );
    // Body
    Vtbmuxreg___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtbmuxreg___024root___eval_static__TOP(Vtbmuxreg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbmuxreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbmuxreg___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tbmuxreg__DOT__dut__DOT__regpar__DOT__dato = 0U;
}

VL_ATTR_COLD void Vtbmuxreg___024root___eval_final(Vtbmuxreg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbmuxreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbmuxreg___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbmuxreg___024root___dump_triggers__stl(Vtbmuxreg___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtbmuxreg___024root___eval_phase__stl(Vtbmuxreg___024root* vlSelf);

VL_ATTR_COLD void Vtbmuxreg___024root___eval_settle(Vtbmuxreg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbmuxreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbmuxreg___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtbmuxreg___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("mux3ingregtb.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtbmuxreg___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbmuxreg___024root___dump_triggers__stl(Vtbmuxreg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbmuxreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbmuxreg___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtbmuxreg___024root___act_sequent__TOP__0(Vtbmuxreg___024root* vlSelf);

VL_ATTR_COLD void Vtbmuxreg___024root___eval_stl(Vtbmuxreg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbmuxreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbmuxreg___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtbmuxreg___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtbmuxreg___024root___eval_triggers__stl(Vtbmuxreg___024root* vlSelf);

VL_ATTR_COLD bool Vtbmuxreg___024root___eval_phase__stl(Vtbmuxreg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbmuxreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbmuxreg___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtbmuxreg___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtbmuxreg___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbmuxreg___024root___dump_triggers__act(Vtbmuxreg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbmuxreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbmuxreg___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tbmuxreg.C)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbmuxreg___024root___dump_triggers__nba(Vtbmuxreg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbmuxreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbmuxreg___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tbmuxreg.C)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtbmuxreg___024root___ctor_var_reset(Vtbmuxreg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbmuxreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbmuxreg___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tbmuxreg__DOT__ing3 = VL_RAND_RESET_I(3);
    vlSelf->tbmuxreg__DOT__ing2 = VL_RAND_RESET_I(3);
    vlSelf->tbmuxreg__DOT__ing1 = VL_RAND_RESET_I(3);
    vlSelf->tbmuxreg__DOT__ctrl = VL_RAND_RESET_I(2);
    vlSelf->tbmuxreg__DOT__C = VL_RAND_RESET_I(1);
    vlSelf->tbmuxreg__DOT__dut__DOT__muxreg = VL_RAND_RESET_I(3);
    vlSelf->tbmuxreg__DOT__dut__DOT__regpar__DOT__dato = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tbmuxreg__DOT__C__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstato4tb.h for the primary calling header

#include "Vstato4tb__pch.h"
#include "Vstato4tb___024root.h"

VL_ATTR_COLD void Vstato4tb___024root___eval_static(Vstato4tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato4tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato4tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vstato4tb___024root___eval_final(Vstato4tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato4tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato4tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstato4tb___024root___dump_triggers__stl(Vstato4tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vstato4tb___024root___eval_phase__stl(Vstato4tb___024root* vlSelf);

VL_ATTR_COLD void Vstato4tb___024root___eval_settle(Vstato4tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato4tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato4tb___024root___eval_settle\n"); );
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
            Vstato4tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("S4_tb.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vstato4tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstato4tb___024root___dump_triggers__stl(Vstato4tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato4tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato4tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vstato4tb___024root___act_sequent__TOP__0(Vstato4tb___024root* vlSelf);

VL_ATTR_COLD void Vstato4tb___024root___eval_stl(Vstato4tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato4tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato4tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstato4tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vstato4tb___024root___eval_triggers__stl(Vstato4tb___024root* vlSelf);

VL_ATTR_COLD bool Vstato4tb___024root___eval_phase__stl(Vstato4tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato4tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato4tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vstato4tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vstato4tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstato4tb___024root___dump_triggers__act(Vstato4tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato4tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato4tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([changed] stato4tb.PRICE_P2 or [changed] stato4tb.PRICE_P3 or [changed] stato4tb.PRICE_P4 or [changed] stato4tb.Sel)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstato4tb___024root___dump_triggers__nba(Vstato4tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato4tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato4tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([changed] stato4tb.PRICE_P2 or [changed] stato4tb.PRICE_P3 or [changed] stato4tb.PRICE_P4 or [changed] stato4tb.Sel)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vstato4tb___024root___ctor_var_reset(Vstato4tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato4tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato4tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->stato4tb__DOT__PRICE_P1 = VL_RAND_RESET_I(3);
    vlSelf->stato4tb__DOT__PRICE_P2 = VL_RAND_RESET_I(3);
    vlSelf->stato4tb__DOT__PRICE_P3 = VL_RAND_RESET_I(3);
    vlSelf->stato4tb__DOT__PRICE_P4 = VL_RAND_RESET_I(3);
    vlSelf->stato4tb__DOT__CREDITO = VL_RAND_RESET_I(3);
    vlSelf->stato4tb__DOT__Sel = VL_RAND_RESET_I(2);
    vlSelf->stato4tb__DOT__INTERNO = VL_RAND_RESET_I(1);
    vlSelf->stato4tb__DOT__Resto = VL_RAND_RESET_I(3);
    vlSelf->stato4tb__DOT__dut__DOT__mm1 = VL_RAND_RESET_I(3);
    vlSelf->stato4tb__DOT__dut__DOT__dd1 = VL_RAND_RESET_I(3);
    vlSelf->stato4tb__DOT__dut__DOT__dd2 = VL_RAND_RESET_I(3);
    vlSelf->stato4tb__DOT__dut__DOT__ad2 = VL_RAND_RESET_I(3);
    vlSelf->stato4tb__DOT__dut__DOT__Maggiore = VL_RAND_RESET_I(3);
    vlSelf->stato4tb__DOT__dut__DOT__Minore = VL_RAND_RESET_I(3);
    vlSelf->stato4tb__DOT__dut__DOT__Mm1__DOT__cc2 = VL_RAND_RESET_I(1);
    vlSelf->stato4tb__DOT__dut__DOT__Mm1__DOT__cc3 = VL_RAND_RESET_I(1);
    vlSelf->stato4tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__nn1 = VL_RAND_RESET_I(1);
    vlSelf->stato4tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__xx1 = VL_RAND_RESET_I(1);
    vlSelf->stato4tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa1 = VL_RAND_RESET_I(1);
    vlSelf->stato4tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__nn2 = VL_RAND_RESET_I(1);
    vlSelf->stato4tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa2 = VL_RAND_RESET_I(1);
    vlSelf->stato4tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__nn3 = VL_RAND_RESET_I(1);
    vlSelf->stato4tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa3 = VL_RAND_RESET_I(1);
    vlSelf->stato4tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa4 = VL_RAND_RESET_I(1);
    vlSelf->stato4tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa5 = VL_RAND_RESET_I(1);
    vlSelf->stato4tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa6 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__stato4tb__DOT__PRICE_P2__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__stato4tb__DOT__PRICE_P3__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__stato4tb__DOT__PRICE_P4__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__stato4tb__DOT__Sel__0 = VL_RAND_RESET_I(2);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

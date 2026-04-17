// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtbdecremento.h for the primary calling header

#include "Vtbdecremento__pch.h"
#include "Vtbdecremento___024root.h"

VL_ATTR_COLD void Vtbdecremento___024root___eval_static(Vtbdecremento___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbdecremento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbdecremento___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtbdecremento___024root___eval_final(Vtbdecremento___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbdecremento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbdecremento___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbdecremento___024root___dump_triggers__stl(Vtbdecremento___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtbdecremento___024root___eval_phase__stl(Vtbdecremento___024root* vlSelf);

VL_ATTR_COLD void Vtbdecremento___024root___eval_settle(Vtbdecremento___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbdecremento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbdecremento___024root___eval_settle\n"); );
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
            Vtbdecremento___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("decremento_prod_scelto_tb.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtbdecremento___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbdecremento___024root___dump_triggers__stl(Vtbdecremento___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbdecremento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbdecremento___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtbdecremento___024root___act_sequent__TOP__0(Vtbdecremento___024root* vlSelf);

VL_ATTR_COLD void Vtbdecremento___024root___eval_stl(Vtbdecremento___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbdecremento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbdecremento___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtbdecremento___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtbdecremento___024root___eval_triggers__stl(Vtbdecremento___024root* vlSelf);

VL_ATTR_COLD bool Vtbdecremento___024root___eval_phase__stl(Vtbdecremento___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbdecremento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbdecremento___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtbdecremento___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtbdecremento___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbdecremento___024root___dump_triggers__act(Vtbdecremento___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbdecremento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbdecremento___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([changed] tbdecremento.S or [changed] tbdecremento.q2 or [changed] tbdecremento.q3 or [changed] tbdecremento.q4)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbdecremento___024root___dump_triggers__nba(Vtbdecremento___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbdecremento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbdecremento___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([changed] tbdecremento.S or [changed] tbdecremento.q2 or [changed] tbdecremento.q3 or [changed] tbdecremento.q4)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtbdecremento___024root___ctor_var_reset(Vtbdecremento___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbdecremento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbdecremento___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tbdecremento__DOT__q1 = VL_RAND_RESET_I(3);
    vlSelf->tbdecremento__DOT__q2 = VL_RAND_RESET_I(3);
    vlSelf->tbdecremento__DOT__q3 = VL_RAND_RESET_I(3);
    vlSelf->tbdecremento__DOT__q4 = VL_RAND_RESET_I(3);
    vlSelf->tbdecremento__DOT__S = VL_RAND_RESET_I(2);
    vlSelf->tbdecremento__DOT__s_int = VL_RAND_RESET_I(1);
    vlSelf->tbdecremento__DOT__o = VL_RAND_RESET_I(3);
    vlSelf->tbdecremento__DOT__dec__DOT__mm1 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tbdecremento__DOT__S__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tbdecremento__DOT__q2__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tbdecremento__DOT__q3__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tbdecremento__DOT__q4__0 = VL_RAND_RESET_I(3);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

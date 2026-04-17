// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux3tb.h for the primary calling header

#include "Vmux3tb__pch.h"
#include "Vmux3tb___024root.h"

VL_ATTR_COLD void Vmux3tb___024root___eval_static(Vmux3tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux3tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux3tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vmux3tb___024root___eval_final(Vmux3tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux3tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux3tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux3tb___024root___dump_triggers__stl(Vmux3tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmux3tb___024root___eval_phase__stl(Vmux3tb___024root* vlSelf);

VL_ATTR_COLD void Vmux3tb___024root___eval_settle(Vmux3tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux3tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux3tb___024root___eval_settle\n"); );
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
            Vmux3tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("mux3ingtb.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmux3tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux3tb___024root___dump_triggers__stl(Vmux3tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux3tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux3tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vmux3tb___024root___act_sequent__TOP__0(Vmux3tb___024root* vlSelf);

VL_ATTR_COLD void Vmux3tb___024root___eval_stl(Vmux3tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux3tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux3tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vmux3tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vmux3tb___024root___eval_triggers__stl(Vmux3tb___024root* vlSelf);

VL_ATTR_COLD bool Vmux3tb___024root___eval_phase__stl(Vmux3tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux3tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux3tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmux3tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vmux3tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux3tb___024root___dump_triggers__act(Vmux3tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux3tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux3tb___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vmux3tb___024root___dump_triggers__nba(Vmux3tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux3tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux3tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmux3tb___024root___ctor_var_reset(Vmux3tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux3tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux3tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->mux3tb__DOT__ing3 = VL_RAND_RESET_I(3);
    vlSelf->mux3tb__DOT__ing2 = VL_RAND_RESET_I(3);
    vlSelf->mux3tb__DOT__ing1 = VL_RAND_RESET_I(3);
    vlSelf->mux3tb__DOT__ctrl = VL_RAND_RESET_I(2);
    vlSelf->mux3tb__DOT__out = VL_RAND_RESET_I(3);
    }

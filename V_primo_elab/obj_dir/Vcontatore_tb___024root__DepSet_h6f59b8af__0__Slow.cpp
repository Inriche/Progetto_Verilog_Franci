// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontatore_tb.h for the primary calling header

#include "Vcontatore_tb__pch.h"
#include "Vcontatore_tb___024root.h"

VL_ATTR_COLD void Vcontatore_tb___024root___eval_static__TOP(Vcontatore_tb___024root* vlSelf);

VL_ATTR_COLD void Vcontatore_tb___024root___eval_static(Vcontatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontatore_tb___024root___eval_static\n"); );
    // Body
    Vcontatore_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vcontatore_tb___024root___eval_static__TOP(Vcontatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontatore_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->contatore_tb__DOT__out = 0U;
    vlSelf->contatore_tb__DOT__count__DOT__parall__DOT__dato = 0U;
}

VL_ATTR_COLD void Vcontatore_tb___024root___eval_final(Vcontatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontatore_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontatore_tb___024root___dump_triggers__stl(Vcontatore_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcontatore_tb___024root___eval_phase__stl(Vcontatore_tb___024root* vlSelf);

VL_ATTR_COLD void Vcontatore_tb___024root___eval_settle(Vcontatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontatore_tb___024root___eval_settle\n"); );
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
            Vcontatore_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_contatore.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcontatore_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontatore_tb___024root___dump_triggers__stl(Vcontatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontatore_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcontatore_tb___024root___stl_sequent__TOP__0(Vcontatore_tb___024root* vlSelf);

VL_ATTR_COLD void Vcontatore_tb___024root___eval_stl(Vcontatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontatore_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vcontatore_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vcontatore_tb___024root___eval_triggers__stl(Vcontatore_tb___024root* vlSelf);

VL_ATTR_COLD bool Vcontatore_tb___024root___eval_phase__stl(Vcontatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontatore_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcontatore_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vcontatore_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontatore_tb___024root___dump_triggers__act(Vcontatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontatore_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge contatore_tb.Clock)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge contatore_tb.Clock)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontatore_tb___024root___dump_triggers__nba(Vcontatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontatore_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge contatore_tb.Clock)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge contatore_tb.Clock)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcontatore_tb___024root___ctor_var_reset(Vcontatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontatore_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->contatore_tb__DOT__Clock = VL_RAND_RESET_I(1);
    vlSelf->contatore_tb__DOT__out = VL_RAND_RESET_I(4);
    vlSelf->contatore_tb__DOT__count__DOT__w = VL_RAND_RESET_I(4);
    vlSelf->contatore_tb__DOT__count__DOT__parall__DOT__dato = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__contatore_tb__DOT__Clock__0 = VL_RAND_RESET_I(1);
}

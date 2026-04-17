// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmagg_min_tb.h for the primary calling header

#include "Vmagg_min_tb__pch.h"
#include "Vmagg_min_tb___024root.h"

VL_ATTR_COLD void Vmagg_min_tb___024root___eval_static(Vmagg_min_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmagg_min_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmagg_min_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vmagg_min_tb___024root___eval_final(Vmagg_min_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmagg_min_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmagg_min_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmagg_min_tb___024root___dump_triggers__stl(Vmagg_min_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmagg_min_tb___024root___eval_phase__stl(Vmagg_min_tb___024root* vlSelf);

VL_ATTR_COLD void Vmagg_min_tb___024root___eval_settle(Vmagg_min_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmagg_min_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmagg_min_tb___024root___eval_settle\n"); );
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
            Vmagg_min_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("Maggiore_minore_tb.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmagg_min_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmagg_min_tb___024root___dump_triggers__stl(Vmagg_min_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmagg_min_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmagg_min_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vmagg_min_tb___024root___act_sequent__TOP__0(Vmagg_min_tb___024root* vlSelf);

VL_ATTR_COLD void Vmagg_min_tb___024root___eval_stl(Vmagg_min_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmagg_min_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmagg_min_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vmagg_min_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vmagg_min_tb___024root___eval_triggers__stl(Vmagg_min_tb___024root* vlSelf);

VL_ATTR_COLD bool Vmagg_min_tb___024root___eval_phase__stl(Vmagg_min_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmagg_min_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmagg_min_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmagg_min_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vmagg_min_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmagg_min_tb___024root___dump_triggers__act(Vmagg_min_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmagg_min_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmagg_min_tb___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vmagg_min_tb___024root___dump_triggers__nba(Vmagg_min_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmagg_min_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmagg_min_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmagg_min_tb___024root___ctor_var_reset(Vmagg_min_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmagg_min_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmagg_min_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->magg_min_tb__DOT__AA = VL_RAND_RESET_I(3);
    vlSelf->magg_min_tb__DOT__BB = VL_RAND_RESET_I(3);
    vlSelf->magg_min_tb__DOT__Mag = VL_RAND_RESET_I(3);
    vlSelf->magg_min_tb__DOT__Min = VL_RAND_RESET_I(3);
    vlSelf->magg_min_tb__DOT__dut__DOT__cc2 = VL_RAND_RESET_I(1);
    vlSelf->magg_min_tb__DOT__dut__DOT__cc3 = VL_RAND_RESET_I(1);
    vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__nn1 = VL_RAND_RESET_I(1);
    vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__xx1 = VL_RAND_RESET_I(1);
    vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa1 = VL_RAND_RESET_I(1);
    vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__nn2 = VL_RAND_RESET_I(1);
    vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa2 = VL_RAND_RESET_I(1);
    vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__nn3 = VL_RAND_RESET_I(1);
    vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa3 = VL_RAND_RESET_I(1);
    vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa4 = VL_RAND_RESET_I(1);
    vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa5 = VL_RAND_RESET_I(1);
    vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa6 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

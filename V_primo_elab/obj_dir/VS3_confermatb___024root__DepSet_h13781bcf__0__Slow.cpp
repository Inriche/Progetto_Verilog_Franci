// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VS3_confermatb.h for the primary calling header

#include "VS3_confermatb__pch.h"
#include "VS3_confermatb___024root.h"

VL_ATTR_COLD void VS3_confermatb___024root___eval_static(VS3_confermatb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VS3_confermatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS3_confermatb___024root___eval_static\n"); );
}

VL_ATTR_COLD void VS3_confermatb___024root___eval_final(VS3_confermatb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VS3_confermatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS3_confermatb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VS3_confermatb___024root___dump_triggers__stl(VS3_confermatb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VS3_confermatb___024root___eval_phase__stl(VS3_confermatb___024root* vlSelf);

VL_ATTR_COLD void VS3_confermatb___024root___eval_settle(VS3_confermatb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VS3_confermatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS3_confermatb___024root___eval_settle\n"); );
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
            VS3_confermatb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("S3_conferma_sel_tb.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VS3_confermatb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VS3_confermatb___024root___dump_triggers__stl(VS3_confermatb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VS3_confermatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS3_confermatb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VS3_confermatb___024root___act_sequent__TOP__0(VS3_confermatb___024root* vlSelf);

VL_ATTR_COLD void VS3_confermatb___024root___eval_stl(VS3_confermatb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VS3_confermatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS3_confermatb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VS3_confermatb___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VS3_confermatb___024root___eval_triggers__stl(VS3_confermatb___024root* vlSelf);

VL_ATTR_COLD bool VS3_confermatb___024root___eval_phase__stl(VS3_confermatb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VS3_confermatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS3_confermatb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VS3_confermatb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VS3_confermatb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VS3_confermatb___024root___dump_triggers__act(VS3_confermatb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VS3_confermatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS3_confermatb___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VS3_confermatb___024root___dump_triggers__nba(VS3_confermatb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VS3_confermatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS3_confermatb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VS3_confermatb___024root___ctor_var_reset(VS3_confermatb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VS3_confermatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS3_confermatb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->S3_confermatb__DOT__selez = VL_RAND_RESET_I(3);
    vlSelf->S3_confermatb__DOT__conf = VL_RAND_RESET_I(1);
    vlSelf->S3_confermatb__DOT__errore = VL_RAND_RESET_I(1);
    vlSelf->S3_confermatb__DOT__dut__DOT__aa0 = VL_RAND_RESET_I(1);
    vlSelf->S3_confermatb__DOT__dut__DOT__dd0 = VL_RAND_RESET_I(3);
    vlSelf->S3_confermatb__DOT__dut__DOT__dd1 = VL_RAND_RESET_I(3);
    vlSelf->S3_confermatb__DOT__dut__DOT__uu0 = VL_RAND_RESET_I(1);
    vlSelf->S3_confermatb__DOT__dut__DOT__nn0 = VL_RAND_RESET_I(1);
    vlSelf->S3_confermatb__DOT__dut__DOT__u1__DOT__aa1 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

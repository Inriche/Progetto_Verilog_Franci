// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Stato2.h for the primary calling header

#include "Vtb_Stato2__pch.h"
#include "Vtb_Stato2___024root.h"

VL_ATTR_COLD void Vtb_Stato2___024root___eval_static__TOP(Vtb_Stato2___024root* vlSelf);

VL_ATTR_COLD void Vtb_Stato2___024root___eval_static(Vtb_Stato2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Stato2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Stato2___024root___eval_static\n"); );
    // Body
    Vtb_Stato2___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtb_Stato2___024root___eval_static__TOP(Vtb_Stato2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Stato2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Stato2___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_Stato2__DOT__dut__DOT__m1__DOT__regpar__DOT__dato = 0U;
    vlSelf->tb_Stato2__DOT__dut__DOT__m2__DOT__regpar__DOT__dato = 0U;
    vlSelf->tb_Stato2__DOT__dut__DOT__m3__DOT__regpar__DOT__dato = 0U;
    vlSelf->tb_Stato2__DOT__dut__DOT__m5__DOT__regpar__DOT__dato = 0U;
    vlSelf->tb_Stato2__DOT__dut__DOT__m6__DOT__regpar__DOT__dato = 0U;
    vlSelf->tb_Stato2__DOT__dut__DOT__m7__DOT__regpar__DOT__dato = 0U;
    vlSelf->tb_Stato2__DOT__dut__DOT__m8__DOT__regpar__DOT__dato = 0U;
    vlSelf->tb_Stato2__DOT__dut__DOT__m9__DOT__regpar__DOT__dato = 0U;
    vlSelf->tb_Stato2__DOT__dut__DOT__m10__DOT__regpar__DOT__dato = 0U;
    vlSelf->tb_Stato2__DOT__dut__DOT__m11__DOT__regpar__DOT__dato = 0U;
    vlSelf->tb_Stato2__DOT__dut__DOT__m12__DOT__regpar__DOT__dato = 0U;
}

VL_ATTR_COLD void Vtb_Stato2___024root___eval_final(Vtb_Stato2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Stato2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Stato2___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Stato2___024root___dump_triggers__stl(Vtb_Stato2___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_Stato2___024root___eval_phase__stl(Vtb_Stato2___024root* vlSelf);

VL_ATTR_COLD void Vtb_Stato2___024root___eval_settle(Vtb_Stato2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Stato2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Stato2___024root___eval_settle\n"); );
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
            Vtb_Stato2___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_S1.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_Stato2___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Stato2___024root___dump_triggers__stl(Vtb_Stato2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Stato2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Stato2___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtb_Stato2___024root___act_sequent__TOP__0(Vtb_Stato2___024root* vlSelf);

VL_ATTR_COLD void Vtb_Stato2___024root___eval_stl(Vtb_Stato2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Stato2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Stato2___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_Stato2___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtb_Stato2___024root___eval_triggers__stl(Vtb_Stato2___024root* vlSelf);

VL_ATTR_COLD bool Vtb_Stato2___024root___eval_phase__stl(Vtb_Stato2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Stato2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Stato2___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_Stato2___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_Stato2___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Stato2___024root___dump_triggers__act(Vtb_Stato2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Stato2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Stato2___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_Stato2.clock)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Stato2___024root___dump_triggers__nba(Vtb_Stato2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Stato2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Stato2___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_Stato2.clock)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_Stato2___024root___ctor_var_reset(Vtb_Stato2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Stato2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Stato2___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_Stato2__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_Stato2__DOT__A1 = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__A2 = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__A3 = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__B1 = VL_RAND_RESET_I(10);
    vlSelf->tb_Stato2__DOT__B2 = VL_RAND_RESET_I(10);
    vlSelf->tb_Stato2__DOT__B3 = VL_RAND_RESET_I(10);
    vlSelf->tb_Stato2__DOT__C1 = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__C2 = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__C3 = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__D0 = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__D1 = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__E0 = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__E1 = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__F0 = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__F1 = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__G0 = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__G1 = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__H0 = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__H1 = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__I0 = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__I1 = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__J0 = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__J1 = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__K0 = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__K1 = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__Ctrl = VL_RAND_RESET_I(2);
    vlSelf->tb_Stato2__DOT__Ctrl_mux9 = VL_RAND_RESET_I(1);
    vlSelf->tb_Stato2__DOT__Ctrl_mux5 = VL_RAND_RESET_I(1);
    vlSelf->tb_Stato2__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->tb_Stato2__DOT__dut__DOT__m1__DOT__muxreg = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__dut__DOT__m1__DOT__regpar__DOT__dato = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__dut__DOT__m2__DOT__muxreg = VL_RAND_RESET_I(10);
    vlSelf->tb_Stato2__DOT__dut__DOT__m2__DOT__regpar__DOT__dato = VL_RAND_RESET_I(10);
    vlSelf->tb_Stato2__DOT__dut__DOT__m3__DOT__muxreg = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__dut__DOT__m3__DOT__regpar__DOT__dato = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__dut__DOT__m5__DOT__muxreg = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__dut__DOT__m5__DOT__regpar__DOT__dato = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__dut__DOT__m6__DOT__muxreg = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__dut__DOT__m6__DOT__regpar__DOT__dato = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__dut__DOT__m7__DOT__muxreg = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__dut__DOT__m7__DOT__regpar__DOT__dato = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__dut__DOT__m8__DOT__muxreg = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__dut__DOT__m8__DOT__regpar__DOT__dato = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__dut__DOT__m9__DOT__muxreg = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__dut__DOT__m9__DOT__regpar__DOT__dato = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__dut__DOT__m10__DOT__muxreg = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__dut__DOT__m10__DOT__regpar__DOT__dato = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__dut__DOT__m11__DOT__muxreg = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__dut__DOT__m11__DOT__regpar__DOT__dato = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__dut__DOT__m12__DOT__muxreg = VL_RAND_RESET_I(6);
    vlSelf->tb_Stato2__DOT__dut__DOT__m12__DOT__regpar__DOT__dato = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__tb_Stato2__DOT__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

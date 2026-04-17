// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VS1new_tb.h for the primary calling header

#include "VS1new_tb__pch.h"
#include "VS1new_tb___024root.h"

VL_ATTR_COLD void VS1new_tb___024root___eval_static__TOP(VS1new_tb___024root* vlSelf);

VL_ATTR_COLD void VS1new_tb___024root___eval_static(VS1new_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VS1new_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS1new_tb___024root___eval_static\n"); );
    // Body
    VS1new_tb___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VS1new_tb___024root___eval_static__TOP(VS1new_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VS1new_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS1new_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->S1new_tb__DOT__dut__DOT__outcont = 0U;
    vlSelf->S1new_tb__DOT__dut__DOT__comp1__DOT__parall__DOT__dato = 0U;
    vlSelf->S1new_tb__DOT__dut__DOT__reg0__DOT__dato = 0U;
    vlSelf->S1new_tb__DOT__dut__DOT__reg1__DOT__dato = 0U;
    vlSelf->S1new_tb__DOT__dut__DOT__reg2__DOT__dato = 0U;
    vlSelf->S1new_tb__DOT__dut__DOT__reg3__DOT__dato = 0U;
    vlSelf->S1new_tb__DOT__dut__DOT__reg4__DOT__dato = 0U;
    vlSelf->S1new_tb__DOT__dut__DOT__reg5__DOT__dato = 0U;
    vlSelf->S1new_tb__DOT__dut__DOT__reg6__DOT__dato = 0U;
    vlSelf->S1new_tb__DOT__dut__DOT__reg7__DOT__dato = 0U;
    vlSelf->S1new_tb__DOT__dut__DOT__reg8__DOT__dato = 0U;
    vlSelf->S1new_tb__DOT__dut__DOT__reg9__DOT__dato = 0U;
    vlSelf->S1new_tb__DOT__dut__DOT__reg10__DOT__dato = 0U;
    vlSelf->S1new_tb__DOT__dut__DOT__reg11__DOT__dato = 0U;
}

VL_ATTR_COLD void VS1new_tb___024root___eval_final(VS1new_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VS1new_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS1new_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VS1new_tb___024root___dump_triggers__stl(VS1new_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VS1new_tb___024root___eval_phase__stl(VS1new_tb___024root* vlSelf);

VL_ATTR_COLD void VS1new_tb___024root___eval_settle(VS1new_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VS1new_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS1new_tb___024root___eval_settle\n"); );
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
            VS1new_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_S1new.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VS1new_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VS1new_tb___024root___dump_triggers__stl(VS1new_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VS1new_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS1new_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VS1new_tb___024root___stl_sequent__TOP__0(VS1new_tb___024root* vlSelf);

VL_ATTR_COLD void VS1new_tb___024root___eval_stl(VS1new_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VS1new_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS1new_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VS1new_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VS1new_tb___024root___stl_sequent__TOP__0(VS1new_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VS1new_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS1new_tb___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->S1new_tb__DOT__dut__DOT__outdecode = ((0xfff8U 
                                                   & (IData)(vlSelf->S1new_tb__DOT__dut__DOT__outdecode)) 
                                                  | (((2U 
                                                       == (IData)(vlSelf->S1new_tb__DOT__dut__DOT__outcont)) 
                                                      << 2U) 
                                                     | (((1U 
                                                          == (IData)(vlSelf->S1new_tb__DOT__dut__DOT__outcont)) 
                                                         << 1U) 
                                                        | (0U 
                                                           == (IData)(vlSelf->S1new_tb__DOT__dut__DOT__outcont)))));
    vlSelf->S1new_tb__DOT__dut__DOT__outdecode = ((0xffc7U 
                                                   & (IData)(vlSelf->S1new_tb__DOT__dut__DOT__outdecode)) 
                                                  | (((5U 
                                                       == (IData)(vlSelf->S1new_tb__DOT__dut__DOT__outcont)) 
                                                      << 5U) 
                                                     | (((4U 
                                                          == (IData)(vlSelf->S1new_tb__DOT__dut__DOT__outcont)) 
                                                         << 4U) 
                                                        | ((3U 
                                                            == (IData)(vlSelf->S1new_tb__DOT__dut__DOT__outcont)) 
                                                           << 3U))));
    vlSelf->S1new_tb__DOT__dut__DOT__outdecode = ((0xfe3fU 
                                                   & (IData)(vlSelf->S1new_tb__DOT__dut__DOT__outdecode)) 
                                                  | (((8U 
                                                       == (IData)(vlSelf->S1new_tb__DOT__dut__DOT__outcont)) 
                                                      << 8U) 
                                                     | (((7U 
                                                          == (IData)(vlSelf->S1new_tb__DOT__dut__DOT__outcont)) 
                                                         << 7U) 
                                                        | ((6U 
                                                            == (IData)(vlSelf->S1new_tb__DOT__dut__DOT__outcont)) 
                                                           << 6U))));
    vlSelf->S1new_tb__DOT__dut__DOT__outdecode = ((0xf1ffU 
                                                   & (IData)(vlSelf->S1new_tb__DOT__dut__DOT__outdecode)) 
                                                  | (((0xbU 
                                                       == (IData)(vlSelf->S1new_tb__DOT__dut__DOT__outcont)) 
                                                      << 0xbU) 
                                                     | (((0xaU 
                                                          == (IData)(vlSelf->S1new_tb__DOT__dut__DOT__outcont)) 
                                                         << 0xaU) 
                                                        | ((9U 
                                                            == (IData)(vlSelf->S1new_tb__DOT__dut__DOT__outcont)) 
                                                           << 9U))));
    vlSelf->S1new_tb__DOT__dut__DOT__outdecode = ((0x8fffU 
                                                   & (IData)(vlSelf->S1new_tb__DOT__dut__DOT__outdecode)) 
                                                  | (((0xeU 
                                                       == (IData)(vlSelf->S1new_tb__DOT__dut__DOT__outcont)) 
                                                      << 0xeU) 
                                                     | (((0xdU 
                                                          == (IData)(vlSelf->S1new_tb__DOT__dut__DOT__outcont)) 
                                                         << 0xdU) 
                                                        | ((0xcU 
                                                            == (IData)(vlSelf->S1new_tb__DOT__dut__DOT__outcont)) 
                                                           << 0xcU))));
    vlSelf->S1new_tb__DOT__dut__DOT__outdecode = ((0x7fffU 
                                                   & (IData)(vlSelf->S1new_tb__DOT__dut__DOT__outdecode)) 
                                                  | ((0xfU 
                                                      == (IData)(vlSelf->S1new_tb__DOT__dut__DOT__outcont)) 
                                                     << 0xfU));
    vlSelf->S1new_tb__DOT__dut__DOT__comp1__DOT__w 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->S1new_tb__DOT__dut__DOT__comp1__DOT__parall__DOT__dato)));
}

VL_ATTR_COLD void VS1new_tb___024root___eval_triggers__stl(VS1new_tb___024root* vlSelf);

VL_ATTR_COLD bool VS1new_tb___024root___eval_phase__stl(VS1new_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VS1new_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS1new_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VS1new_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VS1new_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VS1new_tb___024root___dump_triggers__act(VS1new_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VS1new_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS1new_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge S1new_tb.C)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VS1new_tb___024root___dump_triggers__nba(VS1new_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VS1new_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS1new_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge S1new_tb.C)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VS1new_tb___024root___ctor_var_reset(VS1new_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VS1new_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS1new_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->S1new_tb__DOT__ingresso = VL_RAND_RESET_I(3);
    vlSelf->S1new_tb__DOT__C = VL_RAND_RESET_I(1);
    vlSelf->S1new_tb__DOT__dut__DOT__outcont = VL_RAND_RESET_I(4);
    vlSelf->S1new_tb__DOT__dut__DOT__outdecode = VL_RAND_RESET_I(16);
    vlSelf->S1new_tb__DOT__dut__DOT__comp1__DOT__w = VL_RAND_RESET_I(4);
    vlSelf->S1new_tb__DOT__dut__DOT__comp1__DOT__parall__DOT__dato = VL_RAND_RESET_I(4);
    vlSelf->S1new_tb__DOT__dut__DOT__reg0__DOT__dato = VL_RAND_RESET_I(3);
    vlSelf->S1new_tb__DOT__dut__DOT__reg1__DOT__dato = VL_RAND_RESET_I(3);
    vlSelf->S1new_tb__DOT__dut__DOT__reg2__DOT__dato = VL_RAND_RESET_I(3);
    vlSelf->S1new_tb__DOT__dut__DOT__reg3__DOT__dato = VL_RAND_RESET_I(3);
    vlSelf->S1new_tb__DOT__dut__DOT__reg4__DOT__dato = VL_RAND_RESET_I(3);
    vlSelf->S1new_tb__DOT__dut__DOT__reg5__DOT__dato = VL_RAND_RESET_I(3);
    vlSelf->S1new_tb__DOT__dut__DOT__reg6__DOT__dato = VL_RAND_RESET_I(3);
    vlSelf->S1new_tb__DOT__dut__DOT__reg7__DOT__dato = VL_RAND_RESET_I(3);
    vlSelf->S1new_tb__DOT__dut__DOT__reg8__DOT__dato = VL_RAND_RESET_I(3);
    vlSelf->S1new_tb__DOT__dut__DOT__reg9__DOT__dato = VL_RAND_RESET_I(3);
    vlSelf->S1new_tb__DOT__dut__DOT__reg10__DOT__dato = VL_RAND_RESET_I(3);
    vlSelf->S1new_tb__DOT__dut__DOT__reg11__DOT__dato = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__S1new_tb__DOT__C__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

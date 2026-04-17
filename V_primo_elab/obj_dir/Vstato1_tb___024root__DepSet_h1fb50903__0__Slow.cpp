// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstato1_tb.h for the primary calling header

#include "Vstato1_tb__pch.h"
#include "Vstato1_tb___024root.h"

VL_ATTR_COLD void Vstato1_tb___024root___eval_static__TOP(Vstato1_tb___024root* vlSelf);

VL_ATTR_COLD void Vstato1_tb___024root___eval_static(Vstato1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato1_tb___024root___eval_static\n"); );
    // Body
    Vstato1_tb___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vstato1_tb___024root___eval_static__TOP(Vstato1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato1_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->stato1_tb__DOT__state__DOT__outcont = 0U;
    vlSelf->stato1_tb__DOT__state__DOT__comp1__DOT__parall__DOT__dato = 0U;
    vlSelf->stato1_tb__DOT__state__DOT__reg0__DOT__dato = 0U;
    vlSelf->stato1_tb__DOT__state__DOT__reg1__DOT__dato = 0U;
    vlSelf->stato1_tb__DOT__state__DOT__reg2__DOT__dato = 0U;
    vlSelf->stato1_tb__DOT__state__DOT__reg3__DOT__dato = 0U;
    vlSelf->stato1_tb__DOT__state__DOT__reg4__DOT__dato = 0U;
    vlSelf->stato1_tb__DOT__state__DOT__reg5__DOT__dato = 0U;
    vlSelf->stato1_tb__DOT__state__DOT__reg6__DOT__dato = 0U;
    vlSelf->stato1_tb__DOT__state__DOT__reg7__DOT__dato = 0U;
    vlSelf->stato1_tb__DOT__state__DOT__reg8__DOT__dato = 0U;
    vlSelf->stato1_tb__DOT__state__DOT__reg9__DOT__dato = 0U;
    vlSelf->stato1_tb__DOT__state__DOT__reg10__DOT__dato = 0U;
    vlSelf->stato1_tb__DOT__state__DOT__reg11__DOT__dato = 0U;
}

VL_ATTR_COLD void Vstato1_tb___024root___eval_final(Vstato1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato1_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstato1_tb___024root___dump_triggers__stl(Vstato1_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vstato1_tb___024root___eval_phase__stl(Vstato1_tb___024root* vlSelf);

VL_ATTR_COLD void Vstato1_tb___024root___eval_settle(Vstato1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato1_tb___024root___eval_settle\n"); );
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
            Vstato1_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_S1.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vstato1_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstato1_tb___024root___dump_triggers__stl(Vstato1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato1_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vstato1_tb___024root___stl_sequent__TOP__0(Vstato1_tb___024root* vlSelf);

VL_ATTR_COLD void Vstato1_tb___024root___eval_stl(Vstato1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato1_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstato1_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

extern const VlUnpacked<CData/*2:0*/, 128> Vstato1_tb__ConstPool__TABLE_h17703109_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vstato1_tb__ConstPool__TABLE_hf99bc9af_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vstato1_tb__ConstPool__TABLE_h7e878d8d_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vstato1_tb__ConstPool__TABLE_hb7acfa40_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vstato1_tb__ConstPool__TABLE_h40122bb7_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vstato1_tb__ConstPool__TABLE_ha7545c5e_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vstato1_tb__ConstPool__TABLE_h66f6d15f_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vstato1_tb__ConstPool__TABLE_hf41d1926_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vstato1_tb__ConstPool__TABLE_h66148a3c_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vstato1_tb__ConstPool__TABLE_h8706b411_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vstato1_tb__ConstPool__TABLE_h24e8cb47_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vstato1_tb__ConstPool__TABLE_hda0c1ca4_0;

VL_ATTR_COLD void Vstato1_tb___024root___stl_sequent__TOP__0(Vstato1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato1_tb___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->stato1_tb__DOT__state__DOT__comp1__DOT__w 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->stato1_tb__DOT__state__DOT__comp1__DOT__parall__DOT__dato)));
    __Vtableidx1 = (((IData)(vlSelf->stato1_tb__DOT__stringa) 
                     << 4U) | (IData)(vlSelf->stato1_tb__DOT__state__DOT__outcont));
    vlSelf->stato1_tb__DOT__state__DOT__o0 = Vstato1_tb__ConstPool__TABLE_h17703109_0
        [__Vtableidx1];
    vlSelf->stato1_tb__DOT__state__DOT__o1 = Vstato1_tb__ConstPool__TABLE_hf99bc9af_0
        [__Vtableidx1];
    vlSelf->stato1_tb__DOT__state__DOT__o2 = Vstato1_tb__ConstPool__TABLE_h7e878d8d_0
        [__Vtableidx1];
    vlSelf->stato1_tb__DOT__state__DOT__o3 = Vstato1_tb__ConstPool__TABLE_hb7acfa40_0
        [__Vtableidx1];
    vlSelf->stato1_tb__DOT__state__DOT__o4 = Vstato1_tb__ConstPool__TABLE_h40122bb7_0
        [__Vtableidx1];
    vlSelf->stato1_tb__DOT__state__DOT__o5 = Vstato1_tb__ConstPool__TABLE_ha7545c5e_0
        [__Vtableidx1];
    vlSelf->stato1_tb__DOT__state__DOT__o6 = Vstato1_tb__ConstPool__TABLE_h66f6d15f_0
        [__Vtableidx1];
    vlSelf->stato1_tb__DOT__state__DOT__o7 = Vstato1_tb__ConstPool__TABLE_hf41d1926_0
        [__Vtableidx1];
    vlSelf->stato1_tb__DOT__state__DOT__o8 = Vstato1_tb__ConstPool__TABLE_h66148a3c_0
        [__Vtableidx1];
    vlSelf->stato1_tb__DOT__state__DOT__o9 = Vstato1_tb__ConstPool__TABLE_h8706b411_0
        [__Vtableidx1];
    vlSelf->stato1_tb__DOT__state__DOT__o10 = Vstato1_tb__ConstPool__TABLE_h24e8cb47_0
        [__Vtableidx1];
    vlSelf->stato1_tb__DOT__state__DOT__o11 = Vstato1_tb__ConstPool__TABLE_hda0c1ca4_0
        [__Vtableidx1];
}

VL_ATTR_COLD void Vstato1_tb___024root___eval_triggers__stl(Vstato1_tb___024root* vlSelf);

VL_ATTR_COLD bool Vstato1_tb___024root___eval_phase__stl(Vstato1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato1_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vstato1_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vstato1_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstato1_tb___024root___dump_triggers__act(Vstato1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato1_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge stato1_tb.C)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge stato1_tb.C)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstato1_tb___024root___dump_triggers__nba(Vstato1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato1_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge stato1_tb.C)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge stato1_tb.C)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vstato1_tb___024root___ctor_var_reset(Vstato1_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato1_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->stato1_tb__DOT__stringa = VL_RAND_RESET_I(3);
    vlSelf->stato1_tb__DOT__C = VL_RAND_RESET_I(1);
    vlSelf->stato1_tb__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->stato1_tb__DOT__state__DOT__outcont = VL_RAND_RESET_I(4);
    vlSelf->stato1_tb__DOT__state__DOT__o0 = VL_RAND_RESET_I(3);
    vlSelf->stato1_tb__DOT__state__DOT__o1 = VL_RAND_RESET_I(3);
    vlSelf->stato1_tb__DOT__state__DOT__o2 = VL_RAND_RESET_I(3);
    vlSelf->stato1_tb__DOT__state__DOT__o3 = VL_RAND_RESET_I(3);
    vlSelf->stato1_tb__DOT__state__DOT__o4 = VL_RAND_RESET_I(3);
    vlSelf->stato1_tb__DOT__state__DOT__o5 = VL_RAND_RESET_I(3);
    vlSelf->stato1_tb__DOT__state__DOT__o6 = VL_RAND_RESET_I(3);
    vlSelf->stato1_tb__DOT__state__DOT__o7 = VL_RAND_RESET_I(3);
    vlSelf->stato1_tb__DOT__state__DOT__o8 = VL_RAND_RESET_I(3);
    vlSelf->stato1_tb__DOT__state__DOT__o9 = VL_RAND_RESET_I(3);
    vlSelf->stato1_tb__DOT__state__DOT__o10 = VL_RAND_RESET_I(3);
    vlSelf->stato1_tb__DOT__state__DOT__o11 = VL_RAND_RESET_I(3);
    vlSelf->stato1_tb__DOT__state__DOT__comp1__DOT__w = VL_RAND_RESET_I(4);
    vlSelf->stato1_tb__DOT__state__DOT__comp1__DOT__parall__DOT__dato = VL_RAND_RESET_I(4);
    vlSelf->stato1_tb__DOT__state__DOT__reg0__DOT__dato = VL_RAND_RESET_I(3);
    vlSelf->stato1_tb__DOT__state__DOT__reg1__DOT__dato = VL_RAND_RESET_I(3);
    vlSelf->stato1_tb__DOT__state__DOT__reg2__DOT__dato = VL_RAND_RESET_I(3);
    vlSelf->stato1_tb__DOT__state__DOT__reg3__DOT__dato = VL_RAND_RESET_I(3);
    vlSelf->stato1_tb__DOT__state__DOT__reg4__DOT__dato = VL_RAND_RESET_I(3);
    vlSelf->stato1_tb__DOT__state__DOT__reg5__DOT__dato = VL_RAND_RESET_I(3);
    vlSelf->stato1_tb__DOT__state__DOT__reg6__DOT__dato = VL_RAND_RESET_I(3);
    vlSelf->stato1_tb__DOT__state__DOT__reg7__DOT__dato = VL_RAND_RESET_I(3);
    vlSelf->stato1_tb__DOT__state__DOT__reg8__DOT__dato = VL_RAND_RESET_I(3);
    vlSelf->stato1_tb__DOT__state__DOT__reg9__DOT__dato = VL_RAND_RESET_I(3);
    vlSelf->stato1_tb__DOT__state__DOT__reg10__DOT__dato = VL_RAND_RESET_I(3);
    vlSelf->stato1_tb__DOT__state__DOT__reg11__DOT__dato = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__stato1_tb__DOT__C__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

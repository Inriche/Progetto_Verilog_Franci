// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstato0_tb.h for the primary calling header

#include "Vstato0_tb__pch.h"
#include "Vstato0_tb___024root.h"

VlCoroutine Vstato0_tb___024root___eval_initial__TOP__Vtiming__0(Vstato0_tb___024root* vlSelf);

void Vstato0_tb___024root___eval_initial(Vstato0_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato0_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato0_tb___024root___eval_initial\n"); );
    // Body
    Vstato0_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__stato0_tb__DOT__C__0 
        = vlSelf->stato0_tb__DOT__C;
}

void Vstato0_tb___024root___act_sequent__TOP__0(Vstato0_tb___024root* vlSelf);

void Vstato0_tb___024root___eval_act(Vstato0_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato0_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato0_tb___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vstato0_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlUnpacked<CData/*2:0*/, 128> Vstato0_tb__ConstPool__TABLE_h17703109_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vstato0_tb__ConstPool__TABLE_hf99bc9af_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vstato0_tb__ConstPool__TABLE_h7e878d8d_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vstato0_tb__ConstPool__TABLE_hb7acfa40_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vstato0_tb__ConstPool__TABLE_h40122bb7_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vstato0_tb__ConstPool__TABLE_ha7545c5e_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vstato0_tb__ConstPool__TABLE_h66f6d15f_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vstato0_tb__ConstPool__TABLE_hf41d1926_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vstato0_tb__ConstPool__TABLE_h66148a3c_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vstato0_tb__ConstPool__TABLE_h8706b411_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vstato0_tb__ConstPool__TABLE_h24e8cb47_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vstato0_tb__ConstPool__TABLE_hda0c1ca4_0;

VL_INLINE_OPT void Vstato0_tb___024root___act_sequent__TOP__0(Vstato0_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato0_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato0_tb___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->stato0_tb__DOT__stringa) 
                     << 4U) | (IData)(vlSelf->stato0_tb__DOT__state__DOT__outcont));
    vlSelf->stato0_tb__DOT__state__DOT__o0 = Vstato0_tb__ConstPool__TABLE_h17703109_0
        [__Vtableidx1];
    vlSelf->stato0_tb__DOT__state__DOT__o1 = Vstato0_tb__ConstPool__TABLE_hf99bc9af_0
        [__Vtableidx1];
    vlSelf->stato0_tb__DOT__state__DOT__o2 = Vstato0_tb__ConstPool__TABLE_h7e878d8d_0
        [__Vtableidx1];
    vlSelf->stato0_tb__DOT__state__DOT__o3 = Vstato0_tb__ConstPool__TABLE_hb7acfa40_0
        [__Vtableidx1];
    vlSelf->stato0_tb__DOT__state__DOT__o4 = Vstato0_tb__ConstPool__TABLE_h40122bb7_0
        [__Vtableidx1];
    vlSelf->stato0_tb__DOT__state__DOT__o5 = Vstato0_tb__ConstPool__TABLE_ha7545c5e_0
        [__Vtableidx1];
    vlSelf->stato0_tb__DOT__state__DOT__o6 = Vstato0_tb__ConstPool__TABLE_h66f6d15f_0
        [__Vtableidx1];
    vlSelf->stato0_tb__DOT__state__DOT__o7 = Vstato0_tb__ConstPool__TABLE_hf41d1926_0
        [__Vtableidx1];
    vlSelf->stato0_tb__DOT__state__DOT__o8 = Vstato0_tb__ConstPool__TABLE_h66148a3c_0
        [__Vtableidx1];
    vlSelf->stato0_tb__DOT__state__DOT__o9 = Vstato0_tb__ConstPool__TABLE_h8706b411_0
        [__Vtableidx1];
    vlSelf->stato0_tb__DOT__state__DOT__o10 = Vstato0_tb__ConstPool__TABLE_h24e8cb47_0
        [__Vtableidx1];
    vlSelf->stato0_tb__DOT__state__DOT__o11 = Vstato0_tb__ConstPool__TABLE_hda0c1ca4_0
        [__Vtableidx1];
}

void Vstato0_tb___024root___nba_sequent__TOP__0(Vstato0_tb___024root* vlSelf);

void Vstato0_tb___024root___eval_nba(Vstato0_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato0_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato0_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstato0_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstato0_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vstato0_tb___024root___nba_sequent__TOP__0(Vstato0_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato0_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato0_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->stato0_tb__DOT__state__DOT__comp1__DOT__parall__DOT__dato 
        = vlSelf->stato0_tb__DOT__state__DOT__comp1__DOT__w;
    if ((1U & (IData)(vlSelf->stato0_tb__DOT__state__DOT__outdec))) {
        vlSelf->stato0_tb__DOT__state__DOT__reg0__DOT__dato 
            = vlSelf->stato0_tb__DOT__state__DOT__o0;
    }
    if ((2U & (IData)(vlSelf->stato0_tb__DOT__state__DOT__outdec))) {
        vlSelf->stato0_tb__DOT__state__DOT__reg1__DOT__dato 
            = vlSelf->stato0_tb__DOT__state__DOT__o1;
    }
    if ((4U & (IData)(vlSelf->stato0_tb__DOT__state__DOT__outdec))) {
        vlSelf->stato0_tb__DOT__state__DOT__reg2__DOT__dato 
            = vlSelf->stato0_tb__DOT__state__DOT__o2;
    }
    if ((8U & (IData)(vlSelf->stato0_tb__DOT__state__DOT__outdec))) {
        vlSelf->stato0_tb__DOT__state__DOT__reg3__DOT__dato 
            = vlSelf->stato0_tb__DOT__state__DOT__o3;
    }
    if ((0x10U & (IData)(vlSelf->stato0_tb__DOT__state__DOT__outdec))) {
        vlSelf->stato0_tb__DOT__state__DOT__reg4__DOT__dato 
            = vlSelf->stato0_tb__DOT__state__DOT__o4;
    }
    if ((0x20U & (IData)(vlSelf->stato0_tb__DOT__state__DOT__outdec))) {
        vlSelf->stato0_tb__DOT__state__DOT__reg5__DOT__dato 
            = vlSelf->stato0_tb__DOT__state__DOT__o5;
    }
    if ((0x40U & (IData)(vlSelf->stato0_tb__DOT__state__DOT__outdec))) {
        vlSelf->stato0_tb__DOT__state__DOT__reg6__DOT__dato 
            = vlSelf->stato0_tb__DOT__state__DOT__o6;
    }
    if ((0x80U & (IData)(vlSelf->stato0_tb__DOT__state__DOT__outdec))) {
        vlSelf->stato0_tb__DOT__state__DOT__reg7__DOT__dato 
            = vlSelf->stato0_tb__DOT__state__DOT__o7;
    }
    if ((0x100U & (IData)(vlSelf->stato0_tb__DOT__state__DOT__outdec))) {
        vlSelf->stato0_tb__DOT__state__DOT__reg8__DOT__dato 
            = vlSelf->stato0_tb__DOT__state__DOT__o8;
    }
    if ((0x200U & (IData)(vlSelf->stato0_tb__DOT__state__DOT__outdec))) {
        vlSelf->stato0_tb__DOT__state__DOT__reg9__DOT__dato 
            = vlSelf->stato0_tb__DOT__state__DOT__o9;
    }
    if ((0x400U & (IData)(vlSelf->stato0_tb__DOT__state__DOT__outdec))) {
        vlSelf->stato0_tb__DOT__state__DOT__reg10__DOT__dato 
            = vlSelf->stato0_tb__DOT__state__DOT__o10;
    }
    if ((0x800U & (IData)(vlSelf->stato0_tb__DOT__state__DOT__outdec))) {
        vlSelf->stato0_tb__DOT__state__DOT__reg11__DOT__dato 
            = vlSelf->stato0_tb__DOT__state__DOT__o11;
    }
    vlSelf->stato0_tb__DOT__state__DOT__comp1__DOT__w 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->stato0_tb__DOT__state__DOT__comp1__DOT__parall__DOT__dato)));
    vlSelf->stato0_tb__DOT__state__DOT__outcont = (
                                                   (0xcU 
                                                    > (IData)(vlSelf->stato0_tb__DOT__state__DOT__comp1__DOT__parall__DOT__dato))
                                                    ? (IData)(vlSelf->stato0_tb__DOT__state__DOT__comp1__DOT__parall__DOT__dato)
                                                    : 0U);
    vlSelf->stato0_tb__DOT__state__DOT__outdec = ((0xfff8U 
                                                   & (IData)(vlSelf->stato0_tb__DOT__state__DOT__outdec)) 
                                                  | (((2U 
                                                       == (IData)(vlSelf->stato0_tb__DOT__state__DOT__outcont)) 
                                                      << 2U) 
                                                     | (((1U 
                                                          == (IData)(vlSelf->stato0_tb__DOT__state__DOT__outcont)) 
                                                         << 1U) 
                                                        | (0U 
                                                           == (IData)(vlSelf->stato0_tb__DOT__state__DOT__outcont)))));
    vlSelf->stato0_tb__DOT__state__DOT__outdec = ((0xffc7U 
                                                   & (IData)(vlSelf->stato0_tb__DOT__state__DOT__outdec)) 
                                                  | (((5U 
                                                       == (IData)(vlSelf->stato0_tb__DOT__state__DOT__outcont)) 
                                                      << 5U) 
                                                     | (((4U 
                                                          == (IData)(vlSelf->stato0_tb__DOT__state__DOT__outcont)) 
                                                         << 4U) 
                                                        | ((3U 
                                                            == (IData)(vlSelf->stato0_tb__DOT__state__DOT__outcont)) 
                                                           << 3U))));
    vlSelf->stato0_tb__DOT__state__DOT__outdec = ((0xfe3fU 
                                                   & (IData)(vlSelf->stato0_tb__DOT__state__DOT__outdec)) 
                                                  | (((8U 
                                                       == (IData)(vlSelf->stato0_tb__DOT__state__DOT__outcont)) 
                                                      << 8U) 
                                                     | (((7U 
                                                          == (IData)(vlSelf->stato0_tb__DOT__state__DOT__outcont)) 
                                                         << 7U) 
                                                        | ((6U 
                                                            == (IData)(vlSelf->stato0_tb__DOT__state__DOT__outcont)) 
                                                           << 6U))));
    vlSelf->stato0_tb__DOT__state__DOT__outdec = ((0xf1ffU 
                                                   & (IData)(vlSelf->stato0_tb__DOT__state__DOT__outdec)) 
                                                  | (((0xbU 
                                                       == (IData)(vlSelf->stato0_tb__DOT__state__DOT__outcont)) 
                                                      << 0xbU) 
                                                     | (((0xaU 
                                                          == (IData)(vlSelf->stato0_tb__DOT__state__DOT__outcont)) 
                                                         << 0xaU) 
                                                        | ((9U 
                                                            == (IData)(vlSelf->stato0_tb__DOT__state__DOT__outcont)) 
                                                           << 9U))));
    vlSelf->stato0_tb__DOT__state__DOT__outdec = ((0x8fffU 
                                                   & (IData)(vlSelf->stato0_tb__DOT__state__DOT__outdec)) 
                                                  | (((0xeU 
                                                       == (IData)(vlSelf->stato0_tb__DOT__state__DOT__outcont)) 
                                                      << 0xeU) 
                                                     | (((0xdU 
                                                          == (IData)(vlSelf->stato0_tb__DOT__state__DOT__outcont)) 
                                                         << 0xdU) 
                                                        | ((0xcU 
                                                            == (IData)(vlSelf->stato0_tb__DOT__state__DOT__outcont)) 
                                                           << 0xcU))));
    vlSelf->stato0_tb__DOT__state__DOT__outdec = ((0x7fffU 
                                                   & (IData)(vlSelf->stato0_tb__DOT__state__DOT__outdec)) 
                                                  | ((0xfU 
                                                      == (IData)(vlSelf->stato0_tb__DOT__state__DOT__outcont)) 
                                                     << 0xfU));
}

void Vstato0_tb___024root___timing_resume(Vstato0_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato0_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato0_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vstato0_tb___024root___eval_triggers__act(Vstato0_tb___024root* vlSelf);

bool Vstato0_tb___024root___eval_phase__act(Vstato0_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato0_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato0_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vstato0_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vstato0_tb___024root___timing_resume(vlSelf);
        Vstato0_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vstato0_tb___024root___eval_phase__nba(Vstato0_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato0_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato0_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vstato0_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstato0_tb___024root___dump_triggers__nba(Vstato0_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vstato0_tb___024root___dump_triggers__act(Vstato0_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vstato0_tb___024root___eval(Vstato0_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato0_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato0_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vstato0_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_S0.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vstato0_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_S0.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vstato0_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vstato0_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vstato0_tb___024root___eval_debug_assertions(Vstato0_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato0_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato0_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG

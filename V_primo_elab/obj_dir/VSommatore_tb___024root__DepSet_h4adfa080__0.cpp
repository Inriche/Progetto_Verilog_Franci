// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSommatore_tb.h for the primary calling header

#include "VSommatore_tb__pch.h"
#include "VSommatore_tb___024root.h"

VlCoroutine VSommatore_tb___024root___eval_initial__TOP__Vtiming__0(VSommatore_tb___024root* vlSelf);

void VSommatore_tb___024root___eval_initial(VSommatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSommatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSommatore_tb___024root___eval_initial\n"); );
    // Body
    VSommatore_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine VSommatore_tb___024root___eval_initial__TOP__Vtiming__0(VSommatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSommatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSommatore_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    VL_WRITEF_NX("Time\tA\tB\tO\n",0);
    vlSelf->Sommatore_tb__DOT__A = 0U;
    vlSelf->Sommatore_tb__DOT__B = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_adder1.v", 
                                       22);
    VL_WRITEF_NX("%0t\t%3#\t%3#\t%3#\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,8,(IData)(vlSelf->Sommatore_tb__DOT__A),
                 8,vlSelf->Sommatore_tb__DOT__B,8,(IData)(vlSelf->Sommatore_tb__DOT__O));
    vlSelf->Sommatore_tb__DOT__A = 5U;
    vlSelf->Sommatore_tb__DOT__B = 3U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_adder1.v", 
                                       25);
    VL_WRITEF_NX("%0t\t%3#\t%3#\t%3#\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,8,(IData)(vlSelf->Sommatore_tb__DOT__A),
                 8,vlSelf->Sommatore_tb__DOT__B,8,(IData)(vlSelf->Sommatore_tb__DOT__O));
    vlSelf->Sommatore_tb__DOT__A = 0xaU;
    vlSelf->Sommatore_tb__DOT__B = 0x14U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_adder1.v", 
                                       28);
    VL_WRITEF_NX("%0t\t%3#\t%3#\t%3#\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,8,(IData)(vlSelf->Sommatore_tb__DOT__A),
                 8,vlSelf->Sommatore_tb__DOT__B,8,(IData)(vlSelf->Sommatore_tb__DOT__O));
    vlSelf->Sommatore_tb__DOT__A = 0x64U;
    vlSelf->Sommatore_tb__DOT__B = 0x32U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_adder1.v", 
                                       31);
    VL_WRITEF_NX("%0t\t%3#\t%3#\t%3#\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,8,(IData)(vlSelf->Sommatore_tb__DOT__A),
                 8,vlSelf->Sommatore_tb__DOT__B,8,(IData)(vlSelf->Sommatore_tb__DOT__O));
    vlSelf->Sommatore_tb__DOT__A = 0xffU;
    vlSelf->Sommatore_tb__DOT__B = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_adder1.v", 
                                       34);
    VL_WRITEF_NX("%0t\t%3#\t%3#\t%3#\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,8,(IData)(vlSelf->Sommatore_tb__DOT__A),
                 8,vlSelf->Sommatore_tb__DOT__B,8,(IData)(vlSelf->Sommatore_tb__DOT__O));
    VL_FINISH_MT("tb_adder1.v", 36, "");
}

void VSommatore_tb___024root___act_sequent__TOP__0(VSommatore_tb___024root* vlSelf);

void VSommatore_tb___024root___eval_act(VSommatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSommatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSommatore_tb___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VSommatore_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VSommatore_tb___024root___act_sequent__TOP__0(VSommatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSommatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSommatore_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->Sommatore_tb__DOT__O = (0xffU & ((IData)(vlSelf->Sommatore_tb__DOT__A) 
                                             + (IData)(vlSelf->Sommatore_tb__DOT__B)));
}

void VSommatore_tb___024root___eval_nba(VSommatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSommatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSommatore_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VSommatore_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void VSommatore_tb___024root___timing_resume(VSommatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSommatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSommatore_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VSommatore_tb___024root___eval_triggers__act(VSommatore_tb___024root* vlSelf);

bool VSommatore_tb___024root___eval_phase__act(VSommatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSommatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSommatore_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VSommatore_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VSommatore_tb___024root___timing_resume(vlSelf);
        VSommatore_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VSommatore_tb___024root___eval_phase__nba(VSommatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSommatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSommatore_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VSommatore_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSommatore_tb___024root___dump_triggers__nba(VSommatore_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSommatore_tb___024root___dump_triggers__act(VSommatore_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VSommatore_tb___024root___eval(VSommatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSommatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSommatore_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VSommatore_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_adder1.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VSommatore_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_adder1.v", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VSommatore_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VSommatore_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VSommatore_tb___024root___eval_debug_assertions(VSommatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSommatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSommatore_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG

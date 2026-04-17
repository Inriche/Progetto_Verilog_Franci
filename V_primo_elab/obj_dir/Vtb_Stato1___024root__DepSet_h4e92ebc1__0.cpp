// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Stato1.h for the primary calling header

#include "Vtb_Stato1__pch.h"
#include "Vtb_Stato1___024root.h"

VL_ATTR_COLD void Vtb_Stato1___024root___eval_initial__TOP(Vtb_Stato1___024root* vlSelf);
VlCoroutine Vtb_Stato1___024root___eval_initial__TOP__Vtiming__0(Vtb_Stato1___024root* vlSelf);
VlCoroutine Vtb_Stato1___024root___eval_initial__TOP__Vtiming__1(Vtb_Stato1___024root* vlSelf);

void Vtb_Stato1___024root___eval_initial(Vtb_Stato1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Stato1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Stato1___024root___eval_initial\n"); );
    // Body
    Vtb_Stato1___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_Stato1___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_Stato1___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_Stato1__DOT__clock__0 
        = vlSelf->tb_Stato1__DOT__clock;
}

VL_INLINE_OPT VlCoroutine Vtb_Stato1___024root___eval_initial__TOP__Vtiming__1(Vtb_Stato1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Stato1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Stato1___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb_S1.v", 
                                           63);
        vlSelf->tb_Stato1__DOT__clock = (1U & (~ (IData)(vlSelf->tb_Stato1__DOT__clock)));
    }
}

void Vtb_Stato1___024root___act_sequent__TOP__0(Vtb_Stato1___024root* vlSelf);

void Vtb_Stato1___024root___eval_act(Vtb_Stato1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Stato1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Stato1___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_Stato1___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_Stato1___024root___act_sequent__TOP__0(Vtb_Stato1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Stato1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Stato1___024root___act_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->tb_Stato1__DOT__Ctrl_mux5) {
        if (vlSelf->tb_Stato1__DOT__Ctrl_mux5) {
            vlSelf->tb_Stato1__DOT__dut__DOT__m5__DOT__muxreg 
                = vlSelf->tb_Stato1__DOT__H1;
            vlSelf->tb_Stato1__DOT__dut__DOT__m6__DOT__muxreg 
                = vlSelf->tb_Stato1__DOT__I1;
            vlSelf->tb_Stato1__DOT__dut__DOT__m7__DOT__muxreg 
                = vlSelf->tb_Stato1__DOT__J1;
            vlSelf->tb_Stato1__DOT__dut__DOT__m8__DOT__muxreg 
                = vlSelf->tb_Stato1__DOT__K1;
        }
    } else {
        vlSelf->tb_Stato1__DOT__dut__DOT__m5__DOT__muxreg 
            = vlSelf->tb_Stato1__DOT__H0;
        vlSelf->tb_Stato1__DOT__dut__DOT__m6__DOT__muxreg 
            = vlSelf->tb_Stato1__DOT__I0;
        vlSelf->tb_Stato1__DOT__dut__DOT__m7__DOT__muxreg 
            = vlSelf->tb_Stato1__DOT__J0;
        vlSelf->tb_Stato1__DOT__dut__DOT__m8__DOT__muxreg 
            = vlSelf->tb_Stato1__DOT__K0;
    }
    if (vlSelf->tb_Stato1__DOT__Ctrl_mux9) {
        if (vlSelf->tb_Stato1__DOT__Ctrl_mux9) {
            vlSelf->tb_Stato1__DOT__dut__DOT__m9__DOT__muxreg 
                = vlSelf->tb_Stato1__DOT__D1;
            vlSelf->tb_Stato1__DOT__dut__DOT__m10__DOT__muxreg 
                = vlSelf->tb_Stato1__DOT__E1;
            vlSelf->tb_Stato1__DOT__dut__DOT__m11__DOT__muxreg 
                = vlSelf->tb_Stato1__DOT__F1;
            vlSelf->tb_Stato1__DOT__dut__DOT__m12__DOT__muxreg 
                = vlSelf->tb_Stato1__DOT__G1;
        }
    } else {
        vlSelf->tb_Stato1__DOT__dut__DOT__m9__DOT__muxreg 
            = vlSelf->tb_Stato1__DOT__D0;
        vlSelf->tb_Stato1__DOT__dut__DOT__m10__DOT__muxreg 
            = vlSelf->tb_Stato1__DOT__E0;
        vlSelf->tb_Stato1__DOT__dut__DOT__m11__DOT__muxreg 
            = vlSelf->tb_Stato1__DOT__F0;
        vlSelf->tb_Stato1__DOT__dut__DOT__m12__DOT__muxreg 
            = vlSelf->tb_Stato1__DOT__G0;
    }
    if ((1U == (IData)(vlSelf->tb_Stato1__DOT__Ctrl))) {
        vlSelf->tb_Stato1__DOT__dut__DOT__m1__DOT__muxreg 
            = vlSelf->tb_Stato1__DOT__A1;
        vlSelf->tb_Stato1__DOT__dut__DOT__m2__DOT__muxreg 
            = vlSelf->tb_Stato1__DOT__B1;
        vlSelf->tb_Stato1__DOT__dut__DOT__m3__DOT__muxreg 
            = vlSelf->tb_Stato1__DOT__C1;
    } else if ((2U == (IData)(vlSelf->tb_Stato1__DOT__Ctrl))) {
        vlSelf->tb_Stato1__DOT__dut__DOT__m1__DOT__muxreg 
            = vlSelf->tb_Stato1__DOT__A2;
        vlSelf->tb_Stato1__DOT__dut__DOT__m2__DOT__muxreg 
            = vlSelf->tb_Stato1__DOT__B2;
        vlSelf->tb_Stato1__DOT__dut__DOT__m3__DOT__muxreg 
            = vlSelf->tb_Stato1__DOT__C2;
    } else if ((3U == (IData)(vlSelf->tb_Stato1__DOT__Ctrl))) {
        vlSelf->tb_Stato1__DOT__dut__DOT__m1__DOT__muxreg 
            = vlSelf->tb_Stato1__DOT__A3;
        vlSelf->tb_Stato1__DOT__dut__DOT__m2__DOT__muxreg 
            = vlSelf->tb_Stato1__DOT__B3;
        vlSelf->tb_Stato1__DOT__dut__DOT__m3__DOT__muxreg 
            = vlSelf->tb_Stato1__DOT__C3;
    } else {
        vlSelf->tb_Stato1__DOT__dut__DOT__m1__DOT__muxreg = 0U;
        vlSelf->tb_Stato1__DOT__dut__DOT__m2__DOT__muxreg = 0U;
        vlSelf->tb_Stato1__DOT__dut__DOT__m3__DOT__muxreg = 0U;
    }
}

void Vtb_Stato1___024root___nba_sequent__TOP__0(Vtb_Stato1___024root* vlSelf);

void Vtb_Stato1___024root___eval_nba(Vtb_Stato1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Stato1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Stato1___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_Stato1___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_Stato1___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_Stato1___024root___nba_sequent__TOP__0(Vtb_Stato1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Stato1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Stato1___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_Stato1__DOT__dut__DOT__m5__DOT__regpar__DOT__dato 
        = vlSelf->tb_Stato1__DOT__dut__DOT__m5__DOT__muxreg;
    vlSelf->tb_Stato1__DOT__dut__DOT__m6__DOT__regpar__DOT__dato 
        = vlSelf->tb_Stato1__DOT__dut__DOT__m6__DOT__muxreg;
    vlSelf->tb_Stato1__DOT__dut__DOT__m7__DOT__regpar__DOT__dato 
        = vlSelf->tb_Stato1__DOT__dut__DOT__m7__DOT__muxreg;
    vlSelf->tb_Stato1__DOT__dut__DOT__m8__DOT__regpar__DOT__dato 
        = vlSelf->tb_Stato1__DOT__dut__DOT__m8__DOT__muxreg;
    vlSelf->tb_Stato1__DOT__dut__DOT__m9__DOT__regpar__DOT__dato 
        = vlSelf->tb_Stato1__DOT__dut__DOT__m9__DOT__muxreg;
    vlSelf->tb_Stato1__DOT__dut__DOT__m10__DOT__regpar__DOT__dato 
        = vlSelf->tb_Stato1__DOT__dut__DOT__m10__DOT__muxreg;
    vlSelf->tb_Stato1__DOT__dut__DOT__m11__DOT__regpar__DOT__dato 
        = vlSelf->tb_Stato1__DOT__dut__DOT__m11__DOT__muxreg;
    vlSelf->tb_Stato1__DOT__dut__DOT__m12__DOT__regpar__DOT__dato 
        = vlSelf->tb_Stato1__DOT__dut__DOT__m12__DOT__muxreg;
    vlSelf->tb_Stato1__DOT__dut__DOT__m1__DOT__regpar__DOT__dato 
        = vlSelf->tb_Stato1__DOT__dut__DOT__m1__DOT__muxreg;
    vlSelf->tb_Stato1__DOT__dut__DOT__m2__DOT__regpar__DOT__dato 
        = vlSelf->tb_Stato1__DOT__dut__DOT__m2__DOT__muxreg;
    vlSelf->tb_Stato1__DOT__dut__DOT__m3__DOT__regpar__DOT__dato 
        = vlSelf->tb_Stato1__DOT__dut__DOT__m3__DOT__muxreg;
}

void Vtb_Stato1___024root___timing_resume(Vtb_Stato1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Stato1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Stato1___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_Stato1___024root___eval_triggers__act(Vtb_Stato1___024root* vlSelf);

bool Vtb_Stato1___024root___eval_phase__act(Vtb_Stato1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Stato1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Stato1___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_Stato1___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_Stato1___024root___timing_resume(vlSelf);
        Vtb_Stato1___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_Stato1___024root___eval_phase__nba(Vtb_Stato1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Stato1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Stato1___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_Stato1___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Stato1___024root___dump_triggers__nba(Vtb_Stato1___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Stato1___024root___dump_triggers__act(Vtb_Stato1___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_Stato1___024root___eval(Vtb_Stato1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Stato1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Stato1___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_Stato1___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_S1.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_Stato1___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_S1.v", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_Stato1___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_Stato1___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_Stato1___024root___eval_debug_assertions(Vtb_Stato1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Stato1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Stato1___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdemux_tb.h for the primary calling header

#include "Vdemux_tb__pch.h"
#include "Vdemux_tb___024root.h"

VlCoroutine Vdemux_tb___024root___eval_initial__TOP__Vtiming__0(Vdemux_tb___024root* vlSelf);

void Vdemux_tb___024root___eval_initial(Vdemux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdemux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux_tb___024root___eval_initial\n"); );
    // Body
    Vdemux_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vdemux_tb___024root___act_sequent__TOP__0(Vdemux_tb___024root* vlSelf);

void Vdemux_tb___024root___eval_act(Vdemux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdemux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux_tb___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vdemux_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vdemux_tb___024root___eval_nba(Vdemux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdemux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdemux_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void Vdemux_tb___024root___timing_resume(Vdemux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdemux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vdemux_tb___024root___eval_triggers__act(Vdemux_tb___024root* vlSelf);

bool Vdemux_tb___024root___eval_phase__act(Vdemux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdemux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdemux_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vdemux_tb___024root___timing_resume(vlSelf);
        Vdemux_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdemux_tb___024root___eval_phase__nba(Vdemux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdemux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdemux_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdemux_tb___024root___dump_triggers__nba(Vdemux_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdemux_tb___024root___dump_triggers__act(Vdemux_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vdemux_tb___024root___eval(Vdemux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdemux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vdemux_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_demux.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vdemux_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_demux.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vdemux_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vdemux_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdemux_tb___024root___eval_debug_assertions(Vdemux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdemux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG

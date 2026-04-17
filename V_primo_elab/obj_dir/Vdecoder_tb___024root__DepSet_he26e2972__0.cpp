// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecoder_tb.h for the primary calling header

#include "Vdecoder_tb__pch.h"
#include "Vdecoder_tb___024root.h"

VlCoroutine Vdecoder_tb___024root___eval_initial__TOP__Vtiming__0(Vdecoder_tb___024root* vlSelf);

void Vdecoder_tb___024root___eval_initial(Vdecoder_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_initial\n"); );
    // Body
    Vdecoder_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vdecoder_tb___024root___act_sequent__TOP__0(Vdecoder_tb___024root* vlSelf);

void Vdecoder_tb___024root___eval_act(Vdecoder_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vdecoder_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vdecoder_tb___024root___act_sequent__TOP__0(Vdecoder_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->decoder_tb__DOT__out = ((0xf8U & (IData)(vlSelf->decoder_tb__DOT__out)) 
                                    | (((2U == (IData)(vlSelf->decoder_tb__DOT__ing)) 
                                        << 2U) | ((
                                                   (1U 
                                                    == (IData)(vlSelf->decoder_tb__DOT__ing)) 
                                                   << 1U) 
                                                  | (0U 
                                                     == (IData)(vlSelf->decoder_tb__DOT__ing)))));
    vlSelf->decoder_tb__DOT__out = ((0xc7U & (IData)(vlSelf->decoder_tb__DOT__out)) 
                                    | (((5U == (IData)(vlSelf->decoder_tb__DOT__ing)) 
                                        << 5U) | ((
                                                   (4U 
                                                    == (IData)(vlSelf->decoder_tb__DOT__ing)) 
                                                   << 4U) 
                                                  | ((3U 
                                                      == (IData)(vlSelf->decoder_tb__DOT__ing)) 
                                                     << 3U))));
    vlSelf->decoder_tb__DOT__out = ((0x3fU & (IData)(vlSelf->decoder_tb__DOT__out)) 
                                    | (((7U == (IData)(vlSelf->decoder_tb__DOT__ing)) 
                                        << 7U) | ((6U 
                                                   == (IData)(vlSelf->decoder_tb__DOT__ing)) 
                                                  << 6U)));
}

void Vdecoder_tb___024root___eval_nba(Vdecoder_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdecoder_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vdecoder_tb___024root___timing_resume(Vdecoder_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vdecoder_tb___024root___eval_triggers__act(Vdecoder_tb___024root* vlSelf);

bool Vdecoder_tb___024root___eval_phase__act(Vdecoder_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdecoder_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vdecoder_tb___024root___timing_resume(vlSelf);
        Vdecoder_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdecoder_tb___024root___eval_phase__nba(Vdecoder_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdecoder_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder_tb___024root___dump_triggers__nba(Vdecoder_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder_tb___024root___dump_triggers__act(Vdecoder_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vdecoder_tb___024root___eval(Vdecoder_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vdecoder_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_decoder.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vdecoder_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_decoder.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vdecoder_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vdecoder_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdecoder_tb___024root___eval_debug_assertions(Vdecoder_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG

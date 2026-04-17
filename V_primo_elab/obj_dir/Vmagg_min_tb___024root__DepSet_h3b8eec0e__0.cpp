// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmagg_min_tb.h for the primary calling header

#include "Vmagg_min_tb__pch.h"
#include "Vmagg_min_tb__Syms.h"
#include "Vmagg_min_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vmagg_min_tb___024root___eval_initial__TOP__Vtiming__0(Vmagg_min_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmagg_min_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmagg_min_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"M_m.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelf->magg_min_tb__DOT__AA = 6U;
    vlSelf->magg_min_tb__DOT__BB = 5U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "Maggiore_minore_tb.v", 
                                       26);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->magg_min_tb__DOT__AA = 0U;
    vlSelf->magg_min_tb__DOT__BB = 5U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "Maggiore_minore_tb.v", 
                                       31);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->magg_min_tb__DOT__AA = 7U;
    vlSelf->magg_min_tb__DOT__BB = 7U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "Maggiore_minore_tb.v", 
                                       36);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->magg_min_tb__DOT__AA = 3U;
    vlSelf->magg_min_tb__DOT__BB = 4U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "Maggiore_minore_tb.v", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("Maggiore_minore_tb.v", 43, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmagg_min_tb___024root___dump_triggers__act(Vmagg_min_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmagg_min_tb___024root___eval_triggers__act(Vmagg_min_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmagg_min_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmagg_min_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmagg_min_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

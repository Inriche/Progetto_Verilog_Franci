// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSommatore_tb.h for the primary calling header

#include "VSommatore_tb__pch.h"
#include "VSommatore_tb__Syms.h"
#include "VSommatore_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VSommatore_tb___024root___dump_triggers__act(VSommatore_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VSommatore_tb___024root___eval_triggers__act(VSommatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSommatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSommatore_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSommatore_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

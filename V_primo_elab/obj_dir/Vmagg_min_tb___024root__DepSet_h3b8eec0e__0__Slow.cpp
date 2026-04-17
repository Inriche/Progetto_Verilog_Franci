// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmagg_min_tb.h for the primary calling header

#include "Vmagg_min_tb__pch.h"
#include "Vmagg_min_tb__Syms.h"
#include "Vmagg_min_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmagg_min_tb___024root___dump_triggers__stl(Vmagg_min_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmagg_min_tb___024root___eval_triggers__stl(Vmagg_min_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmagg_min_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmagg_min_tb___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmagg_min_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

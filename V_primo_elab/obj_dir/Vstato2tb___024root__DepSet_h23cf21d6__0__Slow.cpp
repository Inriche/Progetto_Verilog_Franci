// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstato2tb.h for the primary calling header

#include "Vstato2tb__pch.h"
#include "Vstato2tb__Syms.h"
#include "Vstato2tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstato2tb___024root___dump_triggers__stl(Vstato2tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vstato2tb___024root___eval_triggers__stl(Vstato2tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vstato2tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

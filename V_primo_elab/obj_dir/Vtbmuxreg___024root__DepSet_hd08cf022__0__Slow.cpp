// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtbmuxreg.h for the primary calling header

#include "Vtbmuxreg__pch.h"
#include "Vtbmuxreg__Syms.h"
#include "Vtbmuxreg___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbmuxreg___024root___dump_triggers__stl(Vtbmuxreg___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtbmuxreg___024root___eval_triggers__stl(Vtbmuxreg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbmuxreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbmuxreg___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtbmuxreg___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

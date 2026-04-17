// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontatore_tb.h for the primary calling header

#include "Vcontatore_tb__pch.h"
#include "Vcontatore_tb__Syms.h"
#include "Vcontatore_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vcontatore_tb___024root___eval_initial__TOP__Vtiming__0(Vcontatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontatore_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x746f7265U;
    __Vtemp_1[2U] = 0x6f6e7461U;
    __Vtemp_1[3U] = 0x63U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelf->contatore_tb__DOT__Clock = 0U;
    co_await vlSelf->__VdlySched.delay(0x96ULL, nullptr, 
                                       "tb_contatore.v", 
                                       24);
    VL_FINISH_MT("tb_contatore.v", 26, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontatore_tb___024root___dump_triggers__act(Vcontatore_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcontatore_tb___024root___eval_triggers__act(Vcontatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontatore_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->contatore_tb__DOT__Clock) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__contatore_tb__DOT__Clock__0))));
    vlSelf->__VactTriggered.set(1U, ((~ (IData)(vlSelf->contatore_tb__DOT__Clock)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__contatore_tb__DOT__Clock__0)));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__contatore_tb__DOT__Clock__0 
        = vlSelf->contatore_tb__DOT__Clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcontatore_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vcontatore_tb___024root___act_sequent__TOP__0(Vcontatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontatore_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF_NX("time=%0t  CLK=%b  O=%b\n",0,64,
                     VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelf->contatore_tb__DOT__Clock),
                     4,vlSelf->contatore_tb__DOT__out);
    }
}

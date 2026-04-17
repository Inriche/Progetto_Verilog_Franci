// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_regfeen.h for the primary calling header

#include "Vtb_regfeen__pch.h"
#include "Vtb_regfeen__Syms.h"
#include "Vtb_regfeen___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_regfeen___024root___eval_initial__TOP__Vtiming__0(Vtb_regfeen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_regfeen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_regfeen___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x65676665U;
    __Vtemp_1[2U] = 0x72U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->tb_regfeen__DOT__G = 0xaU;
    vlSelf->tb_regfeen__DOT__en = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tbregfeenable.v", 
                                       34);
    vlSelf->tb_regfeen__DOT__G = 0xaU;
    vlSelf->tb_regfeen__DOT__en = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tbregfeenable.v", 
                                       39);
    vlSelf->tb_regfeen__DOT__G = 0xfU;
    vlSelf->tb_regfeen__DOT__en = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tbregfeenable.v", 
                                       44);
    vlSelf->tb_regfeen__DOT__G = 0xfU;
    vlSelf->tb_regfeen__DOT__en = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tbregfeenable.v", 
                                       49);
    VL_FINISH_MT("tbregfeenable.v", 51, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_regfeen___024root___dump_triggers__act(Vtb_regfeen___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_regfeen___024root___eval_triggers__act(Vtb_regfeen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_regfeen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_regfeen___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((~ (IData)(vlSelf->tb_regfeen__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_regfeen__DOT__clk__0)));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_regfeen__DOT__clk__0 
        = vlSelf->tb_regfeen__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_regfeen___024root___dump_triggers__act(vlSelf);
    }
#endif
}

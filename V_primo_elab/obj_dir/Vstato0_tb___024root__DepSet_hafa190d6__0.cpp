// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstato0_tb.h for the primary calling header

#include "Vstato0_tb__pch.h"
#include "Vstato0_tb__Syms.h"
#include "Vstato0_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vstato0_tb___024root___eval_initial__TOP__Vtiming__0(Vstato0_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato0_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato0_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x5f73696dU;
    __Vtemp_1[2U] = 0x61746f30U;
    __Vtemp_1[3U] = 0x7374U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->stato0_tb__DOT__stringa = 7U;
    vlSelf->stato0_tb__DOT__C = 0U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_S0.v", 36);
    vlSelf->stato0_tb__DOT__C = (1U & (~ (IData)(vlSelf->stato0_tb__DOT__C)));
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_S0.v", 37);
    vlSelf->stato0_tb__DOT__C = (1U & (~ (IData)(vlSelf->stato0_tb__DOT__C)));
    vlSelf->stato0_tb__DOT__i = 1U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_S0.v", 36);
    vlSelf->stato0_tb__DOT__C = (1U & (~ (IData)(vlSelf->stato0_tb__DOT__C)));
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_S0.v", 37);
    vlSelf->stato0_tb__DOT__C = (1U & (~ (IData)(vlSelf->stato0_tb__DOT__C)));
    vlSelf->stato0_tb__DOT__i = 2U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_S0.v", 36);
    vlSelf->stato0_tb__DOT__C = (1U & (~ (IData)(vlSelf->stato0_tb__DOT__C)));
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_S0.v", 37);
    vlSelf->stato0_tb__DOT__C = (1U & (~ (IData)(vlSelf->stato0_tb__DOT__C)));
    vlSelf->stato0_tb__DOT__i = 3U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_S0.v", 36);
    vlSelf->stato0_tb__DOT__C = (1U & (~ (IData)(vlSelf->stato0_tb__DOT__C)));
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_S0.v", 37);
    vlSelf->stato0_tb__DOT__C = (1U & (~ (IData)(vlSelf->stato0_tb__DOT__C)));
    vlSelf->stato0_tb__DOT__i = 4U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_S0.v", 36);
    vlSelf->stato0_tb__DOT__C = (1U & (~ (IData)(vlSelf->stato0_tb__DOT__C)));
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_S0.v", 37);
    vlSelf->stato0_tb__DOT__C = (1U & (~ (IData)(vlSelf->stato0_tb__DOT__C)));
    vlSelf->stato0_tb__DOT__i = 5U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_S0.v", 36);
    vlSelf->stato0_tb__DOT__C = (1U & (~ (IData)(vlSelf->stato0_tb__DOT__C)));
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_S0.v", 37);
    vlSelf->stato0_tb__DOT__C = (1U & (~ (IData)(vlSelf->stato0_tb__DOT__C)));
    vlSelf->stato0_tb__DOT__i = 6U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_S0.v", 36);
    vlSelf->stato0_tb__DOT__C = (1U & (~ (IData)(vlSelf->stato0_tb__DOT__C)));
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_S0.v", 37);
    vlSelf->stato0_tb__DOT__C = (1U & (~ (IData)(vlSelf->stato0_tb__DOT__C)));
    vlSelf->stato0_tb__DOT__i = 7U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_S0.v", 36);
    vlSelf->stato0_tb__DOT__C = (1U & (~ (IData)(vlSelf->stato0_tb__DOT__C)));
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_S0.v", 37);
    vlSelf->stato0_tb__DOT__C = (1U & (~ (IData)(vlSelf->stato0_tb__DOT__C)));
    vlSelf->stato0_tb__DOT__i = 8U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_S0.v", 36);
    vlSelf->stato0_tb__DOT__C = (1U & (~ (IData)(vlSelf->stato0_tb__DOT__C)));
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_S0.v", 37);
    vlSelf->stato0_tb__DOT__C = (1U & (~ (IData)(vlSelf->stato0_tb__DOT__C)));
    vlSelf->stato0_tb__DOT__i = 9U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_S0.v", 36);
    vlSelf->stato0_tb__DOT__C = (1U & (~ (IData)(vlSelf->stato0_tb__DOT__C)));
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_S0.v", 37);
    vlSelf->stato0_tb__DOT__C = (1U & (~ (IData)(vlSelf->stato0_tb__DOT__C)));
    vlSelf->stato0_tb__DOT__i = 0xaU;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_S0.v", 36);
    vlSelf->stato0_tb__DOT__C = (1U & (~ (IData)(vlSelf->stato0_tb__DOT__C)));
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_S0.v", 37);
    vlSelf->stato0_tb__DOT__C = (1U & (~ (IData)(vlSelf->stato0_tb__DOT__C)));
    vlSelf->stato0_tb__DOT__i = 0xbU;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_S0.v", 36);
    vlSelf->stato0_tb__DOT__C = (1U & (~ (IData)(vlSelf->stato0_tb__DOT__C)));
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_S0.v", 37);
    vlSelf->stato0_tb__DOT__C = (1U & (~ (IData)(vlSelf->stato0_tb__DOT__C)));
    vlSelf->stato0_tb__DOT__i = 0xcU;
    VL_FINISH_MT("tb_S0.v", 40, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstato0_tb___024root___dump_triggers__act(Vstato0_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vstato0_tb___024root___eval_triggers__act(Vstato0_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato0_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato0_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->stato0_tb__DOT__C) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__stato0_tb__DOT__C__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__stato0_tb__DOT__C__0 
        = vlSelf->stato0_tb__DOT__C;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vstato0_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

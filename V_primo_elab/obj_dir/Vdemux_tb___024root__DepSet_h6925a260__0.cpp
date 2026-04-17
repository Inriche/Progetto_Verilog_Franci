// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdemux_tb.h for the primary calling header

#include "Vdemux_tb__pch.h"
#include "Vdemux_tb__Syms.h"
#include "Vdemux_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vdemux_tb___024root___eval_initial__TOP__Vtiming__0(Vdemux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdemux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x656d7578U;
    __Vtemp_1[2U] = 0x696d5f64U;
    __Vtemp_1[3U] = 0x73U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelf->demux_tb__DOT__inp = 7U;
    vlSelf->demux_tb__DOT__control = 0U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_demux.v", 
                                       36);
    vlSelf->demux_tb__DOT__control = 1U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_demux.v", 
                                       40);
    vlSelf->demux_tb__DOT__control = 4U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_demux.v", 
                                       44);
    vlSelf->demux_tb__DOT__control = 8U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_demux.v", 
                                       48);
    VL_FINISH_MT("tb_demux.v", 50, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdemux_tb___024root___dump_triggers__act(Vdemux_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vdemux_tb___024root___eval_triggers__act(Vdemux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdemux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdemux_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*2:0*/, 128> Vdemux_tb__ConstPool__TABLE_h17703109_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vdemux_tb__ConstPool__TABLE_hf99bc9af_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vdemux_tb__ConstPool__TABLE_h7e878d8d_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vdemux_tb__ConstPool__TABLE_hb7acfa40_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vdemux_tb__ConstPool__TABLE_h40122bb7_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vdemux_tb__ConstPool__TABLE_ha7545c5e_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vdemux_tb__ConstPool__TABLE_h66f6d15f_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vdemux_tb__ConstPool__TABLE_hf41d1926_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vdemux_tb__ConstPool__TABLE_h66148a3c_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vdemux_tb__ConstPool__TABLE_h8706b411_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vdemux_tb__ConstPool__TABLE_h24e8cb47_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vdemux_tb__ConstPool__TABLE_hda0c1ca4_0;

VL_INLINE_OPT void Vdemux_tb___024root___act_sequent__TOP__0(Vdemux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdemux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux_tb___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->demux_tb__DOT__inp) 
                     << 4U) | (IData)(vlSelf->demux_tb__DOT__control));
    vlSelf->demux_tb__DOT__O0 = Vdemux_tb__ConstPool__TABLE_h17703109_0
        [__Vtableidx1];
    vlSelf->demux_tb__DOT__O1 = Vdemux_tb__ConstPool__TABLE_hf99bc9af_0
        [__Vtableidx1];
    vlSelf->demux_tb__DOT__O2 = Vdemux_tb__ConstPool__TABLE_h7e878d8d_0
        [__Vtableidx1];
    vlSelf->demux_tb__DOT__O3 = Vdemux_tb__ConstPool__TABLE_hb7acfa40_0
        [__Vtableidx1];
    vlSelf->demux_tb__DOT__O4 = Vdemux_tb__ConstPool__TABLE_h40122bb7_0
        [__Vtableidx1];
    vlSelf->demux_tb__DOT__O5 = Vdemux_tb__ConstPool__TABLE_ha7545c5e_0
        [__Vtableidx1];
    vlSelf->demux_tb__DOT__O6 = Vdemux_tb__ConstPool__TABLE_h66f6d15f_0
        [__Vtableidx1];
    vlSelf->demux_tb__DOT__O7 = Vdemux_tb__ConstPool__TABLE_hf41d1926_0
        [__Vtableidx1];
    vlSelf->demux_tb__DOT__O8 = Vdemux_tb__ConstPool__TABLE_h66148a3c_0
        [__Vtableidx1];
    vlSelf->demux_tb__DOT__O9 = Vdemux_tb__ConstPool__TABLE_h8706b411_0
        [__Vtableidx1];
    vlSelf->demux_tb__DOT__O10 = Vdemux_tb__ConstPool__TABLE_h24e8cb47_0
        [__Vtableidx1];
    vlSelf->demux_tb__DOT__O11 = Vdemux_tb__ConstPool__TABLE_hda0c1ca4_0
        [__Vtableidx1];
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF_NX("time = %0t, control= %b, O0 = %b, O1 = %b, O2 = %b, O3 = %b, O4 = %b, O5 = %b, O6 = %b, O7 = %b, O8 = %b, O9 = %b, O10 = %b, O11 = %b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,4,(IData)(vlSelf->demux_tb__DOT__control),
                     3,vlSelf->demux_tb__DOT__O0,3,
                     (IData)(vlSelf->demux_tb__DOT__O1),
                     3,vlSelf->demux_tb__DOT__O2,3,
                     (IData)(vlSelf->demux_tb__DOT__O3),
                     3,vlSelf->demux_tb__DOT__O4,3,
                     (IData)(vlSelf->demux_tb__DOT__O5),
                     3,vlSelf->demux_tb__DOT__O6,3,
                     (IData)(vlSelf->demux_tb__DOT__O7),
                     3,vlSelf->demux_tb__DOT__O8,3,
                     (IData)(vlSelf->demux_tb__DOT__O9),
                     3,vlSelf->demux_tb__DOT__O10,3,
                     (IData)(vlSelf->demux_tb__DOT__O11));
    }
}

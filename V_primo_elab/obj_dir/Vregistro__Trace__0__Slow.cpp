// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vregistro__Syms.h"


VL_ATTR_COLD void Vregistro___024root__trace_init_sub__TOP__0(Vregistro___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregistro__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregistro___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("registro", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+5,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"O",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"dato",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vregistro___024root__trace_init_top(Vregistro___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregistro__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregistro___024root__trace_init_top\n"); );
    // Body
    Vregistro___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vregistro___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vregistro___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vregistro___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vregistro___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vregistro___024root__trace_register(Vregistro___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregistro__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregistro___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vregistro___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vregistro___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vregistro___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vregistro___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vregistro___024root__trace_const_0_sub_0(Vregistro___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vregistro___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregistro___024root__trace_const_0\n"); );
    // Init
    Vregistro___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregistro___024root*>(voidSelf);
    Vregistro__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vregistro___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vregistro___024root__trace_const_0_sub_0(Vregistro___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregistro__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregistro___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+7,(4U),32);
}

VL_ATTR_COLD void Vregistro___024root__trace_full_0_sub_0(Vregistro___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vregistro___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregistro___024root__trace_full_0\n"); );
    // Init
    Vregistro___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregistro___024root*>(voidSelf);
    Vregistro__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vregistro___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vregistro___024root__trace_full_0_sub_0(Vregistro___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregistro__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregistro___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,((1U & (IData)(vlSelf->registro__DOT__dut__DOT__dato))),4);
    bufp->fullBit(oldp+2,((1U & (IData)(vlSelf->registro__DOT__dut__DOT__dato))));
    bufp->fullCData(oldp+3,(vlSelf->registro__DOT__dut__DOT__dato),4);
    bufp->fullCData(oldp+4,(vlSelf->registro__DOT__A),4);
    bufp->fullBit(oldp+5,(vlSelf->registro__DOT__C));
    bufp->fullBit(oldp+6,((1U & (IData)(vlSelf->registro__DOT__A))));
}

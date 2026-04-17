// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vstato4tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vstato4tb::Vstato4tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vstato4tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vstato4tb::Vstato4tb(const char* _vcname__)
    : Vstato4tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vstato4tb::~Vstato4tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vstato4tb___024root___eval_debug_assertions(Vstato4tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vstato4tb___024root___eval_static(Vstato4tb___024root* vlSelf);
void Vstato4tb___024root___eval_initial(Vstato4tb___024root* vlSelf);
void Vstato4tb___024root___eval_settle(Vstato4tb___024root* vlSelf);
void Vstato4tb___024root___eval(Vstato4tb___024root* vlSelf);

void Vstato4tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vstato4tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vstato4tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vstato4tb___024root___eval_static(&(vlSymsp->TOP));
        Vstato4tb___024root___eval_initial(&(vlSymsp->TOP));
        Vstato4tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vstato4tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vstato4tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vstato4tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vstato4tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vstato4tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vstato4tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vstato4tb___024root___eval_final(Vstato4tb___024root* vlSelf);

VL_ATTR_COLD void Vstato4tb::final() {
    Vstato4tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vstato4tb::hierName() const { return vlSymsp->name(); }
const char* Vstato4tb::modelName() const { return "Vstato4tb"; }
unsigned Vstato4tb::threads() const { return 1; }
void Vstato4tb::prepareClone() const { contextp()->prepareClone(); }
void Vstato4tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vstato4tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vstato4tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vstato4tb___024root__trace_init_top(Vstato4tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vstato4tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstato4tb___024root*>(voidSelf);
    Vstato4tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vstato4tb___024root__trace_decl_types(tracep);
    Vstato4tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vstato4tb___024root__trace_register(Vstato4tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vstato4tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vstato4tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vstato4tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}

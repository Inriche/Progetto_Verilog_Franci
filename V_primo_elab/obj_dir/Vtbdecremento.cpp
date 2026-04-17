// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtbdecremento__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtbdecremento::Vtbdecremento(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtbdecremento__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtbdecremento::Vtbdecremento(const char* _vcname__)
    : Vtbdecremento(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtbdecremento::~Vtbdecremento() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtbdecremento___024root___eval_debug_assertions(Vtbdecremento___024root* vlSelf);
#endif  // VL_DEBUG
void Vtbdecremento___024root___eval_static(Vtbdecremento___024root* vlSelf);
void Vtbdecremento___024root___eval_initial(Vtbdecremento___024root* vlSelf);
void Vtbdecremento___024root___eval_settle(Vtbdecremento___024root* vlSelf);
void Vtbdecremento___024root___eval(Vtbdecremento___024root* vlSelf);

void Vtbdecremento::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtbdecremento::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtbdecremento___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtbdecremento___024root___eval_static(&(vlSymsp->TOP));
        Vtbdecremento___024root___eval_initial(&(vlSymsp->TOP));
        Vtbdecremento___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtbdecremento___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vtbdecremento::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vtbdecremento::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vtbdecremento::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtbdecremento::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtbdecremento::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtbdecremento___024root___eval_final(Vtbdecremento___024root* vlSelf);

VL_ATTR_COLD void Vtbdecremento::final() {
    Vtbdecremento___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtbdecremento::hierName() const { return vlSymsp->name(); }
const char* Vtbdecremento::modelName() const { return "Vtbdecremento"; }
unsigned Vtbdecremento::threads() const { return 1; }
void Vtbdecremento::prepareClone() const { contextp()->prepareClone(); }
void Vtbdecremento::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtbdecremento::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtbdecremento___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtbdecremento___024root__trace_init_top(Vtbdecremento___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtbdecremento___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtbdecremento___024root*>(voidSelf);
    Vtbdecremento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtbdecremento___024root__trace_decl_types(tracep);
    Vtbdecremento___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtbdecremento___024root__trace_register(Vtbdecremento___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtbdecremento::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtbdecremento::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtbdecremento___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}

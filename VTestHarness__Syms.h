// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VTestHarness__Syms_H_
#define _VTestHarness__Syms_H_

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VTestHarness.h"
#include "VTestHarness___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class VTestHarness__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool	__Vm_activity;		///< Used by trace routines to determine change occurred
    bool	__Vm_didInit;
    //char	__VpadToAlign10[6];
    
    // SUBCELL STATE
    VTestHarness*                  TOPp;
    VTestHarness___024unit         TOP____024unit;
    
    // COVERAGE
    
    // SCOPE NAMES
    VerilatedScope __Vscope_TestHarness;
    VerilatedScope __Vscope_TestHarness__dut__clint__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__debug_1__dmInner__dmInner;
    VerilatedScope __Vscope_TestHarness__dut__debug_1__dmInner__dmInner__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__debug_1__dmInner__dmInner__TLMonitor_1;
    VerilatedScope __Vscope_TestHarness__dut__debug_1__dmOuter__asource__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__debug_1__dmOuter__dmOuter__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__debug_1__dmOuter__dmiXbar;
    VerilatedScope __Vscope_TestHarness__dut__debug_1__dmOuter__dmiXbar__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__error__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__fbus__coupler_from_port_named_slave_port_axi4__axi42tl;
    VerilatedScope __Vscope_TestHarness__dut__fbus__coupler_from_port_named_slave_port_axi4__axi4frag;
    VerilatedScope __Vscope_TestHarness__dut__fbus__coupler_from_port_named_slave_port_axi4__axi4yank;
    VerilatedScope __Vscope_TestHarness__dut__fbus__coupler_from_port_named_slave_port_axi4__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__fbus__coupler_from_port_named_slave_port_axi4__fixer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__fbus__coupler_from_port_named_slave_port_axi4__widget__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__fbus__coupler_to_sbus__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__fbus__front_bus_xbar;
    VerilatedScope __Vscope_TestHarness__dut__fbus__front_bus_xbar__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__fbus__sync_xing__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__pbus__coupler_from_sbus__atomics;
    VerilatedScope __Vscope_TestHarness__dut__pbus__coupler_from_sbus__atomics__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__pbus__coupler_from_sbus__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__pbus__coupler_to_slave_named_clint__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__pbus__coupler_to_slave_named_clint__fragmenter;
    VerilatedScope __Vscope_TestHarness__dut__pbus__coupler_to_slave_named_clint__fragmenter__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__pbus__coupler_to_slave_named_debug__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__pbus__coupler_to_slave_named_debug__fragmenter;
    VerilatedScope __Vscope_TestHarness__dut__pbus__coupler_to_slave_named_debug__fragmenter__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__pbus__coupler_to_slave_named_plic__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__pbus__coupler_to_slave_named_plic__fragmenter;
    VerilatedScope __Vscope_TestHarness__dut__pbus__coupler_to_slave_named_plic__fragmenter__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__pbus__coupler_to_tile_named_tile__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__pbus__periphery_bus_xbar;
    VerilatedScope __Vscope_TestHarness__dut__pbus__periphery_bus_xbar__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__pbus__sync_xing__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__plic;
    VerilatedScope __Vscope_TestHarness__dut__plic__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__sbus__coupler_from_tile_named_tile__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__sbus__coupler_from_tile_named_tile__cork;
    VerilatedScope __Vscope_TestHarness__dut__sbus__coupler_from_tile_named_tile__cork__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__sbus__coupler_from_tile_named_tile__fixer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__sbus__coupler_to_pbus__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__sbus__coupler_to_pbus__fixer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__sbus__coupler_to_pbus__widget__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__sbus__coupler_to_port_named_mmio_port_axi4__axi4deint;
    VerilatedScope __Vscope_TestHarness__dut__sbus__coupler_to_port_named_mmio_port_axi4__axi4yank;
    VerilatedScope __Vscope_TestHarness__dut__sbus__coupler_to_port_named_mmio_port_axi4__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__sbus__coupler_to_port_named_mmio_port_axi4__tl2axi4;
    VerilatedScope __Vscope_TestHarness__dut__sbus__coupler_to_port_named_mmio_port_axi4__tl2axi4__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__sbus__coupler_to_port_named_mmio_port_axi4__widget__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__sbus__coupler_to_slave_named_Error__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__sbus__master_splitter__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__sbus__master_splitter__TLMonitor_1;
    VerilatedScope __Vscope_TestHarness__dut__sbus__system_bus_xbar;
    VerilatedScope __Vscope_TestHarness__dut__sbus__system_bus_xbar__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__sbus__system_bus_xbar__TLMonitor_1;
    VerilatedScope __Vscope_TestHarness__dut__tile__core__PlusArgTimeout;
    VerilatedScope __Vscope_TestHarness__dut__tile__core__csr;
    VerilatedScope __Vscope_TestHarness__dut__tile__core__ibuf;
    VerilatedScope __Vscope_TestHarness__dut__tile__dcache;
    VerilatedScope __Vscope_TestHarness__dut__tile__fragmenter_1;
    VerilatedScope __Vscope_TestHarness__dut__tile__sync_xing_1__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__tile__sync_xing__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__tile__tlMasterXbar;
    VerilatedScope __Vscope_TestHarness__dut__tile__tlMasterXbar__TLMonitor;
    VerilatedScope __Vscope_TestHarness__dut__tile__tlMasterXbar__TLMonitor_1;
    VerilatedScope __Vscope_TestHarness__dut__tile__tlSlaveXbar;
    VerilatedScope __Vscope_TestHarness__mmio_mem__axi4frag;
    
    // CREATORS
    VTestHarness__Syms(VTestHarness* topp, const char* namep);
    ~VTestHarness__Syms() {};
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r;}
    
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/

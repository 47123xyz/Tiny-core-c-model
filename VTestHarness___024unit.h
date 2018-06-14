// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTestHarness.h for the primary calling header

#ifndef _VTestHarness___024unit_H_
#define _VTestHarness___024unit_H_

#include "verilated_heavy.h"
#include "VTestHarness__Inlines.h"
#include "VTestHarness__Dpi.h"

class VTestHarness__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VTestHarness___024unit) {
  public:
    // CELLS
    
    // PORTS
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign12[4];
    VTestHarness__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VTestHarness___024unit& operator= (const VTestHarness___024unit&);	///< Copying not allowed
    VTestHarness___024unit(const VTestHarness___024unit&);	///< Copying not allowed
  public:
    VTestHarness___024unit(const char* name="TOP");
    ~VTestHarness___024unit();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VTestHarness__Syms* symsp, bool first);
    void	__Vdpiimwrap_debug_tick_TOP____024unit(CData& debug_req_valid, CData debug_req_ready, IData& debug_req_bits_addr, IData& debug_req_bits_op, IData& debug_req_bits_data, CData debug_resp_valid, CData& debug_resp_ready, IData debug_resp_bits_resp, IData debug_resp_bits_data, IData& debug_tick__Vfuncrtn);
  private:
    void	_configure_coverage(VTestHarness__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/

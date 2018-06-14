// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"      // For This
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__82(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__82\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd 
	= (1U & (((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_160)) 
		    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_148)) 
		   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__take_pc)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_stalld)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_533)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_rs_0 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__rf_wen)
	    ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__rf_waddr))
	        ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__rf_waddr) 
		    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1322_rs1))
		    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__rf_wdata
		    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1161___05FT_1170_data)
	        : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1161___05FT_1170_data)
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1161___05FT_1170_data);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_rs_1 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__rf_wen)
	    ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__rf_waddr))
	        ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__rf_waddr) 
		    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_1322_rs2))
		    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__rf_wdata
		    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1161___05FT_1180_data)
	        : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1161___05FT_1180_data)
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1161___05FT_1180_data);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1629 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_533)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_148)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__83(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_combo__TOP__83\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1265 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___GEN_15) 
	     != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___GEN_16)) 
	    | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___GEN_15))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1305 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___GEN_15) 
	     != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___GEN_16)) 
	    | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___GEN_15))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1295 
	= (1U & ((0xffffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___GEN_15) 
			      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1201)) 
			     >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1305 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___GEN_15) 
	     != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___GEN_16)) 
	    | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___GEN_15))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1295 
	= (1U & ((0xffffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___GEN_15) 
			      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1201)) 
			     >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__85(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__85\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killm 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__killm_common) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_xcpt));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_valid_masked 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_valid) 
	   & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcacheArb__DOT___T_177)) 
		 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__killm_common) 
		    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ldst_xcpt)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_198 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___GEN_203) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_241)) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__killm_common) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2044)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killx 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__take_pc) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__replay_ex)) 
		 | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_valid))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dtim_adapter__DOT___T_168 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcacheArb__DOT___T_184) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dtim_adapter__DOT___T_174));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dtim_adapter__DOT__tl_in_a_ready 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcacheArb__DOT___T_184) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dtim_adapter__DOT__ready));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array_RW0_en 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s0_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_done));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0_RW0_en 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s0_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_351));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1342 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1233) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___GEN_15)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_530 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_529) 
		 & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT___GEN_25))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_535 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_529) 
		 & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT___GEN_25)) 
		    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__do_deq 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__maybe_full) 
	   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___T_229) 
	       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_373)) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_383 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___T_229) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT__do_enq 
	= (3U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT___T_44)) 
		 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___T_269) 
		    & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT___GEN_25)))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__do_enq 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT___T_44)) 
		 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___T_269) 
		    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT___GEN_25)) 
		       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_2__DOT__do_deq 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_2__DOT__maybe_full) 
	   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_717) 
	       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_614)) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_2__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_598 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_717) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_615));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_808 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_716) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___T_285));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___T_323 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_581) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_716));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___T_284 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_716) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN_7));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1166 
	= (0xfffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1057 
			| vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___GEN_15) 
		       & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1166 
	= (0xfffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1057 
			| vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___GEN_15) 
		       & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1166 
	= (0xfffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1057 
			| vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___GEN_15) 
		       & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1166 
	= (0xfffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1057 
			| vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_15) 
		       & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT___T_58 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__do_enq) 
	   != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__do_deq));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1120 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1051) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1065)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1332 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1051) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1121));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___GEN_15 
	= (0xffffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1051) 
		       & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1216)))
		       ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data))
		       : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1120 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1051) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1065)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1332 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1051) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1121));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___GEN_15 
	= (0xffffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1051) 
		       & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1216)))
		       ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data))
		       : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1120 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1051) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1065)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1332 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1051) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1121));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___GEN_15 
	= (0xfU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1051) 
		    & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1216)))
		    ? ((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					     >> 4U)))
		    : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1120 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1051) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1065)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1332 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1051) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1121));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___GEN_15 
	= (0xfU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1051) 
		    & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1216)))
		    ? ((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					     >> 4U)))
		    : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1120 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1051) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1065)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1332 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1051) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1121));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_15 
	= (0xfU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1051) 
		    & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1216)))
		    ? ((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					     >> 4U)))
		    : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_498 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_495)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT___T_469));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_558 
	= (0x7ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_495) 
		     - ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT___T_469) 
			& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT___T_319 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT___T_469) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1051 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT___T_469) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_262 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_261)
		  ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT___T_44))
		  : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT___T_469) 
		     & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_495))
			 ? (~ (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_502)))
			 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_579_1)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dtim_adapter__DOT___T_169 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dtim_adapter__DOT__tl_in_a_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT___T_18));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_408 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dtim_adapter__DOT__tl_in_a_ready) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT___T_18));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT___T_29 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dtim_adapter__DOT__tl_in_a_ready) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT___T_18)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_413)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT___T_21 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dtim_adapter__DOT__tl_in_a_ready) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT__full)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_4 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_383)
		      ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_240) 
			 - (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_354))
		      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_239)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT___T_58 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT__do_enq) 
	   != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT__do_deq));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT___T_58 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__do_enq) 
	   != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__do_deq));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_809 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_808) 
		 & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT___GEN_25))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_814 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_808) 
		 & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT___GEN_25)) 
		    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__do_enq 
	= (3U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_44)) 
		 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___T_323) 
		    & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT___GEN_25)))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__do_enq 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_44)) 
		 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___T_323) 
		    & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT___GEN_25)) 
		       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_578 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___T_284) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_581));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_583 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___T_284) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_582));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1310 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1201) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___GEN_15)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1310 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1201) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___GEN_15)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1310 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1201) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___GEN_15)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1310 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1201) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___GEN_15)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1310 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1201) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_15)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT___T_423 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT___T_333)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT___T_319));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT___T_448 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT___T_319) 
	   & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
	      >> 5U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1120 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1051) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1065)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1332 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1051) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1121));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___GEN_15 
	= (0xfU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1051) 
		    & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1216)))
		    ? ((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					     >> 4U)))
		    : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__do_deq 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_262) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1011 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_262) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__86(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_combo__TOP__86\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1337 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___GEN_15) 
	     != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___GEN_16)) 
	    | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___GEN_15))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1327 
	= (1U & ((0xffffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___GEN_15) 
			      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1233)) 
			     >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1161 
	= ((((0xfffffU & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___GEN_15) 
	     != (0xfffffU & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___GEN_16)) 
	    | (0U == (0xfffffU & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___GEN_15))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1151 
	= (1U & ((0xfffffU & ((0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___GEN_15 
					   | vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1057)) 
			      >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1161 
	= ((((0xfffffU & vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___GEN_15) 
	     != (0xfffffU & vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___GEN_16)) 
	    | (0U == (0xfffffU & vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___GEN_15))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1151 
	= (1U & ((0xfffffU & ((0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___GEN_15 
					   | vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1057)) 
			      >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1161 
	= ((((0xfffffU & vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___GEN_15) 
	     != (0xfffffU & vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___GEN_16)) 
	    | (0U == (0xfffffU & vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___GEN_15))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1151 
	= (1U & ((0xfffffU & ((0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___GEN_15 
					   | vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1057)) 
			      >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1161 
	= ((((0xfffffU & vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_15) 
	     != (0xfffffU & vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_16)) 
	    | (0U == (0xfffffU & vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_15))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1151 
	= (1U & ((0xfffffU & ((0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_15 
					   | vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1057)) 
			      >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_609 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_598)) 
		  | (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_595))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1305 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___GEN_15) 
	     != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___GEN_16)) 
	    | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___GEN_15))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1295 
	= (1U & ((0xffffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___GEN_15) 
			      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1201)) 
			     >> (0xfU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2767 
						 >> 0x22U))))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1305 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___GEN_15) 
	     != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___GEN_16)) 
	    | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___GEN_15))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1295 
	= (1U & ((0xffffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___GEN_15) 
			      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1201)) 
			     >> (0xfU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2767 
						 >> 0x22U))))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1305 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___GEN_15) 
	     != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___GEN_16)) 
	    | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___GEN_15))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1295 
	= (1U & ((0xfU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___GEN_15) 
			   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1201)) 
			  >> (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
					    >> 0x22U))))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1305 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___GEN_15) 
	     != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___GEN_16)) 
	    | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___GEN_15))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1295 
	= (1U & ((0xfU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___GEN_15) 
			   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1201)) 
			  >> (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
					    >> 0x22U))))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1305 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_15) 
	     != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_16)) 
	    | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_15))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1295 
	= (1U & ((0xfU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_15) 
			   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1201)) 
			  >> (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
					    >> 0x22U))))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__88(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__88\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT___T_24 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT___T_21) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__empty))) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_413));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__do_deq 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT___T_21) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_58 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__do_enq) 
	   != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__do_deq));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_58 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__do_enq) 
	   != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__do_deq));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__do_deq 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full) 
	   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_583) 
	       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_544)) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_554 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_583) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1310 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1201) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___GEN_15)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___GEN_16)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT___T_58 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__do_enq) 
	   != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__do_deq));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1080 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1011) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1025)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1292 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1011) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1081));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___GEN_15 
	= (3U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1011) 
		  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1176)))
		  ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data))
		  : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT___T_58 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__do_enq) 
	   != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__do_deq));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_9 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_554)
		      ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_408) 
			 - (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_525))
		      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_407)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1270 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1161) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___GEN_15)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___GEN_16)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__89(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_combo__TOP__89\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1305 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___GEN_15) 
	     != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___GEN_16)) 
	    | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___GEN_15))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1295 
	= (1U & ((0xfU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___GEN_15) 
			   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1201)) 
			  >> (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
					    >> 0x22U))))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1265 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___GEN_15) 
	     != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___GEN_16)) 
	    | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___GEN_15))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1255 
	= (1U & ((3U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___GEN_15) 
			 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1161)) 
			>> (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
					  >> 0x22U))))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
}

void VTestHarness::_eval(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_eval\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->__Vm_traceActivity = (VL_ULL(2) | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__13(vlSymsp);
	vlTOPp->_sequent__TOP__14(vlSymsp);
	vlTOPp->_sequent__TOP__15(vlSymsp);
	vlTOPp->_sequent__TOP__16(vlSymsp);
	vlTOPp->_sequent__TOP__17(vlSymsp);
	vlTOPp->_sequent__TOP__18(vlSymsp);
	vlTOPp->_sequent__TOP__19(vlSymsp);
	vlTOPp->_sequent__TOP__20(vlSymsp);
	vlTOPp->_sequent__TOP__21(vlSymsp);
	vlTOPp->_sequent__TOP__22(vlSymsp);
	vlTOPp->_sequent__TOP__23(vlSymsp);
    }
    if ((((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__26(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(4) | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__TestHarness__DOT___T_6) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT___T_6))) 
	 | ((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock))))) {
	vlTOPp->_sequent__TOP__27(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(8) | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__30(vlSymsp);
    vlTOPp->__Vm_traceActivity = (VL_ULL(0x10) | vlTOPp->__Vm_traceActivity);
    if ((((IData)(vlTOPp->__VinpClk__TOP__TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_rst) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_rst))) 
	 | ((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock))))) {
	vlTOPp->_sequent__TOP__31(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x20) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_54) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_54))) 
	 | ((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock))))) {
	vlTOPp->_sequent__TOP__32(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x40) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__33(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x80) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__34(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x100) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59))) 
	 | ((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock))))) {
	vlTOPp->_sequent__TOP__35(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x200) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__TestHarness__DOT___T_6) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT___T_6))) 
	 | ((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock))))) {
	vlTOPp->_sequent__TOP__36(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x400) 
				      | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__39(vlSymsp);
    if ((((IData)(vlTOPp->__VinpClk__TOP__TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_54) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_54))) 
	 | ((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock))))) {
	vlTOPp->_sequent__TOP__40(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x800) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__41(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x1000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__42(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x2000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__TestHarness__DOT___T_6) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT___T_6))) 
	 | ((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock))))) {
	vlTOPp->_sequent__TOP__43(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x4000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__45(vlSymsp);
    vlTOPp->_combo__TOP__47(vlSymsp);
    if ((((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__48(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x8000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__49(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x10000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__TestHarness__DOT___T_6) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT___T_6))) 
	 | ((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock))))) {
	vlTOPp->_sequent__TOP__50(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x20000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__52(vlSymsp);
    if ((((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__53(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x40000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__54(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x80000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__TestHarness__DOT___T_6) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT___T_6))) 
	 | ((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock))))) {
	vlTOPp->_sequent__TOP__55(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x100000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__56(vlSymsp);
    if ((((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__58(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x200000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__59(vlSymsp);
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__60(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x400000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__TestHarness__DOT___T_6) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT___T_6))) 
	 | ((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock))))) {
	vlTOPp->_sequent__TOP__61(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x800000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__63(vlSymsp);
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__64(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x1000000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__TestHarness__DOT___T_6) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT___T_6))) 
	 | ((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock))))) {
	vlTOPp->_sequent__TOP__65(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x2000000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__68(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x4000000) 
				      | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__69(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__TestHarness__DOT___T_6) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT___T_6))) 
	 | ((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock))))) {
	vlTOPp->_sequent__TOP__70(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x8000000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__71(vlSymsp);
    vlTOPp->_combo__TOP__73(vlSymsp);
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__74(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x10000000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__75(vlSymsp);
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__77(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x20000000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__78(vlSymsp);
    vlTOPp->_combo__TOP__80(vlSymsp);
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__81(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x40000000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__TestHarness__DOT___T_6) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT___T_6))) 
	 | ((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock))))) {
	vlTOPp->_sequent__TOP__82(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x80000000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__83(vlSymsp);
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__85(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x100000000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__86(vlSymsp);
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__88(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x200000000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__89(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_rst 
	= vlTOPp->__VinpClk__TOP__TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_rst;
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_54 
	= vlTOPp->__VinpClk__TOP__TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_54;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59 
	= vlTOPp->__VinpClk__TOP__TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT___T_6 
	= vlTOPp->__VinpClk__TOP__TestHarness__DOT___T_6;
    vlTOPp->__VinpClk__TOP__TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_rst 
	= vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_rst;
    vlTOPp->__VinpClk__TOP__TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_54 
	= vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_54;
    vlTOPp->__VinpClk__TOP__TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59 
	= vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59;
    vlTOPp->__VinpClk__TOP__TestHarness__DOT___T_6 
	= vlTOPp->TestHarness__DOT___T_6;
}

VL_INLINE_OPT QData VTestHarness::_change_request(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_change_request\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VTestHarness::_change_request_1(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_change_request_1\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->TestHarness__DOT___T_6 ^ vlTOPp->__Vchglast__TOP__TestHarness__DOT___T_6)
	 | (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_54 ^ vlTOPp->__Vchglast__TOP__TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_54)
	 | (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59 ^ vlTOPp->__Vchglast__TOP__TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59)
	 | (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_rst ^ vlTOPp->__Vchglast__TOP__TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_rst));
    VL_DEBUG_IF( if(__req && ((vlTOPp->TestHarness__DOT___T_6 ^ vlTOPp->__Vchglast__TOP__TestHarness__DOT___T_6))) VL_PRINTF("	CHANGE: /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:198019: TestHarness._T_6\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_54 ^ vlTOPp->__Vchglast__TOP__TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_54))) VL_PRINTF("	CHANGE: /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:131122: TestHarness.dut.debug_1.dmOuter.asource.AsyncQueueSource._T_54\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59 ^ vlTOPp->__Vchglast__TOP__TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59))) VL_PRINTF("	CHANGE: /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:156827: TestHarness.dut.debug_1.dmInner.dmiXing.AsyncQueueSink._T_59\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_rst ^ vlTOPp->__Vchglast__TOP__TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_rst))) VL_PRINTF("	CHANGE: /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:127981: TestHarness.dut.debug_1.dmInner.dmactiveSync.AsyncResetSynchronizerShiftReg_w1_d3_i0.sync_0.reg_0_rst\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__TestHarness__DOT___T_6 
	= vlTOPp->TestHarness__DOT___T_6;
    vlTOPp->__Vchglast__TOP__TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_54 
	= vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_54;
    vlTOPp->__Vchglast__TOP__TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59 
	= vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59;
    vlTOPp->__Vchglast__TOP__TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_rst 
	= vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_rst;
    return __req;
}

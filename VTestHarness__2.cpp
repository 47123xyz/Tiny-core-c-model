// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"      // For This
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__16(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__16\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107671
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107671
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at Ports.scala:135:7)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107682
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:107685: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",107685,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107693
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at Ports.scala:135:7)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107704
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:107707: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",107707,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107715
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_203))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at Ports.scala:135:7)\n    at Monitor.scala:43 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107726
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_203))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:107729: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",107729,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107737
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					       >> 0xcU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at Ports.scala:135:7)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107748
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					       >> 0xcU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:107751: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",107751,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107759
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_213))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at Ports.scala:135:7)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107770
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_213))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:107773: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",107773,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107781
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at Ports.scala:135:7)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107792
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:107795: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",107795,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107803
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ ((0U == (0xffU & (~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[2U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at Ports.scala:135:7)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107814
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ ((0U == (0xffU & (~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[2U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:107817: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",107817,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107825
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at Ports.scala:135:7)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107836
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:107839: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",107839,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107847
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at Ports.scala:135:7)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107858
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:107861: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",107861,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107869
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_203))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at Ports.scala:135:7)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107880
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_203))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:107883: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",107883,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107891
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					       >> 0xcU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at Ports.scala:135:7)\n    at Monitor.scala:54 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107902
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					       >> 0xcU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:107905: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",107905,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107913
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_213))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at Ports.scala:135:7)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107924
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_213))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:107927: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",107927,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107935
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at Ports.scala:135:7)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107946
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:107949: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",107949,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107957
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at Ports.scala:135:7)\n    at Monitor.scala:57 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107968
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:107971: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",107971,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107979
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ ((0U == (0xffU & (~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[2U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at Ports.scala:135:7)\n    at Monitor.scala:58 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107990
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ ((0U == (0xffU & (~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[2U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:107993: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",107993,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108001
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_406))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at Ports.scala:135:7)\n    at Monitor.scala:62 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108012
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_406))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108015: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108015,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108023
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_203))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at Ports.scala:135:7)\n    at Monitor.scala:63 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108034
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_203))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108037: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108037,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108045
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_213))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at Ports.scala:135:7)\n    at Monitor.scala:64 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108056
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_213))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108059: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108059,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108067
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at Ports.scala:135:7)\n    at Monitor.scala:65 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108078
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108081: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108081,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108089
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_425))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at Ports.scala:135:7)\n    at Monitor.scala:66 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108100
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_425))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108103: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108103,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108111
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_510))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at Ports.scala:135:7)\n    at Monitor.scala:70 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108122
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_510))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108125: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108125,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108133
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_203))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at Ports.scala:135:7)\n    at Monitor.scala:71 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108144
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_203))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108147: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108147,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108155
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_213))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at Ports.scala:135:7)\n    at Monitor.scala:72 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108166
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_213))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108169: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108169,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108177
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at Ports.scala:135:7)\n    at Monitor.scala:73 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108188
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108191: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108191,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108199
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_425))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at Ports.scala:135:7)\n    at Monitor.scala:74 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108210
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_425))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108213: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108213,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108221
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_510))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at Ports.scala:135:7)\n    at Monitor.scala:78 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108232
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_510))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108235: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108235,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108243
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_203))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at Ports.scala:135:7)\n    at Monitor.scala:79 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108254
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_203))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108257: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108257,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108265
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_213))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at Ports.scala:135:7)\n    at Monitor.scala:80 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108276
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_213))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108279: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108279,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108287
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at Ports.scala:135:7)\n    at Monitor.scala:81 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108298
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108301: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108301,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108309
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_636))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at Ports.scala:135:7)\n    at Monitor.scala:82 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108320
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_636))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108323: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108323,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108331
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_709))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at Ports.scala:135:7)\n    at Monitor.scala:86 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108342
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_709))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108345: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108345,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108353
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_203))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at Ports.scala:135:7)\n    at Monitor.scala:87 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108364
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_203))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108367: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108367,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108375
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_213))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at Ports.scala:135:7)\n    at Monitor.scala:88 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108386
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_213))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108389: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108389,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108397
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at Ports.scala:135:7)\n    at Monitor.scala:89 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108408
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108411: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108411,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108419
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_425))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at Ports.scala:135:7)\n    at Monitor.scala:90 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108430
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_425))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108433: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108433,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108441
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_709))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at Ports.scala:135:7)\n    at Monitor.scala:94 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108452
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_709))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108455: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108455,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108463
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_203))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at Ports.scala:135:7)\n    at Monitor.scala:95 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108474
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_203))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108477: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108477,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108485
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_213))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at Ports.scala:135:7)\n    at Monitor.scala:96 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108496
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_213))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108499: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108499,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108507
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at Ports.scala:135:7)\n    at Monitor.scala:97 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108518
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					     >> 0x10U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108521: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108521,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108529
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_425))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at Ports.scala:135:7)\n    at Monitor.scala:98 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108540
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_425))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108543: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108543,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108551
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_349) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at Ports.scala:135:7)\n    at Monitor.scala:102 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108562
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_349) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108565: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108565,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108573
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_203))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at Ports.scala:135:7)\n    at Monitor.scala:103 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108584
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_203))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108587: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108587,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108595
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_213))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at Ports.scala:135:7)\n    at Monitor.scala:104 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108606
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_213))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108609: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108609,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108617
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_425))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at Ports.scala:135:7)\n    at Monitor.scala:105 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108628
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
					  >> 0x13U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_425))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108631: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108631,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108639
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			 & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at Ports.scala:135:7)\n    at Monitor.scala:247 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108650
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			 & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108653: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108653,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108661
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_954))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at Ports.scala:135:7)\n    at Monitor.scala:253 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108672
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_954))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108675: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108675,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108683
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid sink ID (connected at Ports.scala:135:7)\n    at Monitor.scala:254 assert (sink_ok, \"'D' channel ReleaseAck carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108694
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108697: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108697,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108705
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at Ports.scala:135:7)\n    at Monitor.scala:255 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108716
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108719: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108719,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108727
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at Ports.scala:135:7)\n    at Monitor.scala:256 assert (bundle.param === UInt(0), \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108738
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108741: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108741,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108749
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_954))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at Ports.scala:135:7)\n    at Monitor.scala:260 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108760
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_954))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108763: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108763,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108771
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at Ports.scala:135:7)\n    at Monitor.scala:261 assert (sink_ok, \"'D' channel Grant carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108782
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108785: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108785,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108793
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at Ports.scala:135:7)\n    at Monitor.scala:262 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108804
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108807: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108807,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108815
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at Ports.scala:135:7)\n    at Monitor.scala:263 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108826
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108829: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108829,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108837
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_954))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at Ports.scala:135:7)\n    at Monitor.scala:267 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108848
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_954))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108851: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108851,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108859
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at Ports.scala:135:7)\n    at Monitor.scala:268 assert (sink_ok, \"'D' channel GrantData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108870
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108873: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108873,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108881
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at Ports.scala:135:7)\n    at Monitor.scala:269 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108892
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108895: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108895,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108903
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at Ports.scala:135:7)\n    at Monitor.scala:270 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108914
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108917: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108917,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108925
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_954))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at Ports.scala:135:7)\n    at Monitor.scala:274 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108936
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_954))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108939: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108939,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108947
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid sink ID (connected at Ports.scala:135:7)\n    at Monitor.scala:275 assert (sink_ok, \"'D' channel AccessAck carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108958
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108961: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108961,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108969
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at Ports.scala:135:7)\n    at Monitor.scala:277 assert (bundle.param === UInt(0), \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108980
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:108983: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",108983,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:108991
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_954))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at Ports.scala:135:7)\n    at Monitor.scala:281 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109002
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_954))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:109005: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",109005,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109013
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid sink ID (connected at Ports.scala:135:7)\n    at Monitor.scala:282 assert (sink_ok, \"'D' channel AccessAckData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109024
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:109027: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",109027,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109035
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at Ports.scala:135:7)\n    at Monitor.scala:284 assert (bundle.param === UInt(0), \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109046
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:109049: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",109049,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109057
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_954))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at Ports.scala:135:7)\n    at Monitor.scala:288 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109068
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_954))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:109071: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",109071,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109079
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid sink ID (connected at Ports.scala:135:7)\n    at Monitor.scala:289 assert (sink_ok, \"'D' channel HintAck carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109090
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:109093: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",109093,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109101
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at Ports.scala:135:7)\n    at Monitor.scala:291 assert (bundle.param === UInt(0), \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109112
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:109115: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",109115,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109189
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1097))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1128))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at Ports.scala:135:7)\n    at Monitor.scala:322 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109200
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1097))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1128))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:109203: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",109203,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109211
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1097))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1133))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at Ports.scala:135:7)\n    at Monitor.scala:323 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109222
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1097))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1133))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:109225: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",109225,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109233
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1097))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1138))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at Ports.scala:135:7)\n    at Monitor.scala:324 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109244
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1097))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1138))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:109247: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",109247,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109255
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1097))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1143))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at Ports.scala:135:7)\n    at Monitor.scala:325 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109266
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1097))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1143))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:109269: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",109269,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109277
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1097))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1148))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at Ports.scala:135:7)\n    at Monitor.scala:326 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109288
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_968) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1097))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1148))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:109291: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",109291,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109299
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1165))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1199))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at Ports.scala:135:7)\n    at Monitor.scala:394 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109310
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1165))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1199))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:109313: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",109313,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109321
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1165))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1204))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at Ports.scala:135:7)\n    at Monitor.scala:395 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109332
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1165))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1204))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:109335: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",109335,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109343
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1165))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1209))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at Ports.scala:135:7)\n    at Monitor.scala:396 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109354
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1165))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1209))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:109357: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",109357,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109365
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1165))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1214))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at Ports.scala:135:7)\n    at Monitor.scala:397 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109376
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1165))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1214))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:109379: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",109379,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109387
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1165))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1219))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at Ports.scala:135:7)\n    at Monitor.scala:398 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109398
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1165))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1219))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:109401: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",109401,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109409
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1165))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1226))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel burst lowered error (connected at Ports.scala:135:7)\n    at Monitor.scala:399 assert (d.bits.error || !error,   \"'D' channel burst lowered error\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109420
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1165))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1226))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:109423: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",109423,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109431
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1083) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1248))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1306))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at Ports.scala:135:7)\n    at Monitor.scala:428 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109442
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1083) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1248))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1306))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:109445: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",109445,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109453
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1153) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1276))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1327))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Ports.scala:135:7)\n    at Monitor.scala:435 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109464
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1153) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1276))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1327))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:109467: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",109467,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109475
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1337))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 7 (connected at Ports.scala:135:7)\n    at Monitor.scala:439 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109486
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1337))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:109489: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",109489,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109497
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1356))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at Ports.scala:135:7)\n    at Monitor.scala:447 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109508
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1356))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:109511: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",109511,"");
	}
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__ram_mask__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_resp__v0 = 0U;
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183703
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183703
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1709))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: these conditions must be mutually exclusive\n    at CSR.scala:518 assert(PopCount(insn_ret :: insn_call :: insn_break :: io.exception :: Nil) <= 1, \"these conditions must be mutually exclusive\")\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183714
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1709))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:183717: Assertion failed in %NTestHarness.dut.tile.core.csr\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",183717,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183725
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1730))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at CSR.scala:522 assert(!reg_wfi || io.retire === UInt(0))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183736
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1730))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:183739: Assertion failed in %NTestHarness.dut.tile.core.csr\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",183739,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183769
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1754))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at CSR.scala:527 assert(!reg_singleStepped || io.retire === UInt(0))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183780
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1754))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:183783: Assertion failed in %NTestHarness.dut.tile.core.csr\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",183783,"");
	}
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_last__v0 = 0U;
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61313
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61313
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61324
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61327: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61327,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61335
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61346
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61349: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61349,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61357
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:43 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61368
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61371: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61371,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61379
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61390
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61393: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61393,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61401
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61412
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61415: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61415,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61423
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61434
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61437: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61437,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61445
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61456
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61459: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61459,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61467
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61478
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61481: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61481,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61489
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61500
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61503: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61503,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61511
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61522
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61525: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61525,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61533
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:54 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61544
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61547: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61547,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61555
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61566
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61569: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61569,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61577
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61588
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61591: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61591,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61599
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:57 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61610
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61613: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61613,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61621
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:58 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61632
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61635: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61635,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61643
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_340))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:62 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61654
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_340))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61657: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61657,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61665
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:63 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61676
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61679: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61679,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61687
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:64 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61698
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61701: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61701,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61709
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:65 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61720
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61723: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61723,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61731
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:66 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61742
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61745: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61745,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61753
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_340))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:70 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61764
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_340))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61767: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61767,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61775
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:71 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61786
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61789: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61789,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61797
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:72 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61808
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61811: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61811,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61819
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:73 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61830
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61833: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61833,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61841
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:74 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61852
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61855: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61855,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61863
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_340))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:78 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61874
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_340))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61877: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61877,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61885
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:79 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61896
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61899: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61899,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61907
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:80 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61918
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61921: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61921,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61929
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:81 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61940
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61943: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61943,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61951
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_502))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:82 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61962
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_502))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61965: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61965,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61973
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_553))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:86 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61984
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_553))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:61987: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",61987,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61995
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:87 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62006
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62009: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62009,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62017
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:88 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62028
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62031: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62031,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62039
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:89 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62050
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62053: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62053,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62061
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:90 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62072
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62075: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62075,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62083
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_553))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:94 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62094
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_553))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62097: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62097,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62105
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:95 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62116
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62119: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62119,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62127
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:96 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62138
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62141: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62141,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62149
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:97 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62160
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62163: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62163,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62171
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:98 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62182
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62185: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62185,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62193
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:102 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62204
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62207: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62207,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62215
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:103 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62226
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62229: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62229,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62237
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:104 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62248
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62251: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62251,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62259
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:105 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62270
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62273: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62273,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62281
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			 & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:247 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62292
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			 & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62295: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62295,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62303
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:253 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62314
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62317: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62317,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62347
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:255 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62358
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62361: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62361,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62369
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:256 assert (bundle.param === UInt(0), \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62380
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62383: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62383,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62391
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:260 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62402
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62405: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62405,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62435
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:262 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62446
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62449: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62449,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62457
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:263 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62468
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62471: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62471,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62479
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:267 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62490
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62493: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62493,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62523
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:269 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62534
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62537: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62537,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62545
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:270 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62556
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62559: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62559,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62567
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:274 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62578
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62581: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62581,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62611
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:277 assert (bundle.param === UInt(0), \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62622
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62625: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62625,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62633
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:281 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62644
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62647: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62647,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62677
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:284 assert (bundle.param === UInt(0), \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62688
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62691: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62691,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62699
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:288 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62710
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62713: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62713,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62743
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:291 assert (bundle.param === UInt(0), \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62754
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62757: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62757,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62831
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_952))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:322 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62842
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_952))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62845: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62845,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62853
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_957))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:323 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62864
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_957))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62867: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62867,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62875
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_962))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:324 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62886
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_962))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62889: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62889,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62897
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_967))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:325 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62908
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_967))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62911: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62911,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62919
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_972))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:326 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62930
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_972))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62933: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62933,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62941
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1023))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:394 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62952
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1023))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62955: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62955,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62963
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1028))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:395 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62974
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1028))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62977: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62977,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62985
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1033))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:396 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:62996
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1033))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:62999: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",62999,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:63007
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1038))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:397 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:63018
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1038))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:63021: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",63021,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:63029
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1043))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:398 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:63040
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1043))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:63043: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",63043,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:63051
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1050))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel burst lowered error (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:399 assert (d.bits.error || !error,   \"'D' channel burst lowered error\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:63062
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1053) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1050))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:63065: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",63065,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:63073
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_907) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1072))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1130))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:428 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:63084
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_907) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1072))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1130))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:63087: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",63087,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:63095
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_977) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1100))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1151))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:435 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:63106
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_977) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1100))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1151))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:63109: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",63109,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:63117
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1161))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:439 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:63128
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1161))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:63131: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",63131,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:63139
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1180))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at PeripheryBus.scala:98:9)\n    at Monitor.scala:447 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:63150
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1180))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:63153: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",63153,"");
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:64554
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:64554
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_876))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:66 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:64565
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_876))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:64568: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",64568,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:64576
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_885))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:68 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:64587
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_885))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:64590: Assertion failed in %NTestHarness.dut.pbus.coupler_from_sbus.atomics\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",64590,"");
	}
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_resp__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_resp__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_resp__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_resp__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_resp__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_user__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_user__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_user__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_user__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_user__v0 = 0U;
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:180040
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:180040
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_131))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at IBuf.scala:79 assert(!io.imem.valid || !io.imem.bits.btb.taken || io.imem.bits.btb.bridx >= pcWordBits)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:180051
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_131))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:180054: Assertion failed in %NTestHarness.dut.tile.core.ibuf\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",180054,"");
	}
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_id__v0 = 0U;
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7244
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7244
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2081))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:66 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7255
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2081))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:7258: Assertion failed in %NTestHarness.dut.sbus.system_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",7258,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7266
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2090))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:68 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7277
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2090))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:7280: Assertion failed in %NTestHarness.dut.sbus.system_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",7280,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7310
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2262))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:66 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7321
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2262))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:7324: Assertion failed in %NTestHarness.dut.sbus.system_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",7324,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7332
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2271))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:68 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7343
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2271))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:7346: Assertion failed in %NTestHarness.dut.sbus.system_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",7346,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7376
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2443))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:66 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7387
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2443))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:7390: Assertion failed in %NTestHarness.dut.sbus.system_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",7390,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7398
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2452))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:68 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7409
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2452))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:7412: Assertion failed in %NTestHarness.dut.sbus.system_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",7412,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7442
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2642))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:66 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7453
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2642))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:7456: Assertion failed in %NTestHarness.dut.sbus.system_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",7456,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7464
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2653))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:68 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7475
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2653))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:7478: Assertion failed in %NTestHarness.dut.sbus.system_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",7478,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7508
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2869))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:66 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7519
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2869))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:7522: Assertion failed in %NTestHarness.dut.sbus.system_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",7522,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7530
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2880))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:68 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7541
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2880))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:7544: Assertion failed in %NTestHarness.dut.sbus.system_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",7544,"");
	}
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_last__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_last__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_last__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_last__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_last__v0 = 0U;
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133336
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133336
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at Debug.scala:1042:19)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133347
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133350: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133350,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133358
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at Debug.scala:1042:19)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133369
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133372: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133372,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133380
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x2dU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at Debug.scala:1042:19)\n    at Monitor.scala:43 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133391
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x2dU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133394: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133394,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133402
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((2U <= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x2eU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at Debug.scala:1042:19)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133413
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((2U <= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x2eU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133416: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133416,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133424
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_166))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at Debug.scala:1042:19)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133435
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_166))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133438: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133438,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133446
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((2U >= (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x30U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at Debug.scala:1042:19)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133457
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((2U >= (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x30U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133460: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133460,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133468
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((0U == (0xfU & (~ (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							  >> 0x20U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at Debug.scala:1042:19)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133479
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((0U == (0xfU & (~ (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							  >> 0x20U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133482: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133482,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133490
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (7U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at Debug.scala:1042:19)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133501
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (7U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133504: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133504,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133512
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (7U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at Debug.scala:1042:19)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133523
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (7U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133526: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133526,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133534
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (7U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x2dU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at Debug.scala:1042:19)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133545
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (7U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x2dU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133548: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133548,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133556
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (7U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((2U <= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x2eU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at Debug.scala:1042:19)\n    at Monitor.scala:54 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133567
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (7U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((2U <= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x2eU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133570: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133570,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133578
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (7U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_166))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at Debug.scala:1042:19)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133589
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (7U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_166))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133592: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133592,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133600
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (7U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((2U >= (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x30U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at Debug.scala:1042:19)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133611
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (7U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((2U >= (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x30U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133614: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133614,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133622
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (7U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((0U != (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x30U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at Debug.scala:1042:19)\n    at Monitor.scala:57 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133633
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (7U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((0U != (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x30U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133636: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133636,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133644
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (7U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((0U == (0xfU & (~ (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							  >> 0x20U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at Debug.scala:1042:19)\n    at Monitor.scala:58 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133655
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (7U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((0U == (0xfU & (~ (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							  >> 0x20U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133658: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133658,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133666
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_369))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at Debug.scala:1042:19)\n    at Monitor.scala:62 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133677
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_369))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133680: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133680,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133688
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x2dU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at Debug.scala:1042:19)\n    at Monitor.scala:63 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133699
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x2dU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133702: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133702,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133710
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_166))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at Debug.scala:1042:19)\n    at Monitor.scala:64 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133721
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_166))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133724: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133724,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133732
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((0U == (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x30U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at Debug.scala:1042:19)\n    at Monitor.scala:65 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133743
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((0U == (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x30U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133746: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133746,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133754
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_388))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at Debug.scala:1042:19)\n    at Monitor.scala:66 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133765
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_388))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133768: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133768,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133776
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_369))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at Debug.scala:1042:19)\n    at Monitor.scala:70 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133787
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_369))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133790: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133790,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133798
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x2dU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at Debug.scala:1042:19)\n    at Monitor.scala:71 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133809
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x2dU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133812: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133812,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133820
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_166))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at Debug.scala:1042:19)\n    at Monitor.scala:72 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133831
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_166))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133834: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133834,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133842
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((0U == (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x30U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at Debug.scala:1042:19)\n    at Monitor.scala:73 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133853
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((0U == (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x30U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133856: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133856,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133864
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_388))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at Debug.scala:1042:19)\n    at Monitor.scala:74 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133875
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_388))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133878: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133878,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133886
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_369))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at Debug.scala:1042:19)\n    at Monitor.scala:78 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133897
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_369))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133900: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133900,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133908
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x2dU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at Debug.scala:1042:19)\n    at Monitor.scala:79 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133919
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x2dU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133922: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133922,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133930
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_166))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at Debug.scala:1042:19)\n    at Monitor.scala:80 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133941
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_166))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133944: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133944,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133952
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((0U == (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x30U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at Debug.scala:1042:19)\n    at Monitor.scala:81 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133963
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((0U == (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x30U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133966: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133966,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133974
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_585))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at Debug.scala:1042:19)\n    at Monitor.scala:82 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133985
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_585))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:133988: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",133988,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133996
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at Debug.scala:1042:19)\n    at Monitor.scala:86 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134007
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134010: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134010,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134018
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x2dU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at Debug.scala:1042:19)\n    at Monitor.scala:87 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134029
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x2dU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134032: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134032,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134040
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_166))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at Debug.scala:1042:19)\n    at Monitor.scala:88 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134051
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_166))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134054: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134054,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134062
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((4U >= (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x30U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at Debug.scala:1042:19)\n    at Monitor.scala:89 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134073
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((4U >= (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x30U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134076: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134076,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134084
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_388))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at Debug.scala:1042:19)\n    at Monitor.scala:90 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134095
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_388))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134098: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134098,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134106
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (3U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at Debug.scala:1042:19)\n    at Monitor.scala:94 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134117
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (3U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134120: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134120,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134128
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (3U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x2dU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at Debug.scala:1042:19)\n    at Monitor.scala:95 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134139
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (3U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x2dU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134142: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134142,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134150
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (3U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_166))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at Debug.scala:1042:19)\n    at Monitor.scala:96 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134161
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (3U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_166))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134164: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134164,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134172
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (3U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((3U >= (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x30U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at Debug.scala:1042:19)\n    at Monitor.scala:97 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134183
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (3U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((3U >= (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x30U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134186: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134186,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134194
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (3U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_388))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at Debug.scala:1042:19)\n    at Monitor.scala:98 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134205
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (3U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_388))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134208: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134208,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134216
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at Debug.scala:1042:19)\n    at Monitor.scala:102 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134227
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134230: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134230,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134238
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x2dU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at Debug.scala:1042:19)\n    at Monitor.scala:103 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134249
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x2dU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134252: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134252,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134260
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_166))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at Debug.scala:1042:19)\n    at Monitor.scala:104 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134271
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_166))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134274: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134274,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134282
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_388))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at Debug.scala:1042:19)\n    at Monitor.scala:105 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134293
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_388))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134296: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134296,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134304
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			 & (~ ((6U >= (4U == (7U & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							    >> 0x33U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at Debug.scala:1042:19)\n    at Monitor.scala:247 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134315
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			 & (~ ((6U >= (4U == (7U & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							    >> 0x33U))))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134318: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134318,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134326
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (6U == (4U == (7U & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							 >> 0x33U)))))) 
			 & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_2982) 
				   >> 2U)) | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at Debug.scala:1042:19)\n    at Monitor.scala:253 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134337
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (6U == (4U == (7U & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							 >> 0x33U)))))) 
			 & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_2982) 
				   >> 2U)) | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134340: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134340,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134370
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (6U == (4U == (7U & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							 >> 0x33U)))))) 
			 & (~ ((2U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_2982))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at Debug.scala:1042:19)\n    at Monitor.scala:255 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134381
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (6U == (4U == (7U & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							 >> 0x33U)))))) 
			 & (~ ((2U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_2982))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134384: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134384,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134414
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (4U == (4U == (7U & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							 >> 0x33U)))))) 
			 & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_2982) 
				   >> 2U)) | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at Debug.scala:1042:19)\n    at Monitor.scala:260 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134425
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (4U == (4U == (7U & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							 >> 0x33U)))))) 
			 & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_2982) 
				   >> 2U)) | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134428: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134428,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134458
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (4U == (4U == (7U & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							 >> 0x33U)))))) 
			 & (~ ((2U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_2982))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at Debug.scala:1042:19)\n    at Monitor.scala:262 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134469
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (4U == (4U == (7U & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							 >> 0x33U)))))) 
			 & (~ ((2U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_2982))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134472: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134472,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134502
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (5U == (4U == (7U & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							 >> 0x33U)))))) 
			 & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_2982) 
				   >> 2U)) | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at Debug.scala:1042:19)\n    at Monitor.scala:267 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134513
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (5U == (4U == (7U & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							 >> 0x33U)))))) 
			 & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_2982) 
				   >> 2U)) | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134516: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134516,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134546
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (5U == (4U == (7U & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							 >> 0x33U)))))) 
			 & (~ ((2U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_2982))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at Debug.scala:1042:19)\n    at Monitor.scala:269 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134557
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (5U == (4U == (7U & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							 >> 0x33U)))))) 
			 & (~ ((2U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_2982))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134560: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134560,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134590
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (4U != (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_2982) 
				   >> 2U)) | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at Debug.scala:1042:19)\n    at Monitor.scala:274 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134601
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (4U != (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_2982) 
				   >> 2U)) | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134604: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134604,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134656
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_2982) 
				   >> 2U)) | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at Debug.scala:1042:19)\n    at Monitor.scala:281 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134667
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x33U))))) 
			 & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_2982) 
				   >> 2U)) | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134670: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134670,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134722
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (2U == (4U == (7U & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							 >> 0x33U)))))) 
			 & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_2982) 
				   >> 2U)) | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at Debug.scala:1042:19)\n    at Monitor.scala:288 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134733
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (2U == (4U == (7U & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							 >> 0x33U)))))) 
			 & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_2982) 
				   >> 2U)) | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134736: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134736,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134854
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1025)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1056))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at Debug.scala:1042:19)\n    at Monitor.scala:322 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134865
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1025)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1056))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134868: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134868,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134876
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1025)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1061))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at Debug.scala:1042:19)\n    at Monitor.scala:323 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134887
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1025)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1061))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134890: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134890,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134898
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1025)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1066))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at Debug.scala:1042:19)\n    at Monitor.scala:324 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134909
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1025)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1066))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134912: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134912,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134920
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1025)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1071))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at Debug.scala:1042:19)\n    at Monitor.scala:325 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134931
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1025)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1071))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134934: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134934,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134942
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1025)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1076))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at Debug.scala:1042:19)\n    at Monitor.scala:326 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134953
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1025)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1076))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134956: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134956,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134964
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1093)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1127))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at Debug.scala:1042:19)\n    at Monitor.scala:394 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134975
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1093)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1127))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:134978: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",134978,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134986
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1093)) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1112)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at Debug.scala:1042:19)\n    at Monitor.scala:395 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:134997
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1093)) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1112)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:135000: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",135000,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:135008
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1093)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1137))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at Debug.scala:1042:19)\n    at Monitor.scala:396 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:135019
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1093)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1137))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:135022: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",135022,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:135030
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1093)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1142))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at Debug.scala:1042:19)\n    at Monitor.scala:397 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:135041
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1093)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1142))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:135044: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",135044,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:135052
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1093)) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1118)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at Debug.scala:1042:19)\n    at Monitor.scala:398 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:135063
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1093)) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1118)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:135066: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",135066,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:135074
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1093)) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1121)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel burst lowered error (connected at Debug.scala:1042:19)\n    at Monitor.scala:399 assert (d.bits.error || !error,   \"'D' channel burst lowered error\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:135085
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1093)) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1121)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:135088: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",135088,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:135096
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1011) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1176))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1234))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at Debug.scala:1042:19)\n    at Monitor.scala:428 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:135107
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1011) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1176))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1234))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:135110: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",135110,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:135118
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1081) 
			   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1204))) 
			  & (6U != (4U == (7U & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							 >> 0x33U)))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1255))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Debug.scala:1042:19)\n    at Monitor.scala:435 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:135129
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1081) 
			   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1204))) 
			  & (6U != (4U == (7U & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							 >> 0x33U)))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1255))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:135132: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",135132,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:135140
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1274))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at Debug.scala:1042:19)\n    at Monitor.scala:447 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:135151
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1274))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:135154: Assertion failed in %NTestHarness.dut.debug_1.dmInner.dmInner.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",135154,"");
	}
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id__v0 = 0U;
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45096
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45096
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45107
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45110: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45110,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45118
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45129
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45132: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45132,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45140
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:43 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45151
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45154: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45154,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45162
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45173
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45176: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45176,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45184
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45195
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45198: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45198,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45206
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45217
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45220: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45220,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45228
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45239
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45242: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45242,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45250
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45261
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45264: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45264,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45272
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45283
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45286: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45286,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45294
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45305
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45308: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45308,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45316
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:54 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45327
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45330: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45330,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45338
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45349
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45352: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45352,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45360
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45371
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45374: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45374,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45382
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:57 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45393
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45396: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45396,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45404
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:58 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45415
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45418: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45418,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45426
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_259))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:62 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45437
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_259))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45440: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45440,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45448
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:63 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45459
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45462: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45462,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45470
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:64 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45481
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45484: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45484,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45492
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:65 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45503
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45506: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45506,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45514
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:66 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45525
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45528: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45528,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45536
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_302))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:70 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45547
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_302))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45550: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45550,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45558
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:71 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45569
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45572: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45572,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45580
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:72 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45591
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45594: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45594,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45602
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:73 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45613
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45616: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45616,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45624
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:74 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45635
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45638: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45638,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45646
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_302))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:78 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45657
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_302))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45660: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45660,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45668
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:79 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45679
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45682: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45682,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45690
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:80 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45701
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45704: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45704,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45712
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:81 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45723
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45726: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45726,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45734
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_367))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:82 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45745
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_367))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45748: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45748,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45756
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:86 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45767
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45770: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45770,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45778
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:87 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45789
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45792: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45792,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45800
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:88 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45811
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45814: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45814,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45822
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:89 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45833
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45836: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45836,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45844
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:90 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45855
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45858: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45858,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45866
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:94 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45877
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45880: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45880,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45888
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:95 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45899
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45902: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45902,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45910
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:96 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45921
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45924: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45924,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45932
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:97 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45943
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45946: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45946,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45954
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:98 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45965
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45968: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45968,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45976
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:102 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45987
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:45990: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",45990,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45998
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:103 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46009
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46012: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46012,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46020
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:104 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46031
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46034: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46034,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46042
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:105 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46053
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46056: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46056,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46064
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			       & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
				     | (IData)(vlTOPp->TestHarness__DOT___T_6))))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:247 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46075
done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			       & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
				     | (IData)(vlTOPp->TestHarness__DOT___T_6))))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46078: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46078,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46086
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:253 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46097
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46100: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46100,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46130
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:255 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46141
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46144: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46144,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46152
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:256 assert (bundle.param === UInt(0), \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46163
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46166: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46166,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46174
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:260 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46185
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46188: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46188,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46218
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:262 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46229
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46232: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46232,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46240
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:263 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46251
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46254: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46254,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46262
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:267 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46273
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46276: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46276,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46306
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:269 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46317
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46320: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46320,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46328
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:270 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46339
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46342: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46342,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46350
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:274 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46361
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46364: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46364,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46394
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:277 assert (bundle.param === UInt(0), \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46405
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46408: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46408,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46416
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:281 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46427
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46430: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46430,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46460
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:284 assert (bundle.param === UInt(0), \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46471
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46474: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46474,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46482
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:288 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46493
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46496: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46496,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46526
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:291 assert (bundle.param === UInt(0), \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46537
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46540: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46540,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46614
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_728))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:322 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46625
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_728))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46628: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46628,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46636
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_733))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:323 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46647
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_733))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46650: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46650,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46658
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_738))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:324 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46669
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_738))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46672: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46672,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46680
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_743))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:325 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46691
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_743))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46694: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46694,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46702
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_748))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:326 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46713
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_1_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_748))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46716: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46716,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46724
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_799))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:394 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46735
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_799))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46738: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46738,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46746
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_804))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:395 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46757
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_804))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46760: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46760,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46768
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_809))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:396 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46779
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_809))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46782: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46782,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46790
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_814))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:397 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46801
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_814))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46804: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46804,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46812
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_819))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:398 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46823
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_819))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46826: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46826,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46834
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_826))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel burst lowered error (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:399 assert (d.bits.error || !error,   \"'D' channel burst lowered error\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46845
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_826))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46848: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46848,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46856
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_683) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_848))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_906))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:428 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46867
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_683) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_848))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_906))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46870: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46870,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46878
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_753) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_876))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_927))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:435 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46889
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_753) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_876))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_927))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46892: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46892,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46900
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_937))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 5 (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:439 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46911
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_937))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46914: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46914,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46922
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_956))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:447 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:46933
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_956))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:46936: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",46936,"");
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:49826
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:49826
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:49837
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:49840: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",49840,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:49848
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:49859
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:49862: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",49862,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:49870
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:43 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:49881
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:49884: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",49884,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:49892
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:49903
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:49906: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",49906,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:49914
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:49925
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:49928: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",49928,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:49936
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:49947
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:49950: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",49950,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:49958
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:49969
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:49972: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",49972,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:49980
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:49991
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:49994: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",49994,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50002
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50013
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50016: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50016,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50024
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50035
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50038: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50038,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50046
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:54 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50057
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					       >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50060: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50060,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50068
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50079
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50082: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50082,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50090
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50101
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50104: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50104,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50112
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:57 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50123
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50126: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50126,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50134
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:58 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50145
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50148: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50148,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50156
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_259))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:62 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50167
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_259))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50170: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50170,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50178
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:63 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50189
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50192: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50192,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50200
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:64 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50211
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50214: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50214,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50222
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:65 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50233
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50236: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50236,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50244
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:66 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50255
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50258: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50258,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50266
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_259))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:70 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50277
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_259))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50280: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50280,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50288
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:71 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50299
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50302: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50302,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50310
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:72 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50321
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50324: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50324,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50332
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:73 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50343
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50346: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50346,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50354
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:74 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50365
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50368: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50368,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50376
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_259))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:78 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50387
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_259))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50390: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50390,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50398
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:79 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50409
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50412: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50412,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50420
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:80 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50431
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50434: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50434,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50442
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:81 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50453
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50456: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50456,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50464
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_367))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:82 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50475
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_367))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50478: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50478,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50486
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_391))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:86 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50497
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_391))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50500: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50500,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50508
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:87 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50519
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50522: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50522,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50530
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:88 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50541
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50544: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50544,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50552
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:89 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50563
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50566: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50566,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50574
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:90 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50585
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50588: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50588,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50596
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_391))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:94 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50607
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_391))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50610: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50610,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50618
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:95 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50629
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50632: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50632,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50640
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:96 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50651
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50654: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50654,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50662
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:97 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50673
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50676: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50676,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50684
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:98 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50695
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50698: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50698,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50706
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_259))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:102 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50717
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_259))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50720: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50720,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50728
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:103 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50739
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50742: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50742,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50750
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:104 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50761
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50764: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50764,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50772
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:105 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50783
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50786: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50786,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50794
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			       & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
				     | (IData)(vlTOPp->TestHarness__DOT___T_6))))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:247 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50805
done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			       & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
				     | (IData)(vlTOPp->TestHarness__DOT___T_6))))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50808: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50808,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50816
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_566))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:253 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50827
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_566))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50830: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50830,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50838
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid sink ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:254 assert (sink_ok, \"'D' channel ReleaseAck carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50849
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50852: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50852,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50860
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:255 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50871
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50874: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50874,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50882
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:256 assert (bundle.param === UInt(0), \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50893
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50896: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50896,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50904
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_566))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:260 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50915
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_566))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50918: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50918,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50926
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:261 assert (sink_ok, \"'D' channel Grant carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50937
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50940: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50940,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50948
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:262 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50959
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50962: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50962,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50970
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:263 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50981
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:50984: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",50984,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:50992
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_566))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:267 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51003
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_566))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:51006: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",51006,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51014
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:268 assert (sink_ok, \"'D' channel GrantData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51025
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:51028: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",51028,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51036
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:269 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51047
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:51050: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",51050,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51058
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:270 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51069
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:51072: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",51072,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51080
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_566))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:274 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51091
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_566))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:51094: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",51094,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51102
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid sink ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:275 assert (sink_ok, \"'D' channel AccessAck carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51113
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:51116: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",51116,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51124
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:277 assert (bundle.param === UInt(0), \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51135
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:51138: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",51138,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51146
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_566))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:281 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51157
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_566))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:51160: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",51160,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51168
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid sink ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:282 assert (sink_ok, \"'D' channel AccessAckData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51179
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:51182: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",51182,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51190
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:284 assert (bundle.param === UInt(0), \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51201
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:51204: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",51204,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51212
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_566))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:288 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51223
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_566))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:51226: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",51226,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51234
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid sink ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:289 assert (sink_ok, \"'D' channel HintAck carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51245
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:51248: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",51248,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51256
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:291 assert (bundle.param === UInt(0), \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51267
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:51270: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",51270,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51344
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_709))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_740))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:322 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51355
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_709))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_740))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:51358: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",51358,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51366
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_709))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_745))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:323 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51377
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_709))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_745))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:51380: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",51380,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51388
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_709))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_750))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:324 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51399
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_709))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_750))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:51402: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",51402,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51410
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_709))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_755))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:325 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51421
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_709))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_755))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:51424: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",51424,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51432
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_709))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_760))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:326 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51443
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_709))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_760))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:51446: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",51446,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51454
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_777))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_811))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:394 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51465
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_777))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_811))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:51468: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",51468,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51476
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_777))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_816))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:395 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51487
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_777))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_816))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:51490: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",51490,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51498
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_777))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_821))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:396 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51509
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_777))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_821))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:51512: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",51512,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51520
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_777))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_826))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:397 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51531
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_777))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_826))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:51534: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",51534,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51542
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_777))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_831))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:398 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51553
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_777))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_831))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:51556: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",51556,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51564
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_777))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_838))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel burst lowered error (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:399 assert (d.bits.error || !error,   \"'D' channel burst lowered error\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51575
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_777))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_838))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:51578: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",51578,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51586
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_695) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_860))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_918))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:428 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51597
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_695) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_860))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_918))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:51600: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",51600,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51608
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_765) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_888))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_939))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:435 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51619
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_765) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_888))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_939))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:51622: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",51622,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51630
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_949))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 3 (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:439 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51641
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_949))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:51644: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",51644,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51652
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_968))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:447 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51663
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_968))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:51666: Assertion failed in %NTestHarness.dut.sbus.coupler_to_slave_named_Error.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",51666,"");
	}
    }
}

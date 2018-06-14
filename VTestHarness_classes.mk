# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VTestHarness.mk for the caller.

### Switches...
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Tracing output mode?  0/1 (from --trace)
VM_TRACE = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VTestHarness \
	VTestHarness__1 \
	VTestHarness__2 \
	VTestHarness__3 \
	VTestHarness__4 \
	VTestHarness__5 \
	VTestHarness__6 \
	VTestHarness__7 \
	VTestHarness__8 \
	VTestHarness__9 \
	VTestHarness__10 \
	VTestHarness__11 \
	VTestHarness__12 \
	VTestHarness__13 \
	VTestHarness___024unit \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VTestHarness__Slow \
	VTestHarness__1__Slow \
	VTestHarness__2__Slow \
	VTestHarness__3__Slow \
	VTestHarness__4__Slow \
	VTestHarness__5__Slow \
	VTestHarness___024unit__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VTestHarness__Dpi \
	VTestHarness__Trace \
	VTestHarness__Trace__1 \
	VTestHarness__Trace__2 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VTestHarness__Syms \
	VTestHarness__Trace__Slow \
	VTestHarness__Trace__Slow__1 \
	VTestHarness__Trace__Slow__2 \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-

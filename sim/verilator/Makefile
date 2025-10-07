VERILATOR ?= verilator
TOP        = tb_core

# repo root (two levels up from sim/verilator)
ROOT      := $(realpath ../..)

# Absolute paths
RTL_DIR       := $(ROOT)/rtl
CORE_DIR      := $(RTL_DIR)/core
STAGES_DIR    := $(CORE_DIR)/stages
REGS_DIR      := $(CORE_DIR)/regs
DATAPATH_DIR  := $(CORE_DIR)/datapath
MEM_DIR       := $(RTL_DIR)/memory
BUILD         := $(ROOT)/verilator_out
TB_SV         := $(ROOT)/sim/tb_core.sv
CPP_MAIN      := $(ROOT)/sim/verilator/sim_main.cpp

# Sources (package / interfaces first)
SRCS := \
  $(MEM_DIR)/Mem_Interface.sv \
  $(CORE_DIR)/top_core.sv \
  $(STAGES_DIR)/IF_Stage.sv \
  $(STAGES_DIR)/ID_Stage.sv \
  $(STAGES_DIR)/EX_Stage.sv \
  $(STAGES_DIR)/MEM_Stage.sv \
  $(STAGES_DIR)/WB_Stage.sv \
  $(REGS_DIR)/IF_ID_Reg.sv \
  $(REGS_DIR)/ID_EX_Reg.sv \
  $(REGS_DIR)/EX_MEM_Reg.sv \
  $(REGS_DIR)/MEM_WB_Reg.sv \
  $(DATAPATH_DIR)/Register_File.sv \
  $(DATAPATH_DIR)/ALU.sv \
  $(MEM_DIR)/Instruction_Memory.sv \
  $(MEM_DIR)/Data_Memory.sv \
  $(TB_SV)

.PHONY: all build compile run clean
all: run

build:
	@mkdir -p "$(BUILD)"

compile: build
	$(VERILATOR) --sv --cc --exe --build \
  -Wall -Wno-UNOPTFLAT -Wno-DECLFILENAME -Wno-UNUSEDSIGNAL \
  -Wno-PINCONNECTEMPTY -Wno-UNDRIVEN -Wno-WIDTHEXPAND \
  --error-limit 0 \
  --timing --trace -O3 \
		--top-module $(TOP) \
		-I$(CORE_DIR) -I$(STAGES_DIR) -I$(REGS_DIR) -I$(DATAPATH_DIR) -I$(MEM_DIR) \
		--Mdir $(BUILD) \
		$(SRCS) $(CPP_MAIN) \
		-o V$(TOP)

run: compile
	@cd "$(BUILD)" && ./V$(TOP)
	@gtkwave "$(BUILD)/wave.vcd" >/dev/null 2>&1 &

clean:
	rm -rf "$(BUILD)"

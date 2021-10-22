################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccs1040/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./tm4c123gh6pm_startup_ccs.obj" \
"./Template Files/src/debug.obj" \
"./Template Files/src/main.obj" \
"./TivaWARE/driverlib/cpu.obj" \
"./TivaWARE/driverlib/fpu.obj" \
"./TivaWARE/driverlib/gpio.obj" \
"./TivaWARE/driverlib/interrupt.obj" \
"./TivaWARE/driverlib/sysctl.obj" \
"./TivaWARE/driverlib/systick.obj" \
"./TivaWARE/driverlib/uart.obj" \
"./TivaWARE/driverlib/udma.obj" \
"./TivaWARE/driverlib/usb.obj" \
"./TivaWARE/usblib/device/usbdcdc.obj" \
"./TivaWARE/usblib/device/usbdcdesc.obj" \
"./TivaWARE/usblib/device/usbdcomp.obj" \
"./TivaWARE/usblib/device/usbdhandler.obj" \
"./TivaWARE/utils/ustdlib.obj" \
"../tm4c123gh6pm.cmd" \
"../TivaWARE/usblib/ccs/Debug/usblib.lib" \
$(GEN_CMDS__FLAG) \
-llibc.a \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include Template\ Files/src/subdir_vars.mk
-include TivaWARE/driverlib/subdir_vars.mk
-include TivaWARE/usblib/ccs/Debug/subdir_vars.mk
-include TivaWARE/usblib/device/subdir_vars.mk
-include TivaWARE/utils/subdir_vars.mk
-include subdir_rules.mk
-include Template\ Files/src/subdir_rules.mk
-include TivaWARE/driverlib/subdir_rules.mk
-include TivaWARE/usblib/ccs/Debug/subdir_rules.mk
-include TivaWARE/usblib/device/subdir_rules.mk
-include TivaWARE/utils/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
TivaWare\ Template.out \

EXE_OUTPUTS__QUOTED += \
"TivaWare Template.out" \

BIN_OUTPUTS += \
TivaWare\ Template.hex \

BIN_OUTPUTS__QUOTED += \
"TivaWare Template.hex" \


# All Target
all: $(OBJS) $(CMD_SRCS) $(LIB_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "TivaWare Template.out"

# Tool invocations
TivaWare\ Template.out: $(OBJS) $(CMD_SRCS) $(LIB_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: ARM Linker'
	"C:/ti/ccs1040/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me -O3 --opt_for_speed=0 --fp_mode=strict --define=ccs="ccs" --define=TARGET_IS_TM4C123_RB1 --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi -z -m"TivaWare Template.map" --heap_size=0 --stack_size=512 -i"C:/ti/ccs1040/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/lib" -i"C:/ti/ccs1040/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/include" --reread_libs --diag_wrap=off --display_error_number --warn_sections --xml_link_info="TivaWare Template_linkInfo.xml" --rom_model -o "TivaWare Template.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

TivaWare\ Template.hex: $(EXE_OUTPUTS)
	@echo 'Building secondary target: "$@"'
	@echo 'Invoking: ARM Hex Utility'
	"C:/ti/ccs1040/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/bin/armhex" --diag_wrap=off -o "TivaWare Template.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building secondary target: "$@"'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(BIN_OUTPUTS__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "tm4c123gh6pm_startup_ccs.obj" "Template Files\src\debug.obj" "Template Files\src\main.obj" "TivaWARE\driverlib\cpu.obj" "TivaWARE\driverlib\fpu.obj" "TivaWARE\driverlib\gpio.obj" "TivaWARE\driverlib\interrupt.obj" "TivaWARE\driverlib\sysctl.obj" "TivaWARE\driverlib\systick.obj" "TivaWARE\driverlib\uart.obj" "TivaWARE\driverlib\udma.obj" "TivaWARE\driverlib\usb.obj" "TivaWARE\usblib\device\usbdcdc.obj" "TivaWARE\usblib\device\usbdcdesc.obj" "TivaWARE\usblib\device\usbdcomp.obj" "TivaWARE\usblib\device\usbdhandler.obj" "TivaWARE\utils\ustdlib.obj" 
	-$(RM) "tm4c123gh6pm_startup_ccs.d" "Template Files\src\debug.d" "Template Files\src\main.d" "TivaWARE\driverlib\cpu.d" "TivaWARE\driverlib\fpu.d" "TivaWARE\driverlib\gpio.d" "TivaWARE\driverlib\interrupt.d" "TivaWARE\driverlib\sysctl.d" "TivaWARE\driverlib\systick.d" "TivaWARE\driverlib\uart.d" "TivaWARE\driverlib\udma.d" "TivaWARE\driverlib\usb.d" "TivaWARE\usblib\device\usbdcdc.d" "TivaWARE\usblib\device\usbdcdesc.d" "TivaWARE\usblib\device\usbdcomp.d" "TivaWARE\usblib\device\usbdhandler.d" "TivaWARE\utils\ustdlib.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets


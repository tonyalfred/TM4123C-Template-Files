################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
TivaWARE/utils/%.obj: ../TivaWARE/utils/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccs1040/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me -O3 --opt_for_speed=0 --fp_mode=strict --include_path="D:/Embedded Systems/Shell/Template Files/FINAL/FreeRTOS + TivaWare Template" --include_path="D:/Embedded Systems/Shell/Template Files/FINAL/FreeRTOS + TivaWare Template/FreeRTOS/portable/CCS/ARM_CM4F/" --include_path="D:/Embedded Systems/Shell/Template Files/FINAL/FreeRTOS + TivaWare Template/FreeRTOS/include" --include_path="D:/Embedded Systems/Shell/Template Files/FINAL/FreeRTOS + TivaWare Template/TivaWARE" --include_path="C:/ti/ccs1040/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/include" --define=ccs="ccs" --define=TARGET_IS_TM4C123_RB1 --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="TivaWARE/utils/$(basename $(<F)).d_raw" --obj_directory="TivaWARE/utils" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '



################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
Project\ Files/src/debug.obj: ../Project\ Files/src/debug.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccs1040/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me -O3 --opt_for_speed=0 --fp_mode=strict --include_path="D:/Embedded Systems/Shell/Template Files/FINAL/EEPROM Simple Project" --include_path="D:/Embedded Systems/Shell/Template Files/FINAL/EEPROM Simple Project/TivaWARE" --include_path="C:/ti/ccs1040/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/include" --define=ccs="ccs" --define=TARGET_IS_TM4C123_RB1 --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="Project Files/src/debug.d_raw" --obj_directory="Project Files/src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Project\ Files/src/main.obj: ../Project\ Files/src/main.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccs1040/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=none -me -O3 --opt_for_speed=0 --fp_mode=strict --include_path="D:/Embedded Systems/Shell/Template Files/FINAL/EEPROM Simple Project" --include_path="D:/Embedded Systems/Shell/Template Files/FINAL/EEPROM Simple Project/TivaWARE" --include_path="C:/ti/ccs1040/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/include" --define=ccs="ccs" --define=TARGET_IS_TM4C123_RB1 --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="Project Files/src/main.d_raw" --obj_directory="Project Files/src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


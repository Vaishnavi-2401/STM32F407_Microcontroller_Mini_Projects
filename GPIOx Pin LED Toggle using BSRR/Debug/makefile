################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := GPIOx Pin LED Toggle using BSRR
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
GPIOx\ Pin\ LED\ Toggle\ using\ BSRR.elf \

MAP_FILES += \
GPIOx\ Pin\ LED\ Toggle\ using\ BSRR.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
GPIOx\ Pin\ LED\ Toggle\ using\ BSRR.list \


# All Target
all: main-build

# Main-build Target
main-build: GPIOx\ Pin\ LED\ Toggle\ using\ BSRR.elf secondary-outputs

# Tool invocations
GPIOx\ Pin\ LED\ Toggle\ using\ BSRR.elf GPIOx\ Pin\ LED\ Toggle\ using\ BSRR.map: $(OBJS) $(USER_OBJS) /home/sunbeam/Desktop/GIT\ DATA/STM32F407_Microcontroller_Mini_Projects/GPIOx\ Pin\ LED\ Toggle\ using\ BSRR/STM32F407VGTX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "GPIOx Pin LED Toggle using BSRR.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"/home/sunbeam/Desktop/GIT DATA/STM32F407_Microcontroller_Mini_Projects/GPIOx Pin LED Toggle using BSRR/STM32F407VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="GPIOx Pin LED Toggle using BSRR.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

GPIOx\ Pin\ LED\ Toggle\ using\ BSRR.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "GPIOx Pin LED Toggle using BSRR.list"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) GPIOx\ Pin\ LED\ Toggle\ using\ BSRR.elf GPIOx\ Pin\ LED\ Toggle\ using\ BSRR.list GPIOx\ Pin\ LED\ Toggle\ using\ BSRR.map GPIOx\\ Pin\\ LED\\ Toggle\\ using\\ BSRR.elf default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets

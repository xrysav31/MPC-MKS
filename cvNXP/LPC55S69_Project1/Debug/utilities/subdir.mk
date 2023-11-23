################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../utilities/fsl_debug_console.c \
../utilities/fsl_str.c 

C_DEPS += \
./utilities/fsl_debug_console.d \
./utilities/fsl_str.d 

OBJS += \
./utilities/fsl_debug_console.o \
./utilities/fsl_str.o 


# Each subdirectory must supply rules for building sources it contributes
utilities/%.o: ../utilities/%.c utilities/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DCPU_LPC55S69JBD100 -DCPU_LPC55S69JBD100_cm33 -DCPU_LPC55S69JBD100_cm33_core0 -DFSL_RTOS_BM -DSDK_OS_BAREMETAL -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"C:\Temp\MPC-MKS\LPC55S69_Project1\board" -I"C:\Temp\MPC-MKS\LPC55S69_Project1\source" -I"C:\Temp\MPC-MKS\LPC55S69_Project1" -I"C:\Temp\MPC-MKS\LPC55S69_Project1\drivers" -I"C:\Temp\MPC-MKS\LPC55S69_Project1\CMSIS" -I"C:\Temp\MPC-MKS\LPC55S69_Project1\device" -I"C:\Temp\MPC-MKS\LPC55S69_Project1\utilities" -I"C:\Temp\MPC-MKS\LPC55S69_Project1\component\uart" -I"C:\Temp\MPC-MKS\LPC55S69_Project1\component\serial_manager" -I"C:\Temp\MPC-MKS\LPC55S69_Project1\component\lists" -I"C:\Temp\MPC-MKS\LPC55S69_Project1\board\boards" -I"C:\Temp\MPC-MKS\LPC55S69_Project1\startup" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m33 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-utilities

clean-utilities:
	-$(RM) ./utilities/fsl_debug_console.d ./utilities/fsl_debug_console.o ./utilities/fsl_str.d ./utilities/fsl_str.o

.PHONY: clean-utilities


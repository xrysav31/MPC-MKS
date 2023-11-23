################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../startup/boot_multicore_slave.c \
../startup/startup_lpc55s69_cm33_core0.c 

C_DEPS += \
./startup/boot_multicore_slave.d \
./startup/startup_lpc55s69_cm33_core0.d 

OBJS += \
./startup/boot_multicore_slave.o \
./startup/startup_lpc55s69_cm33_core0.o 


# Each subdirectory must supply rules for building sources it contributes
startup/%.o: ../startup/%.c startup/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -DCPU_LPC55S69JBD100_cm33_core0 -DARM_MATH_CM33 -DCPU_LPC55S69JBD100 -DCPU_LPC55S69JBD100_cm33 -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -D__NEWLIB__ -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world_ns\source" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world_ns" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world_ns\drivers" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world_ns\device" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world_ns\startup" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world_ns\utilities" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world_ns\component\uart" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world_ns\component\serial_manager" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world_ns\component\lists" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world_ns\CMSIS" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world_ns\board" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world_ns\trustzone" -O0 -fno-common -g3 -Wall -D __SEMIHOST_HARDFAULT_DISABLE  -c  -ffunction-sections  -fdata-sections  -ffreestanding  -fno-builtin  -mcpu=cortex-m33 -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m33 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -specs=nano.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-startup

clean-startup:
	-$(RM) ./startup/boot_multicore_slave.d ./startup/boot_multicore_slave.o ./startup/startup_lpc55s69_cm33_core0.d ./startup/startup_lpc55s69_cm33_core0.o

.PHONY: clean-startup


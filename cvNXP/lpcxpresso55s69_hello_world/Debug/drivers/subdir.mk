################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/fsl_clock.c \
../drivers/fsl_common.c \
../drivers/fsl_ctimer.c \
../drivers/fsl_flexcomm.c \
../drivers/fsl_gpio.c \
../drivers/fsl_i2c.c \
../drivers/fsl_power.c \
../drivers/fsl_reset.c \
../drivers/fsl_spi.c \
../drivers/fsl_usart.c 

C_DEPS += \
./drivers/fsl_clock.d \
./drivers/fsl_common.d \
./drivers/fsl_ctimer.d \
./drivers/fsl_flexcomm.d \
./drivers/fsl_gpio.d \
./drivers/fsl_i2c.d \
./drivers/fsl_power.d \
./drivers/fsl_reset.d \
./drivers/fsl_spi.d \
./drivers/fsl_usart.d 

OBJS += \
./drivers/fsl_clock.o \
./drivers/fsl_common.o \
./drivers/fsl_ctimer.o \
./drivers/fsl_flexcomm.o \
./drivers/fsl_gpio.o \
./drivers/fsl_i2c.o \
./drivers/fsl_power.o \
./drivers/fsl_reset.o \
./drivers/fsl_spi.o \
./drivers/fsl_usart.o 


# Each subdirectory must supply rules for building sources it contributes
drivers/%.o: ../drivers/%.c drivers/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -DCPU_LPC55S69JBD100 -DCPU_LPC55S69JBD100_cm33 -DCPU_LPC55S69JBD100_cm33_core0 -DARM_MATH_CM33 -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -D__REDLIB__ -DFSL_RTOS_BM -DSDK_OS_BAREMETAL -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world\startup" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world\component\uart" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world\drivers" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world\utilities" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world\component\lists" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world\device" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world\component\serial_manager" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world\CMSIS" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world\source" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world\drivers" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world\device" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world\startup" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world\utilities" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world\component\uart" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world\component\serial_manager" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world\component\lists" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world\CMSIS" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world\board" -O0 -fno-common -g3 -Wall -c  -ffunction-sections  -fdata-sections  -ffreestanding  -fno-builtin  -mcpu=cortex-m33 -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m33 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-drivers

clean-drivers:
	-$(RM) ./drivers/fsl_clock.d ./drivers/fsl_clock.o ./drivers/fsl_common.d ./drivers/fsl_common.o ./drivers/fsl_ctimer.d ./drivers/fsl_ctimer.o ./drivers/fsl_flexcomm.d ./drivers/fsl_flexcomm.o ./drivers/fsl_gpio.d ./drivers/fsl_gpio.o ./drivers/fsl_i2c.d ./drivers/fsl_i2c.o ./drivers/fsl_power.d ./drivers/fsl_power.o ./drivers/fsl_reset.d ./drivers/fsl_reset.o ./drivers/fsl_spi.d ./drivers/fsl_spi.o ./drivers/fsl_usart.d ./drivers/fsl_usart.o

.PHONY: clean-drivers


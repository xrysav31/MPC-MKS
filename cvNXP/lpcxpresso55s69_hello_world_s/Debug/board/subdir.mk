################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../board/board.c \
../board/clock_config.c \
../board/pin_mux.c 

C_DEPS += \
./board/board.d \
./board/clock_config.d \
./board/pin_mux.d 

OBJS += \
./board/board.o \
./board/clock_config.o \
./board/pin_mux.o 


# Each subdirectory must supply rules for building sources it contributes
board/%.o: ../board/%.c board/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -DCPU_LPC55S69JBD100_cm33_core0 -DARM_MATH_CM33 -DCPU_LPC55S69JBD100 -DCPU_LPC55S69JBD100_cm33 -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -D__NEWLIB__ -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world_s\source" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world_s" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world_s\drivers" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world_s\device" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world_s\startup" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world_s\utilities" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world_s\component\uart" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world_s\component\serial_manager" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world_s\component\lists" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world_s\CMSIS" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world_s\board" -I"C:\Temp\MPC-MKS\lpcxpresso55s69_hello_world_s\trustzone" -O0 -fno-common -g3 -Wall -c  -ffunction-sections  -fdata-sections  -ffreestanding  -fno-builtin  -mcpu=cortex-m33 -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m33 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -mcmse -D__NEWLIB__ -fstack-usage -specs=nano.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-board

clean-board:
	-$(RM) ./board/board.d ./board/board.o ./board/clock_config.d ./board/clock_config.o ./board/pin_mux.d ./board/pin_mux.o

.PHONY: clean-board


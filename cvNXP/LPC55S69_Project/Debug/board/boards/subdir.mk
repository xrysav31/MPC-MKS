################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../board/boards/board.c \
../board/boards/clock_config.c \
../board/boards/peripherals.c \
../board/boards/pin_mux.c 

C_DEPS += \
./board/boards/board.d \
./board/boards/clock_config.d \
./board/boards/peripherals.d \
./board/boards/pin_mux.d 

OBJS += \
./board/boards/board.o \
./board/boards/clock_config.o \
./board/boards/peripherals.o \
./board/boards/pin_mux.o 


# Each subdirectory must supply rules for building sources it contributes
board/boards/%.o: ../board/boards/%.c board/boards/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DCPU_LPC55S69JBD100 -DCPU_LPC55S69JBD100_cm33 -DCPU_LPC55S69JBD100_cm33_core0 -DFSL_RTOS_BM -DSDK_OS_BAREMETAL -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"C:\Temp\MPC-MKS\LPC55S69_Project\board" -I"C:\Temp\MPC-MKS\LPC55S69_Project\source" -I"C:\Temp\MPC-MKS\LPC55S69_Project" -I"C:\Temp\MPC-MKS\LPC55S69_Project\drivers" -I"C:\Temp\MPC-MKS\LPC55S69_Project\CMSIS" -I"C:\Temp\MPC-MKS\LPC55S69_Project\device" -I"C:\Temp\MPC-MKS\LPC55S69_Project\utilities" -I"C:\Temp\MPC-MKS\LPC55S69_Project\component\uart" -I"C:\Temp\MPC-MKS\LPC55S69_Project\component\serial_manager" -I"C:\Temp\MPC-MKS\LPC55S69_Project\component\lists" -I"C:\Temp\MPC-MKS\LPC55S69_Project\board\boards" -I"C:\Temp\MPC-MKS\LPC55S69_Project\startup" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m33 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-board-2f-boards

clean-board-2f-boards:
	-$(RM) ./board/boards/board.d ./board/boards/board.o ./board/boards/clock_config.d ./board/boards/clock_config.o ./board/boards/peripherals.d ./board/boards/peripherals.o ./board/boards/pin_mux.d ./board/boards/pin_mux.o

.PHONY: clean-board-2f-boards


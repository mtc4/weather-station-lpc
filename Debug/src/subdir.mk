################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/cr_startup_lpc13uxx.c \
../src/crp.c \
../src/oled.c \
../src/sp.c \
../src/sysinit.c 

OBJS += \
./src/cr_startup_lpc13uxx.o \
./src/crp.o \
./src/oled.o \
./src/sp.o \
./src/sysinit.o 

C_DEPS += \
./src/cr_startup_lpc13uxx.d \
./src/crp.d \
./src/oled.d \
./src/sp.d \
./src/sysinit.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DDEBUG -D__CODE_RED -DCORE_M3 -D__USE_LPCOPEN -D__LPC13UXX__ -D__REDLIB__ -I"C:\Users\student\Documents\MCUXpressoIDE_10.3.0_2200\workspace\lpc_board_nxp_lpcxpresso_1347\inc" -I"C:\Users\student\Documents\MCUXpressoIDE_10.3.0_2200\workspace\lpc_chip_13xx\inc" -O0 -fno-common -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



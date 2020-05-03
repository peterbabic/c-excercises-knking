################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Examples/inventory.c \
../Examples/readline.c 

OBJS += \
./Examples/inventory.o \
./Examples/readline.o 

C_DEPS += \
./Examples/inventory.d \
./Examples/readline.d 


# Each subdirectory must supply rules for building sources it contributes
Examples/%.o: ../Examples/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



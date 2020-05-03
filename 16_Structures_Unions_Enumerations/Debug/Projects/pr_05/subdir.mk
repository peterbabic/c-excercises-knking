################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Projects/pr_05/departures.c 

OBJS += \
./Projects/pr_05/departures.o 

C_DEPS += \
./Projects/pr_05/departures.d 


# Each subdirectory must supply rules for building sources it contributes
Projects/pr_05/%.o: ../Projects/pr_05/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



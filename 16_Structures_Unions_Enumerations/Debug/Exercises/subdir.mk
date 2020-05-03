################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Exercises/ex_07.c 

OBJS += \
./Exercises/ex_07.o 

C_DEPS += \
./Exercises/ex_07.d 


# Each subdirectory must supply rules for building sources it contributes
Exercises/%.o: ../Exercises/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



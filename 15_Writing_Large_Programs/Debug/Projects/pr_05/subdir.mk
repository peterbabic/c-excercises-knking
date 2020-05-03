################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Projects/pr_05/rpn.c \
../Projects/pr_05/stack.c 

OBJS += \
./Projects/pr_05/rpn.o \
./Projects/pr_05/stack.o 

C_DEPS += \
./Projects/pr_05/rpn.d \
./Projects/pr_05/stack.d 


# Each subdirectory must supply rules for building sources it contributes
Projects/pr_05/%.o: ../Projects/pr_05/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



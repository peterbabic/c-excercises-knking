################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Projects/pr_03/inventory.c \
../Projects/pr_03/readline.c 

OBJS += \
./Projects/pr_03/inventory.o \
./Projects/pr_03/readline.o 

C_DEPS += \
./Projects/pr_03/inventory.d \
./Projects/pr_03/readline.d 


# Each subdirectory must supply rules for building sources it contributes
Projects/pr_03/%.o: ../Projects/pr_03/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



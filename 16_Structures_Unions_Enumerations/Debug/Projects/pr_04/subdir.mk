################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Projects/pr_04/inventory.c \
../Projects/pr_04/readline.c 

OBJS += \
./Projects/pr_04/inventory.o \
./Projects/pr_04/readline.o 

C_DEPS += \
./Projects/pr_04/inventory.d \
./Projects/pr_04/readline.d 


# Each subdirectory must supply rules for building sources it contributes
Projects/pr_04/%.o: ../Projects/pr_04/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



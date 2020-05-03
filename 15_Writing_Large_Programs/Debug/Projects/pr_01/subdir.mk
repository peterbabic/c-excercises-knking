################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Projects/pr_01/justify.c \
../Projects/pr_01/line.c \
../Projects/pr_01/word.c 

OBJS += \
./Projects/pr_01/justify.o \
./Projects/pr_01/line.o \
./Projects/pr_01/word.o 

C_DEPS += \
./Projects/pr_01/justify.d \
./Projects/pr_01/line.d \
./Projects/pr_01/word.d 


# Each subdirectory must supply rules for building sources it contributes
Projects/pr_01/%.o: ../Projects/pr_01/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



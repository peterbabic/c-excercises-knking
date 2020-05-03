################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Projects/pr_02/justify.c \
../Projects/pr_02/line.c \
../Projects/pr_02/word.c 

OBJS += \
./Projects/pr_02/justify.o \
./Projects/pr_02/line.o \
./Projects/pr_02/word.o 

C_DEPS += \
./Projects/pr_02/justify.d \
./Projects/pr_02/line.d \
./Projects/pr_02/word.d 


# Each subdirectory must supply rules for building sources it contributes
Projects/pr_02/%.o: ../Projects/pr_02/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



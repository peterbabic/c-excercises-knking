################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Projects/pr_02/inventory.c \
../Projects/pr_02/quicksort.c \
../Projects/pr_02/readline.c 

OBJS += \
./Projects/pr_02/inventory.o \
./Projects/pr_02/quicksort.o \
./Projects/pr_02/readline.o 

C_DEPS += \
./Projects/pr_02/inventory.d \
./Projects/pr_02/quicksort.d \
./Projects/pr_02/readline.d 


# Each subdirectory must supply rules for building sources it contributes
Projects/pr_02/%.o: ../Projects/pr_02/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



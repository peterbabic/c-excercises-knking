################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../justify/justify.c \
../justify/line.c \
../justify/word.c 

OBJS += \
./justify/justify.o \
./justify/line.o \
./justify/word.o 

C_DEPS += \
./justify/justify.d \
./justify/line.d \
./justify/word.d 


# Each subdirectory must supply rules for building sources it contributes
justify/%.o: ../justify/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



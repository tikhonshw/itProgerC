################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../4.3/4.3_zagolov.H.cpp 

CPP_DEPS += \
./4.3/4.3_zagolov.H.d 

OBJS += \
./4.3/4.3_zagolov.H.o 


# Each subdirectory must supply rules for building sources it contributes
4.3/4.3_zagolov.H.o: ../4.3/4.3_zagolov.H.cpp 4.3/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-4-2e-3

clean-4-2e-3:
	-$(RM) ./4.3/4.3_zagolov.H.d ./4.3/4.3_zagolov.H.o

.PHONY: clean-4-2e-3


################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Basic\ Exceptions.cpp 

OBJS += \
./src/Basic\ Exceptions.o 

CPP_DEPS += \
./src/Basic\ Exceptions.d 


# Each subdirectory must supply rules for building sources it contributes
src/Basic\ Exceptions.o: ../src/Basic\ Exceptions.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Basic Exceptions.d" -MT"src/Basic\ Exceptions.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



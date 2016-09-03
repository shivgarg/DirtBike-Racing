################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../3.cpp \
../Object.cpp \
../Vector3D.cpp \
../first.cpp \
../glm.cpp \
../libtarga.cpp \
../obj1.cpp \
../physics.cpp \
../terrain.cpp 

OBJ_SRCS += \
../Bike_Suzuki_Katana.obj \
../Kamen\ Rider\ Black\ SD.obj \
../Kroserica_simple2.obj \
../cube_texture.obj \
../hell_pig.obj \
../quad.obj 

OBJS += \
./3.o \
./Object.o \
./Vector3D.o \
./first.o \
./glm.o \
./libtarga.o \
./obj1.o \
./physics.o \
./terrain.o 

CPP_DEPS += \
./3.d \
./Object.d \
./Vector3D.d \
./first.d \
./glm.d \
./libtarga.d \
./obj1.d \
./physics.d \
./terrain.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



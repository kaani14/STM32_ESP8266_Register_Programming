################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/clock_config.c \
../Src/core_coprocessor.c \
../Src/esp8266.c \
../Src/gpio_config.c \
../Src/main.c \
../Src/power_config.c \
../Src/timer.c \
../Src/uart.c 

OBJS += \
./Src/clock_config.o \
./Src/core_coprocessor.o \
./Src/esp8266.o \
./Src/gpio_config.o \
./Src/main.o \
./Src/power_config.o \
./Src/timer.o \
./Src/uart.o 

C_DEPS += \
./Src/clock_config.d \
./Src/core_coprocessor.d \
./Src/esp8266.d \
./Src/gpio_config.d \
./Src/main.d \
./Src/power_config.d \
./Src/timer.d \
./Src/uart.d 


# Each subdirectory must supply rules for building sources it contributes
Src/clock_config.o: ../Src/clock_config.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DSTM32 -DNUCLEO_F767ZI -DSTM32F7 -DSTM32F767ZITx -c -I../Inc -I"C:/Users/kanis/OneDrive/Extra study/STM32/HAL_Test/ESP8266_ThingSpeak/Drivers/CMSIS/Include" -I"C:/Users/kanis/OneDrive/Extra study/STM32/HAL_Test/ESP8266_ThingSpeak/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/clock_config.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/core_coprocessor.o: ../Src/core_coprocessor.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DSTM32 -DNUCLEO_F767ZI -DSTM32F7 -DSTM32F767ZITx -c -I../Inc -I"C:/Users/kanis/OneDrive/Extra study/STM32/HAL_Test/ESP8266_ThingSpeak/Drivers/CMSIS/Include" -I"C:/Users/kanis/OneDrive/Extra study/STM32/HAL_Test/ESP8266_ThingSpeak/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/core_coprocessor.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/esp8266.o: ../Src/esp8266.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DSTM32 -DNUCLEO_F767ZI -DSTM32F7 -DSTM32F767ZITx -c -I../Inc -I"C:/Users/kanis/OneDrive/Extra study/STM32/HAL_Test/ESP8266_ThingSpeak/Drivers/CMSIS/Include" -I"C:/Users/kanis/OneDrive/Extra study/STM32/HAL_Test/ESP8266_ThingSpeak/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/esp8266.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/gpio_config.o: ../Src/gpio_config.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DSTM32 -DNUCLEO_F767ZI -DSTM32F7 -DSTM32F767ZITx -c -I../Inc -I"C:/Users/kanis/OneDrive/Extra study/STM32/HAL_Test/ESP8266_ThingSpeak/Drivers/CMSIS/Include" -I"C:/Users/kanis/OneDrive/Extra study/STM32/HAL_Test/ESP8266_ThingSpeak/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/gpio_config.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/main.o: ../Src/main.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DSTM32 -DNUCLEO_F767ZI -DSTM32F7 -DSTM32F767ZITx -c -I../Inc -I"C:/Users/kanis/OneDrive/Extra study/STM32/HAL_Test/ESP8266_ThingSpeak/Drivers/CMSIS/Include" -I"C:/Users/kanis/OneDrive/Extra study/STM32/HAL_Test/ESP8266_ThingSpeak/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/main.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/power_config.o: ../Src/power_config.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DSTM32 -DNUCLEO_F767ZI -DSTM32F7 -DSTM32F767ZITx -c -I../Inc -I"C:/Users/kanis/OneDrive/Extra study/STM32/HAL_Test/ESP8266_ThingSpeak/Drivers/CMSIS/Include" -I"C:/Users/kanis/OneDrive/Extra study/STM32/HAL_Test/ESP8266_ThingSpeak/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/power_config.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/timer.o: ../Src/timer.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DSTM32 -DNUCLEO_F767ZI -DSTM32F7 -DSTM32F767ZITx -c -I../Inc -I"C:/Users/kanis/OneDrive/Extra study/STM32/HAL_Test/ESP8266_ThingSpeak/Drivers/CMSIS/Include" -I"C:/Users/kanis/OneDrive/Extra study/STM32/HAL_Test/ESP8266_ThingSpeak/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/timer.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Src/uart.o: ../Src/uart.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DSTM32 -DNUCLEO_F767ZI -DSTM32F7 -DSTM32F767ZITx -c -I../Inc -I"C:/Users/kanis/OneDrive/Extra study/STM32/HAL_Test/ESP8266_ThingSpeak/Drivers/CMSIS/Include" -I"C:/Users/kanis/OneDrive/Extra study/STM32/HAL_Test/ESP8266_ThingSpeak/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/uart.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"


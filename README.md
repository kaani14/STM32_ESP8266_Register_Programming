# STM32_ESP8266_Register_Programming

# Description

Send dummy sensor data using HTTP request to Thingspeak using ESP8266 and STM32F767ZI.
# Connections

**STM32F767ZI**  | **ESP-8266**
------------- | -------------
PC11  | Tx
PA0  | Rx
3.3V  | EN / CH_PD


# Testing ESP

The MCU sends AT command to check if the connection between MCU and ESP8266 is stable and if ESP8266 is working. If the MCU receives 'OK' from ESP8266, the green LED on the Nucleo board lights up. If the MCU receives "ERROR", it tries to send another AT command. After receiving "ERROR" for the second time, the red LED on the board is turned on and the MCU goes to sleep. On receiving garbage or no value, the MCU goes to sleep after turning on the RED line.

# Sending Data to ThingSpeak

The data is sent to ThingSpeak periodically. A timer interrupt is used to achieve that. After sending data to ThingSpeak, the MCU goes to sleep and wakes up when the interrupt is triggered.

# Future Updates

- Add make file
- Add an option to send HTTP request on an event like a press of a switch
- Further power optimization

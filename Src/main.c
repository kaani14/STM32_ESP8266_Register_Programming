/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "stm32f7xx.h"
#include "esp8266.h"
#include "power_config.h"
#include "core_processor.h"
#include "clock_config.h"

char SSID[20] = "SSID";
char password[20] = "password";
char IP[20] = "\"184.106.153.149\"";
char write_API_key[17] = "write_API_key";
const int port = 80;
double sensor_output = 30.56;

struct esp8266 ESP = {SSID, password, IP, port, write_API_key};

int main (void)
{
	//core processor config
	core_processor();

	// clock config
	clock_config();

	//power_config
	power_config();

	// gpio config
	gpio_config();

	// timer
	timer();

	uart_init();

	ESP8266_Test();
	ESP8266_WiFiSetup(ESP.SSID, ESP.password);
	ESP8266_Connection_Type();

	while (1)
	{
		TS_Write(ESP.IP, ESP.port, ESP.write_API_key, sensor_output);
		__WFE();
	}
}

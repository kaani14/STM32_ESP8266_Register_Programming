/*
 * ESP8266.h
 *
 *  Created on: 16-Oct-2021
 *      Author: kani
 */

#ifndef INC_ESP8266_H_
#define INC_ESP8266_H_

#include "stm32f7xx.h"
#include "uart.h"
#include "gpio_config.h"
#include "timer.h"

struct esp8266{

	char *SSID;
	char *password;
	char *IP;
	int port;
	char *write_API_key;
};

char AT_Commmand[100];
char APIrequest[100];
int APIrequest_size;

void ESP8266_Test(void);
void ESP8266_WiFiSetup(char*, char*);
void ESP8266_Connection_Type();
void TS_Write(char*, int, char*, double);
void delay(int);

#endif /* INC_ESP8266_H_ */

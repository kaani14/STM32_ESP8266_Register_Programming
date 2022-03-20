/*
 * ESP8266.c
 *
 *  Created on: 16-Oct-2021
 *      Author: kani
 */

#include <string.h>
#include <stdio.h>

#include "esp8266.h"

int i = 0;

// If OK received, turn on the greed LED
// If error received, sent AT command once more
// If nothing is received or error is received twice, turn on red LED and go to sleep
void ESP8266_Test()
{
	const char ok[5] = "OK\r\n";
	const char error[8] = "ERROR\r\n";
	char *OK_received, *error_received;

	for (int k = 0; k < 2; k++)
	{
		uart_transmit("AT\r\n");
		delay(1000);

		OK_received = strstr((const char*)rx_data, ok);
		error_received = strstr((const char*)rx_data, error);

		if (strcmp(OK_received, ok) == 0)
		{
			i = 0;
			GPIOB->ODR = GPIO_ODR_OD0;
			break;
		}

		else if (strcmp(error_received, error) == 0)
			i = 0;
	}

	if ((OK_received == NULL) && (error_received == NULL))
	{
		GPIOB->ODR = GPIO_ODR_OD14;
		__WFI();
	}

}

//Set to station mode and connect to WiFi
void ESP8266_WiFiSetup(char* SSID, char* password)
{
	uart_transmit("AT+CWMODE=1\r\n");
	delay(500);
	i = 0;

	sprintf((char*)AT_Commmand, "AT+CWJAP=\"%s\",\"%s\"\r\n",SSID, password);
	uart_transmit(AT_Commmand);
	delay(7000);
	i = 0;
}

//Single connection
void ESP8266_Connection_Type()
{
	uart_transmit("AT+CIPMUX=0\r\n");
	delay(500);
	NVIC_EnableIRQ(TIM4_IRQn);			// Enable 15 seconds interrupt
}

//HTTP request
void TS_Write(char* IP, int port, char* channel_write_key, double sensor_output)
{
	sprintf((char*)AT_Commmand, "AT+CIPSTART=\"TCP\",%s,%d\r\n", IP, port);
	uart_transmit(AT_Commmand);
	delay(1000);
	i = 0;

	sprintf(APIrequest, "GET /update?api_key=%s&field1=%lf\r\n",channel_write_key, sensor_output);
	APIrequest_size = strlen (APIrequest);
	sprintf((char*)AT_Commmand, "AT+CIPSEND=%d\r\n", APIrequest_size);
	uart_transmit(AT_Commmand);
	delay(200);

	uart_transmit(APIrequest);
	delay(5000);
	i = 0;
}

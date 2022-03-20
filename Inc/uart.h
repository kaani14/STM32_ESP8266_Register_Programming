/*
 * uart.h
 *
 *  Created on: 19-Mar-2022
 *      Author: kani
 */

#ifndef UART_H_
#define UART_H_

#include "stm32f7xx.h"

void uart_init(void);
void uart_transmit(char*);

uint8_t rx_data[150];
extern int i;

#endif /* UART_H_ */

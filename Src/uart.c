/*
 * uart.h
 *
 *  Created on: 19-Mar-2022
 *      Author: kani
 */

#include "uart.h"

// Word length: 8 bits by default
void uart_init()
{
	UART4->BRR = 0x8A;				//Baud Rate: 16Mhz / 115200
	UART4->CR1 |= USART_CR1_UE | USART_CR1_TE;
	UART4->CR1 |= USART_CR1_RE | USART_CR1_RXNEIE;
	NVIC_SetPriority(UART4_IRQn, 0);
	NVIC_EnableIRQ(UART4_IRQn);
}

//transmit string
void uart_transmit(char *string)
{
	while (*string)
	{
		UART4->TDR = (*string++);
		while (!(UART4->ISR & USART_ISR_TXE));
	}
}

// interrupt for receiving
void UART4_IRQHandler()
{
	rx_data[i] = UART4->RDR;
	i++;
}

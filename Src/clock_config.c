/*
 * clock_config.c
 *
 *  Created on: 19-Mar-2022
 *      Author: kani
 */

#include "clock_config.h"

void clock_config()
{
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN | RCC_AHB1ENR_GPIOBEN | RCC_AHB1ENR_GPIOCEN;
	RCC->APB1ENR |= RCC_APB1ENR_TIM3EN | RCC_APB1ENR_TIM4EN;
	RCC->APB1ENR |= RCC_APB1ENR_UART4EN;
}

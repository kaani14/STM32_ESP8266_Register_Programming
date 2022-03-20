/*
 * timer.c
 *
 *  Created on: 19-Mar-2022
 *      Author: kani
 */

#include "timer.h"

void timer()
{
	TIM3->CR1 |= TIM_CR1_CEN | TIM_CR1_URS | TIM_CR1_ARPE;
	TIM3->ARR = 16;
	TIM3->PSC |= 999;

	TIM4->ARR = 23999;
	TIM4->PSC |= 9999;
	TIM4->DIER |= TIM_DIER_UIE;
	TIM4->CR1 |= TIM_CR1_CEN;
}

// milliseconds delay
void delay(int k)
{
	while (delay_counter <= k)
	{
		while ((TIM3->SR | 0xFFFE) != 0xFFFF);
		TIM3->SR &= ~TIM_SR_UIF;
		delay_counter++;
	}
	delay_counter = 0;
}

// interrupt triggered every 15 seconds, wakes up the MCU from low power mode
void TIM4_IRQHandler()
{
	if(TIM4->SR & TIM_SR_UIF)
	{
		TIM4->SR &= ~TIM_SR_UIF;
	}
}

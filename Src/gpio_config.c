/*
 * gpio.c
 *
 *  Created on: 19-Mar-2022
 *      Author: kani
 */

#include "gpio_config.h"

#define GPIO_ODR_OD14 RED_LED
#define GPIO_ODR_OD0 GREEN_LED

void gpio_config()
{
	// GPIO mode
	GPIOA->MODER |= GPIO_MODER_MODER0_1;
	GPIOB->MODER |= GPIO_MODER_MODER0_0 | GPIO_MODER_MODER14_0;
	GPIOC->MODER |= GPIO_MODER_MODER11_1;

	// GPIO speed
	GPIOA->OSPEEDR |= GPIO_OSPEEDR_OSPEEDR0_0 | GPIO_OSPEEDR_OSPEEDR0_1;
	GPIOC->OSPEEDR |= GPIO_OSPEEDR_OSPEEDR11_1 | GPIO_OSPEEDR_OSPEEDR11_1;

	// GPIO function
	GPIOA->AFR[0] |= GPIO_AFRL_AFRL0_3;
	GPIOC->AFR[1] |= GPIO_AFRH_AFRH3_3;
}

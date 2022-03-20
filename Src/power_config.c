/*
 * power_config.c
 *
 *  Created on: 20-Mar-2022
 *      Author: kani
 */

#include "power_config.h"
void power_config()
{
	SCB->SCR |= (1 << SCB_SCR_SLEEPDEEP_Pos);
	PWR->CR1 |= PWR_CR1_PDDS;
}

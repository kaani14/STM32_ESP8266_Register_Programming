/*
 * core_coprocessor.c
 *
 *  Created on: Mar 20, 2022
 *      Author: kani
 */

#include "stm32f7xx.h"
#include "core_processor.h"

void core_processor(void)
{
	SCB->CPACR |= ((3UL << 10*2)|(3UL << 11*2));	// Full access to CP10 and CP11 to enable FPU operations
}

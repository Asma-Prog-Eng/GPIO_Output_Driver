/**
 ******************************************************************************
Toggle Led connected to PA5 while configuring clock frequency to 100 Mhz
using PLL as input source clock
 ******************************************************************************
 */

#include <Init.h>
#include "stm32f4xx.h"


int main (void) {


	 GPIOA_Init();


	while (1) {

		// set PA5 high

		GPIOA->ODR |= (1U << 5) ;

		// simple delay

		for (volatile uint32_t i = 0; i < 500000; i++) {};

		// set PA5 low

		GPIOA->ODR &= ~(1U << 5) ;

		// simple delay

		for (volatile uint32_t i = 0; i < 500000; i++) {};

	}

	return  0;
}




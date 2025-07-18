/**
 ******************************************************************************
Toggle Led connected to PA5 while configuring clock frequency to 50 Mhz
using PLL as input source clock
 ******************************************************************************
 */

#include "GPIOA_Output.h"
#include "stm32f4xx.h"


int main (void) {


	 GPIOA_Init();


	while (1) {


		LED_toggle();

	}

	return  0;
}




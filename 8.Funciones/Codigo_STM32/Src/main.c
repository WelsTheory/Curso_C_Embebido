#include <stdint.h>
#include <stdbool.h>
#include "delay.h"

int main(void)
{
	uint32_t *p_ClckEnableGPIOB = (uint32_t *)0x40023830;
 	uint32_t *p_RegModerGPIOB = (uint32_t *)0x40020400;
	uint32_t *p_RegOdrGPIOB = (uint32_t *)0x40020414;
	*p_ClckEnableGPIOB |= (1<<1);
	*p_RegModerGPIOB &= ~(3<<0 | 3<<14 | 3<<28);
	*p_RegModerGPIOB |= (1<<0 | 1<<14 | 1<<28);
	while(1)
	{
		/* ENCENDEMOS LED */
		*p_RegOdrGPIOB ^= (1<<0 | 1<<7 | 1<<14);
		delay_with_for(2000000);
		*p_RegOdrGPIOB ^= (1<<0 | 1<<7 | 1<<14);
		delay_with_for(600000);
	}

	return 0;
}




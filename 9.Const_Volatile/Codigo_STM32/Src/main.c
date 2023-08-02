#include <stdint.h>
#include <stdbool.h>
#include "delay.h"

int main(void)
{
	uint32_t volatile *const p_ClckEnableGPIOB = (uint32_t *)0x40023830;
 	uint32_t volatile *const p_RegModerGPIOB = (uint32_t *)0x40020400;
	uint32_t volatile *const p_RegOdrGPIOB = (uint32_t *)0x40020414;

	uint32_t volatile *const p_RegModerGPIOC = (uint32_t *)0x40020800;
	uint32_t const volatile *const p_RegIdrGPIOC = (uint32_t *)0x40020810;

	*p_ClckEnableGPIOB |= (1<<1 | 1<<2);// GPIOB GPIOC
	*p_RegModerGPIOB &= ~(3<<0 | 3<<14 | 3<<28);
	*p_RegModerGPIOC &= ~(3<<26); // PIN 13 ENTRADA
	*p_RegModerGPIOB |= (1<<0 | 1<<14 | 1<<28);
	while(1)
	{
		/* ENCENDEMOS LED */
		if(*p_RegIdrGPIOC & 1<<13)
		{
			*p_RegOdrGPIOB ^= (1<<0 | 1<<7 | 1<<14);
			delay_with_for(600000);
		}
	}

	return 0;
}

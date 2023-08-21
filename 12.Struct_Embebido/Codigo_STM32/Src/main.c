#include <stdint.h>
#include <stdbool.h>

typedef struct
{
	volatile uint32_t MODER;
	volatile uint32_t OTYPER;
	volatile uint32_t OSPEEDR;
	volatile uint32_t PUPDR;
	volatile uint32_t IDR;
	volatile uint32_t ODR;
	volatile uint32_t BSRR;
	volatile uint32_t LCKR;
	volatile uint32_t AFR[2];
}Gpio_t;

#define GPIOB ((Gpio_t *)0x40020400)
#define GPIOC ((Gpio_t *)0x40020800)

int main(void)
{
	uint32_t volatile *const p_ClckEnableGPIOB = (uint32_t *)0x40023830;
	*p_ClckEnableGPIOB |= (1<<1 | 1<<2);// GPIOB Y GPIOC
	GPIOB->MODER &= ~(3<<0 | 3<<14 | 3<<28);
	GPIOB->MODER |= (1<<0 | 1<<14 | 1<<28);// SALIDA
	GPIOC->MODER &= ~(3<<26);
	while(1)
	{
		if(GPIOC->IDR & (1<<13))
		{
			GPIOB->ODR ^= (1<<0 | 1<<7 | 1<<14);
			for(uint32_t i = 0; i < 600000;i++);
		}

	}
	return 0;
}

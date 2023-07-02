#include <stdint.h>

int main(void)
{
	uint32_t *p_ClckEnableGPIOB = (uint32_t *)0x40023830;
 	uint32_t *p_RegModerGPIOB = (uint32_t *)0x40020400;
	uint32_t *p_RegOdrGPIOB = (uint32_t *)0x40020414;
	*p_ClckEnableGPIOB |= 0x00000002;

//	*p_RegModerGPIOB &= 0xFFFFFFF0;
//	*p_RegModerGPIOB &= ~(3<<0); // MODER GPIO 0
//	*p_RegModerGPIOB &= ~(3<<14);// MODER GPIO 7
//	*p_RegModerGPIOB &= ~(3<<24);// MODER GPIO 14
	*p_RegModerGPIOB &= ~(3<<0 | 3<<14 | 3<<28);
	// SALIDA -> 1
	*p_RegModerGPIOB |= (1<<0 | 1<<14 | 1<<28);

//	*p_RegOdrGPIOB |= 0X00000001;
	*p_RegOdrGPIOB ^= (1<<0 | 1<<7 | 1<<14);

	for(;;);
}


/*
 * 1010 1100 and
 * 1111 0000
 * 1010 0000
 *
 * */

// 0x40020400 + 0x00 = 0x40020400
	// 0x40020400 + 0x14 = 0x40020414
	// 0x40023800 + 0x30 = 0x40023830

/* Loop forever */

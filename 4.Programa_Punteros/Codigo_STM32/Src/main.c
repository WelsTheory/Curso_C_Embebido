#include <stdint.h>

int main(void)
{
	// 0x40020400 + 0x00 = 0x40020400
	// 0x40020400 + 0x14 = 0x40020414
	// 0x40023800 + 0x30 = 0x40023830
	uint32_t *p_ClckEnableGPIOB = (uint32_t *)0x40023830;
 	uint32_t *p_RegModerGPIOB = (uint32_t *)0x40020400;
	uint32_t *p_RegOdrGPIOB = (uint32_t *)0x40020414;
	/*
	 * 1010 1100 and
	 * 1111 0000
	 * 1010 0000
	 *
	 * */
	*p_ClckEnableGPIOB |= 0x00000002;
	*p_RegModerGPIOB &= 0xFFFFFFF0;
	*p_RegModerGPIOB |= 0x00000001;
	*p_RegOdrGPIOB |= 0X00000001;
    /* Loop forever */
	for(;;);
}

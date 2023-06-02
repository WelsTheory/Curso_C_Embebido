/*
 * main.c
 *
 *  Created on: May 31, 2023
 *      Author: Wels
 */

#include <stdio.h>

int main()
{
    printf("Hola Mundo \r\n");

    printf("Curso C Embebido \r\n");

    char var_char = '%';

    printf("Mi primer caracter: %c - Y su size es de: %d Bytes\r\n",var_char, sizeof(var_char));

    signed char var_s_char = -15;
    unsigned char var_u_char = 255;

    printf("Mi primer dato negativo: %d Size = %d \r\n",var_s_char,sizeof(var_s_char));
    printf("Mi primer dato positivo: %d Size = %d \r\n",var_u_char,sizeof(var_u_char));

    unsigned int var_u_int = 125000;
    signed int var_s_int = -125000;

    printf("Mi primer dato negativo: %d Size = %d \r\n",var_u_int,sizeof(var_u_int));
	printf("Mi primer dato positivo: %d Size = %d \r\n",var_s_int,sizeof(var_s_int));

	// STM32 -> 32 BIT: 4 BYTES
	// PIC18 -> 8 BIT: 2 BYTES

	unsigned short var_u_short = 45555;
	signed short var_s_short = -20555;
	printf("Mi primer short: %d Size = %d \r\n",var_u_short,sizeof(var_u_short));
	printf("Mi primer short: %d Size = %d \r\n",var_s_short,sizeof(var_s_short));

	unsigned long var_u_long = 45555;
	signed long var_s_long = -20555;
	printf("Mi primer long: %ld Size = %d \r\n",var_u_long,sizeof(var_u_long));
	printf("Mi primer long: %ld Size = %d \r\n",var_s_long,sizeof(var_s_long));

	unsigned long long mega_long = 50;
	printf("Mi primer long long: %lld Size = %ld \r\n",mega_long,sizeof(mega_long));

}


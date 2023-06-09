/*
 * main.c
 *
 *  Created on: 8 jun. 2023
 *      Author: Wels
 */

#include <stdio.h>
#include <stdint.h>

int main()
{
	int16_t otra_variable = 50;

    printf("Hola Mundo \r\n");

    printf("Curso C Embebido \r\n");

    printf("Valor Variable: %d\r\n",otra_variable);

    float var_float = 1.1234567;
//    float var_float = 1.1234567890123;
    printf("Mi primer float: %0.13f \r\n",var_float);
    printf("Mi primer notacion cientifica: %0.13e \r\n",var_float);

    double var_double = 1.123456789012345;
	printf("Mi primer double: %0.15lf \r\n",var_double);
	printf("Mi primer double notacion cientifica: %0.15le \r\n",var_double);

	double var_electron = -1.60217662e-19;
	printf("Mi primer electron: %0.28lf \r\n",var_electron);
	printf("Mi primer electron notacion cientifica: %0.28le \r\n",var_electron);

	uint16_t x = 5;
	uint16_t y = 10;
	float z = 2.5
	uint16_t result_sum, result_res,result_mul,result_div;
	uint16_t result_oper;

	result_sum = x + y;
	result_res = y - x;
	result_mul = x * y;
	result_div = y/x;
	result_oper = (x + y) * 2;//30 25

	printf("Resultado de la suma: %d\r\n",result_sum);
	printf("Resultado de la resta: %d\r\n",result_res);
	printf("Resultado de la multiplicacion: %d\r\n",result_mul);
	printf("Resultado de la division: %d\r\n",result_div);
	printf("Resultado de la operacion: %d\r\n",result_oper);


    return 0;
}



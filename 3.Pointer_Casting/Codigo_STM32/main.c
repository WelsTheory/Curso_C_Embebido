/*
 * main.c
 *
 *  Created on: 19 jun. 2023
 *      Author: Wels
 */

#include <stdio.h>
#include <stdint.h>

int main()
{
	uint16_t x = 5;
	uint16_t y = 10;

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

	printf("-----------------------------\r\n");

	int data = 17;
	char variable = '0'; // asci 48 decimal
	int sum_t;
	sum_t = data + variable;
	printf("Resultado de la suma: %d\r\n",sum_t);

	uint32_t var1_int = 22;
	uint32_t var2_int = 5;
	//	float var2_int = 5.0;
	float resul_div_float;

	resul_div_float = (float)var1_int/var2_int;
	printf("Resultado de la division: %.3f\r\n",resul_div_float);

	printf("----------CASTEO----------------\r\n");

	uint32_t sum = 17, count = 5;
	float z;

	z = (float)sum/count;

	printf("Resultado de la operacion: %.3f\r\n",z);

	printf("----------MODULO---------------\r\n");

	uint32_t var_mod1 = 51, var_mod2 = 5;
	uint32_t result_mod;

	result_mod = var_mod1 % var_mod2;
	printf("Resultado del modulo: %d\r\n",result_mod);

	printf("----------INCR Y DECR---------------\r\n");

	uint32_t var_incr_1 = 5;
	uint32_t var_incr_2 = 5;
	uint32_t tot_incr_1 = (++var_incr_1) + 5;
	uint32_t tot_incr_2 = (var_incr_2++) + 5;

	printf("var_incr_2: %d\r\n",var_incr_2);
	printf("Valor de total_1: %d y total_2: %d \r\n",tot_incr_1,tot_incr_2);

	uint32_t var_decr_1 = 5;
	uint32_t var_decr_2 = 5;
	uint32_t tot_decr_1 = (--var_decr_1) + 5;
	uint32_t tot_decr_2 = (var_decr_2--) + 5;
	printf("var_decr_2: %d\r\n",var_decr_2);
	printf("Valor de total_1: %d y total_2: %d \r\n",tot_decr_1,tot_decr_2);

	printf("----------PUNTEROS-------------\r\n");
	uint32_t temp = 17;
	printf("Valor de temp: %d \r\n",temp);
	uint32_t *p;
	p = &temp;
	printf("Direccion de temp: %p \r\n",&temp);
	printf("Direccion de temp: %p \r\n",p);

	*p = 25;
	printf("Valor de temp: %d \r\n",temp);
	//lectura de puntero
	uint32_t valor_p = *p;
	printf("Valor de valor_p: %d \r\n",valor_p);

	printf("---------------------- \r\n");
	uint32_t otro_temp = 525;
	printf("Valor de otro temp: %d \r\n",otro_temp);
	char *otro_p = (char *)&otro_temp;
	printf("Dirección de temp: %p\r\n",&otro_temp);
	printf("Dirección de temp: %p\r\n",otro_p);

	*otro_p = 2;
	printf("Valor de otro temp: %d \r\n",otro_temp);

}






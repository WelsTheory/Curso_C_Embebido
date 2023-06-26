/* 
 * File:   main.c
 * Author: Wels
 *
 * Created on 21 de junio de 2023, 07:29 PM
 */

#include <xc.h>
#include <stdint.h>
#include "Configuracion.h"

int main(void)
{
    uint16_t *p_trisd = (uint16_t *)0xF95;
    uint16_t *p_latd = (uint16_t *)0xF8C;
    *p_trisd = 0xF0;
    //TRISD = 0x00;
    while(1)
    {
        *p_latd = 0x01;
        //LATD = 0x01; // Encendiendo el LED
        __delay_ms(500);
        *p_latd = 0x00;
        //LATD = 0x00; // Encendiendo el LED
        __delay_ms(500);
    }
    return 0;
}




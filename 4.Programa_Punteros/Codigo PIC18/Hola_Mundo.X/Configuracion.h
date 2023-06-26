
#ifndef XC_HEADER_TEMPLATE_H
#define	XC_HEADER_TEMPLATE_H

//#include <xc.h> // include processor files - each processor file is guarded.  

#define _XTAL_FREQ  20000000UL
// UNSIGNED LONG

#endif	/* XC_HEADER_TEMPLATE_H */

//int main(void)
//{
//    uint16_t *trisd_p = (uint16_t *)0xF95;
//    uint16_t *latd_p = (uint16_t * )0xF8C;
//    uint16_t *trisb_p = (uint16_t *)0xF93;
//    uint16_t *portb_p = (uint16_t *)0xF81;
//    uint16_t *latb_p = (uint16_t *)0xF8A;
//    *trisd_p = 0x00;
//    *trisb_p = 0x0F;
//    while(1)
//    {
//        if(*portb_p & 0x01)
//        {
//            *latb_p |= 0x10;
//        }
//        else
//        {
//            *latb_p &= ~(0x10);
//        }
//        *latd_p |= 0x01;
//        __delay_ms(100);
//        *latd_p &= ~(0x01);
//        __delay_ms(100);
//    }
//    return 0;
//}

//int main(void)
//{
//    TRISDbits.RD0 = 0;
//    TRISDbits.RD1 = 0;
//    TRISBbits.RB0 = 1;// entrada
//    LATD = 0x00;
//    while(1)
//    {// bucle
//        if(PORTBbits.RB0 == 1)
//        {
//            LATDbits.LATD1 = 1;
//        }
//        else
//        {
//            LATDbits.LATD1 = 0;
//        }
//        LATDbits.LATD0 = 1; // Encendiendo el LED
//        __delay_ms(100);
//        LATDbits.LATD0 = 0; // Encendiendo el LED
//        __delay_ms(100);
//    }
//    
//    return 0;
//}

//

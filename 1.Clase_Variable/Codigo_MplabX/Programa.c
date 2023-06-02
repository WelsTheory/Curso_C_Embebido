/*
 * File:   Programa_principal.c
 * Author: Wels
 *
 * Created on July 23, 2021, 3:24 PM
 */


#include <xc.h>
/* NO TOMAR EN CUENTA */
#include "Configuracion.h"
#include "UART_Libreria.h"
/* NO TOMAR EN CUENTA */
#include <stdio.h>

void main(void) {
    unsigned int var_int = 50;
    
    /* NO TOMAR EN CUENTA */
    Puertos_Init();
    Clock_Init();
    UART_Init();
    /* NO TOMAR EN CUENTA */
    
    while(1)
    {       
        LATFbits.LATF3 = ~LATFbits.LATF3; /* NO TOMAR EN CUENTA */
        
        printf("Size of int = %d Bytes \r\n",sizeof(var_int));
        __delay_ms(100);
        
    }
}









//#define MAX_COMMAND_LEN 4
//
//#define START_DATA_STREAM_PROTOCOL 0x03
//#define STOP_DATA_STREAM_PROTOCOL 0xFC
//
//
//char command[MAX_COMMAND_LEN];

//uint8_t index = 0;
//char c;
//uint16_t x= 0;
//char valor = 0;
//void main(void) {
//    float temp;
//    Puertos_Init();
//    Clock_Init();
//    //ADC_Init();
//    UART_Init();
//    while(1)
//    { 
////        printf("%c%c%c%c", START_DATA_STREAM_PROTOCOL, cnt, d_c,STOP_DATA_STREAM_PROTOCOL);
////        d_c = cnt*2;
////        cnt = cnt + 1;
////        __delay_ms(50);
////        
//////        c = getch();
//////        if(c != '\n' && c != '\r')
//////        {
//////            command[index++] = c;
//////            if(index > MAX_COMMAND_LEN)
//////            {
//////                index = 0;
//////            }
//////        }
//////
//////        if(c == '\n')
//////        {
//////            command[index] = '\0';
//////            index = 0;
//////            printf("%s",command);
//////            //executeCommand(command);
//////        }
////        
//////        char valor = UART1_Read();
//////        if( valor == '1'){
//////            printf("AT$RC\n");
//////            LATFbits.LATF3 = 0;
//////            __delay_ms(100);
//////        }
////        if(PORTBbits.RB4 == 0)
////        {       
////            //x = ADC_Conversion(0);  
////            //temp = (x*0.122); // voltaje -> C
////            //UART1_Write('H');
////            //printf("AT$RC\n");
////            __delay_ms(500);
////            LATFbits.LATF3 = 0;
////            printf("AT$SF=%08lx\n",temp);
////            
////            // 24 horas - 144 mensajes -> 12 bytes 
////            
////            __delay_ms(500);
////            valor = UART1_Read();
////            printf
////            LATFbits.LATF3 = 1;
////        }
//        if(PORTBbits.RB4 == 0)
//        {       
//            printf("AT$I=10\n");
//            LATFbits.LATF3 = 0;
//            //printf("AT$SF=%08lx\n",temp);
//            __delay_ms(100);
//            LATFbits.LATF3 = 1;
//        }
//        
//        c = getch();
//        if(c != '\n' && c != '\r')
//        {
//            command[index++] = c;
//            if(index > MAX_COMMAND_LEN)
//            {
//                index = 0;
//            }
//        }
//
//        if(c == '\n')
//        {
//            command[index] = '\0';
//            index = 0;
//            printf("%s",command);
//            //executeCommand(command);
//        }
//    }
//}



#include "UART_Libreria.h"

void UART_Init(void){
    U1BRG = 416;//9600 baudios
    U1CON0bits.BRGS = 0; // 16
    U1CON0bits.MODE = 0b0000; // uart 8 bits
    U1CON2 = 0x00;
    U1CON1bits.ON = 1; // serial port
    U1CON0bits.TXEN = 1; //
    U1CON0bits.RXEN = 1;   
    
}

void UART1_Write(uint8_t txData)
{
    while(PIR4bits.U1TXIF == 0);
    U1TXB = txData;    // Write the data byte to the USART.
    PIR4bits.U1TXIF = 0;
    
}

void putch(char txData)
{
    UART1_Write(txData);
}

//char getch(void)
//{
//    return UART1_Read();
//}

char UART1_Read(void)
{
    return U1RXB;
}

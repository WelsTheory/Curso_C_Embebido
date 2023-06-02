/* 
 * File:   UART_Libreria.h
 * Author: Wels
 *
 * Created on July 23, 2021, 3:23 PM
 */

#ifndef UART_LIBRERIA_H
#define	UART_LIBRERIA_H

#include <xc.h>
#include <stdio.h>

void UART_Init(void);

void UART1_Write(uint8_t txData);

void putch(char txData);

//char getch(void);

char UART1_Read(void);

#endif	/* UART_LIBRERIA_H */


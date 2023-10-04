// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef LCD_I2C_H
#define	LCD_I2C_H

#include <stdint.>
#include <string.h>

/* DEFINIR EL LCD A UTILIZAR */
#define LCD_4X20
//#define LCD_2X16

/* DEFINIR EL MICROCONTROLADOR A USAR */
#if defined(__XC8)
    #include <xc.h>
    #include "Configuracion.h"
    #define delay_ms(x)  __delay_ms(x)
    #define delay_us(x)  __delay_us(x)
    #include "I2C.h"
#elif defined(__XC16)
    #include <xc.h>
    #include "Configuracion.h"
    #define delay_ms(x)  __delay_ms(x)
    #define delay_us(x)  __delay_us(x)
    #include "I2C.h"
#elif defined(__STM32F4)
    #include "main.h"
    #include "SysTick.h"
    #include "I2C.h"
    #define delay_ms(x)  Delay_ms(x)
#endif

/* ESTRUCTURA PARA CONFIGURAR EL LCD */
typedef struct
{
    uint8_t lcd_address;	/* DIRECCIÓN DE LCD*/
    uint8_t lcd_4bit;		/* CONFIGURAR COMO 4 BITS */
    uint8_t lcd_font;   	/* CONFIGURAR LINEAS Y CARACTERES */
    uint8_t lcd_display;	/* CONFIGURAR DISPLAY, CURSOR Y PARPADEO */
    uint8_t lcd_inc_ddram;	/* CONFIGURAR INCREMENTO DE DDRAM */
    uint8_t lcd_clear;		/* CONFIGURAR LIMPIEZA DE LCD */
    uint8_t data[4];		/* DATA A ENVIAR POR EL I2C */
}lcd_t;

#define LCD_I2C_ADDRESS_0 	0x4E
#define LCD_I2C_ADDRESS_1 	0x7E

/* LCD LINEAS*/
#define LCD_LINEA1					0x80
#define LCD_LINEA2					0xC0
#define LCD_LINEA3					0x94
#define LCD_LINEA4					0xD4


/* COMANDOS HOME Y BORRAR */
#define LCD_BORRARLCD	    		0x01
#define LCD_HOME		    		0x02

/* BITS DE LCD */
#define LCD_CONFIG                  0x30
#define LCD_4BITS                   0x02
#define LCD_8BITS                   0x00

/* LINEAS DE LCD */
#define LCD_4BIT_2LINEAS 			0x28
#define LCD_4BIT_1LINEA 			0x20
#define LCD_4BIT_1LINEA_5x10		0x24
#define LCD_8BIT_1LINEA				0x30
#define LCD_8BIT_1LINEA_5x10		0x34
#define LCD_8BIT_2LINEAS 			0x38

/* DISPLAY LCD */
#define LCD_DISPLAY_ON				0x0C
#define LCD_DISPLAY_OFF				0x08
#define LCD_DISPLAY_ON_BLINK		0x0D
#define LCD_DISPLAY_ON_CURSOR		0x0E
#define LCD_DISPLAY_ON_CURSOR_BLINK	0x0F

/* ENTRY MODO */
#define LCD_ENTRY_DECREMENTO_		0x04
#define LCD_ENTRY_DECREMENTO_SHIFT	0x05
#define LCD_ENTRY_INCREMENTO_		0x06
#define LCD_ENTRY_INCREMENTO_SHIFT	0x07

/* DESPLAZAMIENTO CURSOR - DISPLAY*/
#define LCD_MOVE_CURSOR_LEFT		0x10
#define LCD_MOVE_CURSOR_RIGHT		0x14
#define LCD_MOVE_DISP_LEFT			0x18
#define LCD_MOVE_DISP_RIGHT			0x1C

/* I2C Control bits */
#define 	LCD_RS        		(1)
#define 	LCD_RW        		(1 << 1)
#define 	LCD_EN        		(1 << 2)
#define 	LCD_BK_LIGHT  		(1 << 3)
#define		LCD_D4_PIN			(4)
#define		LCD_D5_PIN			(5)
#define		LCD_D6_PIN			(6)
#define		LCD_D7_PIN			(7)

/* FUNCIONES */
void LCD_I2C_Init(lcd_t *LCD_Data);

void LCD_I2C_Comando(lcd_t *LCD_Data, uint8_t cmd);

void LCD_I2C_Caracter(lcd_t *LCD_Data, uint8_t data);

void LCD_I2C_Cadena(lcd_t *LCD_Data, char *cadena);

void LCD_I2C_XY(lcd_t *LCD_Data, uint8_t x, uint8_t y);

#endif	/* XC_HEADER_TEMPLATE_H */
#include "LCD_I2C.h"

static void I2C_SendCommand(lcd_t *LCD_Data, uint8_t data)
{
    uint8_t low_data = (0xF0 & (data<<4));
    uint8_t high_data = (0xF0 & data);
    LCD_Data->data[0] = high_data | LCD_EN | LCD_BK_LIGHT;
    LCD_Data->data[1] = high_data | LCD_BK_LIGHT;
    LCD_Data->data[2] = low_data | LCD_EN | LCD_BK_LIGHT;
    LCD_Data->data[3] = low_data | LCD_BK_LIGHT;
#if defined(__XC8)
    I2C_Start();
    I2C_Tx(LCD_Data->lcd_address);
    I2C_ACK();
    I2C_Tx(LCD_Data->data[0]);
    I2C_Tx(LCD_Data->data[1]);
    I2C_Tx(LCD_Data->data[2]);
    I2C_Tx(LCD_Data->data[3]);
    I2C_Stop();
#elif defined(__XC16)
    I2C_Start();
    I2C_Tx(LCD_Data->lcd_address);
    I2C_Tx(LCD_Data->data[0]);
    I2C_Tx(LCD_Data->data[1]);
    I2C_Tx(LCD_Data->data[2]);
    I2C_Tx(LCD_Data->data[3]);
    I2C_Stop();
#elif defined(__STM32F4)
    I2C_masterTransmit(LCD_Data->lcd_address, LCD_Data->data, 4, 100);
#endif
}

static void I2C_SendData(lcd_t *LCD_Data, uint8_t data)
{
    uint8_t low_data = (0xF0 & (data<<4));
    uint8_t high_data = (0xF0 & data);
    LCD_Data->data[0] = high_data | LCD_EN | LCD_BK_LIGHT | LCD_RS;
    LCD_Data->data[1] = high_data | LCD_BK_LIGHT | LCD_RS;
    LCD_Data->data[2] = low_data | LCD_EN | LCD_BK_LIGHT | LCD_RS;
    LCD_Data->data[3] = low_data | LCD_BK_LIGHT | LCD_RS;
#if defined(__XC8)
    I2C_Start();
    I2C_Tx(LCD_Data->lcd_address);
    I2C_ACK();
    I2C_Tx(LCD_Data->data[0]);
    I2C_Tx(LCD_Data->data[1]);
    I2C_Tx(LCD_Data->data[2]);
    I2C_Tx(LCD_Data->data[3]);
    I2C_Stop();
#elif defined(__XC16)
    I2C_Start();
    I2C_Tx(LCD_Data->lcd_address);
    I2C_Tx(LCD_Data->data[0]);
    I2C_Tx(LCD_Data->data[1]);
    I2C_Tx(LCD_Data->data[2]);
    I2C_Tx(LCD_Data->data[3]);
    I2C_Stop();
#elif defined(__STM32F4)
    I2C_masterTransmit(LCD_Data->lcd_address, LCD_Data->data, 4, 100);
#endif
}

void LCD_I2C_Init(lcd_t *LCD_Data){
    LCD_I2C_Comando(LCD_Data, LCD_CONFIG);
    delay_ms(100);
	LCD_I2C_Comando(LCD_Data,LCD_CONFIG);
	delay_ms(5);
    LCD_I2C_Comando(LCD_Data, LCD_CONFIG | LCD_Data->lcd_4bit);
	delay_ms(1);
	LCD_I2C_Comando(LCD_Data, LCD_Data->lcd_font);
	LCD_I2C_Comando(LCD_Data, LCD_Data->lcd_display);
	LCD_I2C_Comando(LCD_Data, LCD_Data->lcd_clear);
	LCD_I2C_Comando(LCD_Data, LCD_Data->lcd_inc_ddram);
	delay_ms(100);
}

void LCD_I2C_Comando(lcd_t *LCD_Data, uint8_t cmd)
{
    I2C_SendCommand(LCD_Data,cmd);
}

void LCD_I2C_Caracter(lcd_t *LCD_Data, uint8_t data)
{
    I2C_SendData(LCD_Data,data);
}

void LCD_I2C_Cadena(lcd_t *LCD_Data, char *cadena)
{
	for(uint8_t i = 0; i < strlen(cadena); i++)
	{
		LCD_I2C_Caracter(LCD_Data, cadena[i]);
	}
}

void LCD_I2C_XY(lcd_t *LCD_Data, uint8_t x, uint8_t y)
{
#ifdef LCD_2X16
    if(x > 0)
	{
    	LCD_I2C_Comando(LCD_Data, LCD_LINEA2 + y);
	}
	else
	{
		LCD_I2C_Comando(LCD_Data, LCD_LINEA1 + y);
	}
#elif defined(LCD_4X20)
    if(x == 0)
	{
    	LCD_I2C_Comando(LCD_Data, LCD_LINEA1 + y);
	}
    else if(x == 1)
	{
    	LCD_I2C_Comando(LCD_Data, LCD_LINEA2 + y);
	}
    else if(x == 2)
	{
    	LCD_I2C_Comando(LCD_Data, LCD_LINEA3 + y);
	}
	else
	{
		LCD_I2C_Comando(LCD_Data, LCD_LINEA4 + y);
	}
#endif
}


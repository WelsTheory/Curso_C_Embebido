#include "LCD_I2C.h"

/*
COMO PONERLO EN EL MAIN
*/
int main(void)
{
    lcd_t LCD_DATA;
    LCD_DATA.lcd_4bits = LCD_4BITS;
    LCD_Data.lcd_4bit = LCD_4BITS;
	LCD_Data.lcd_address = LCD_I2C_ADDRESS_0;
	LCD_Data.lcd_clear = LCD_BORRARLCD;
	LCD_Data.lcd_display = LCD_DISPLAY_ON_CURSOR_BLINK;
	LCD_Data.lcd_font = LCD_4BIT_1LINEA_5x10;
	LCD_Data.lcd_inc_ddram = LCD_ENTRY_INCREMENTO_;
    while(1);
    return 0;
}
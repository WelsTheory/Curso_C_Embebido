/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int32_t num1 = 25, num2 = 87;
    printf("Bitwise AND(&): %d \r\n",(num1 & num2));
    printf("Bitwise OR (|): %d \r\n",(num1 | num2));
    printf("Bitwise XOR(^): %d \r\n",(num1 ^ num2));
    printf("Bitwise NOT(~): %d \r\n", (~num2));
    
    uint32_t variable = 100;
    uint32_t y = variable >> 4;
    printf("Resultado corrimiento derecho: %d \r\n",y);
    
    uint32_t variable_2 = -6;
    uint32_t y_2 = variable_2<<2;
    printf("Resultado diviendo: %d \r\n",y_2);
    
    uint32_t reg_prueba = 0xFFFFFFFF;
    printf("Registro prueba: 0x%x \r\n",reg_prueba);
    reg_prueba &= ~(3<<0);
    /*
        3 = 00000011
           __________
      <<0 = 00000011
           __________
        ~ = 11111100
    Operación de 0xFF AND 11111100
      11111111
    & 11111100
     __________
      11111100 = 0xFC 
    */
    printf("Despues de clearing bit: 0x%x \r\n",reg_prueba);
    reg_prueba &= ~(3<<14);
    printf("Despues de clearing bit: 0x%x \r\n",reg_prueba);
    /*  0011 1111 1111 1100 */
    reg_prueba &= ~(3<<28);
    printf("Despues de clearing bit: 0x%x \r\n",reg_prueba);
    uint32_t reg_data = 0xFFFFFFFF;
    reg_data &= ~(3<<28 | 3<<14 | 3<<0);
    printf("Registro Data: 0x%x \r\n",reg_data);

    return 0;
}

/*

-6 = 11111010

Shift left de 2 bit
input    11111010
        __________
    <<2  11101000 = -24

*/

/*

100 = 01100100

Shift right de 1 bit
input    01100100
        __________
    >>1  00110010

*/

/*

25 = 00011001

Mantener los bits lsb y limpiar los msb 
input    00011001
mask   & 00001111
       __________
         00001001 = 9 

*/


/*

25 = 00011001
87 = 01010111

Operación de 25 AND 87
    00011001
  & 01010111
  __________
    00010001 = 17 

*/

/*

25 = 00011001
87 = 01010111

Operación de 25 OR 87
    00011001
  | 01010111
  __________
    01011111 = 95 

*/

/*

25 = 00011001
87 = 01010111

Operación de 25 XOR 87
    00011001
  ^ 01010111
  __________
    01001110 = 78 

*/

/*

25 = 00011001
87 = 01010111

Operación de NOT 87
  ~ 01010111
  __________
    10101000 = -88

*/

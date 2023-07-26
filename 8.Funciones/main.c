/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdint.h>

void Funcion_mensaje(void)
{
    printf("Hey suscribete!!\r\n");
}

void Funcion_prueba(float data)
{
    printf("Valor flotante %.02f \r\n",data);
}

uint32_t mult(uint16_t valor1, uint16_t valor2)
{
    return (valor1*valor2);
}

int main()
{
    uint32_t resul = 0;
    printf("Curso C Embebido \r\n");
    Funcion_mensaje();
    Funcion_prueba(0.25);
    
    printf("Multiplicacion es igual = %d",(mult(2,4)));
    return 0;
}






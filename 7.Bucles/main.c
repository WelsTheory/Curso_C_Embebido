/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdint.h>

int main()
{
    for(uint32_t i = 0; i < 5; i++)
    {
        if(i == 3)
        {
            break;
        }
        printf("Curso de C Embebido \r\n");
    }
    
    for(uint32_t i = 0; i < 5; i++)
    {
        if(i == 3)
        {
            printf("Dentro del IF \r\n");
            continue;
        }
        printf("Valor de i %d\r\n",i);
    }
    
    
    /*
    for(;;)
    {
        printf("Curso de C Embebido \r\n");
    }*/
    
    uint32_t x = 0;
    while(x < 5)
    {
        printf("Estoy dentro del while \r\n");
        x++;
    }
    //
    
    uint32_t a = 0;
    do
    {
       printf("El valor de a es 0 \r\n"); 
    }while(a != 0);
    
    
    
    
    return 0;
}



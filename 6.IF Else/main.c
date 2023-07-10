/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool verdad = true;
    bool falso = false;
    
    printf("Curso de C Embebido \r\n");
    
    printf("Valor de verdad: %d \r\n",verdad);
    printf("Valor de falso: %d \r\n",falso);
    
    printf("-----------------------\r\n");
    
    int a = 8, b = 10;
    printf("b es mayor a : %d \r\n",b > a);
    printf("a es mayor b : %d \r\n",a > b);
    
    int c = 11, d = 11;
    printf("c es menor d : %d \r\n",c < d);
    printf("d es menor igual c : %d \r\n",c <= d);

    int x = 33, y = 32;
    printf("x es identico y : %d \r\n",x == y);
    printf("x es diferente y : %d \r\n",x != y);
    
    printf("-----------------------\r\n");
    printf("Logical AND &&: %d \r\n", b>0 && a>9);
    
    printf("Logical OR ||: %d \r\n", b>0 || a>9);
    
    printf("Logical NOT !: %d \r\n", !(a>0));
    
    printf("-----------------------\r\n");
    
    int var = 9;
    
    if( var == 10)
    {
        printf("Entraste al IF \r\n");
    }
    else if( var != 10)
    {
         printf("Entraste al ELSE IF \r\n");
    }
    else
    {
        printf("Entraste al ELSE \r\n");
    }
    
    printf("-----------------------\r\n");
    
    int channel = 11;
    switch(channel)
    {
        case 1:
            printf("Canal 1 \r\n");
            break;
        case 2:
            printf("Canal 2 \r\n");
            break;
        case 3:
            printf("Canal 3 \r\n");
            break;
        case 4:
            printf("Canal 4 \r\n");
            break;
        case 5:
            printf("Canal 5 \r\n");
            break;
        case 6:
            printf("Canal 6 \r\n");
            break;
        case 7:
            printf("Canal 7 \r\n");
            break;
        case 8:
            printf("Canal 8 \r\n");
            break;
        case 9:
            printf("Canal 9 \r\n");
            break;
        case 10:
            printf("Canal 10 \r\n");
            break;
        default:
            printf("No es ninguno \r\n");
            break;
    }
    // se coloca aca despues del break

    return 0;
}







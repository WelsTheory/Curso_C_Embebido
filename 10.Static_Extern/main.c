#include <stdint.h>
#include <stdio.h>

/*
void funcion1(int varX)
{
    varX++;
    printf("Funcion 1: %d \r\n",varX);
}

void funcion2(int varX)
{
    varX++;
    printf("Funcion 2: %d \r\n",varX);
}

void funcion1(int varX)
{
    int x = 5, y;
    y = x + varX;
    printf("Valor Y: %d \r\n",y);
}

int* funcion1(int varX)
{
    printf("Funcion 1 varX: %d \n\r",varX);
    printf("Direccion 1 varX: %p \n\r",&varX);
    return &varX;
}

int varX;

void funcion1(int varX1)
{
    printf("Funcion 1 varX: %d \n\r",varX1);
    printf("Direccion 1 varX: %p \n\r",&varX1);
}

void funcion2(int varX2)
{
    printf("Funcion 2 varX: %d \n\r",varX2);
    printf("Direccion 2 varX: %p \n\r",&varX2);
}*/

#include "delay.h"

int varX;

static void funcion1(int varX)
{
    int x = 5;
    static int y = 0;
    y = x + varX + y;
    printf("Valor Y: %d \r\n",y);
}

int main()
{
    printf("Curso de C Embebido \r\n");
    
    delay();
    
    /*
    
    funcion1(4);
    printf("-------------\r\n");
    funcion1(2);
    funcion1(0);
    
    /*funcion1(5);
	funcion2(10);
	varX = 15;
	printf("Funcion M varX: %d \n\r",varX);
	printf("Direccion M varX: %p \n\r",&varX);
    
    //int *dir1_p = funcion1(5);
    //printf("Main %d", *dir1_p);
    /*funcion1(5);
    printf("Valor Y: %d \r\n",y);*/
    return 0;
}

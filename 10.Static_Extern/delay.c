#include <stdint.h>
#include <stdio.h>

extern int varX;

void delay(void)
{
    for(varX = 0; varX < 100; varX++);
}
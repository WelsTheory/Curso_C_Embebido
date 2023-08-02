
#include <stdio.h>
#include <stdint.h>


int main()
{
    float const variable = 8.20;
    
    float *varX = (float *)&variable;
    
    printf("Curso C Embebido \r\n");
    
    printf("Valor : %.2f \r\n",variable);
    
    *varX = 20.54;
    
    printf("Valor : %.2f \r\n",variable);

    return 0;
}

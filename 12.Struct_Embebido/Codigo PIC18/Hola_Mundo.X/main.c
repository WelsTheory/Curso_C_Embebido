
#include <xc.h>
#include "Configuracion.h"

typedef struct{
    uint8_t TRIS_A;
    uint8_t TRIS_B;
    uint8_t TRIS_C;
    uint8_t TRIS_D;
    uint8_t TRIS_E;
}gpio_tris_t;

#define GPIO_IN_OUT ((gpio_tris_t *) 0XF92)

typedef struct{
    uint8_t LAT_A;
    uint8_t LAT_B;
    uint8_t LAT_C;
    uint8_t LAT_D;
    uint8_t LAT_E;
}gpio_lat_t;

#define GPIO_OUT ((gpio_lat_t *) 0XF89)

int main(void)
{
    GPIO_IN_OUT->TRIS_D = 0x00;
    GPIO_IN_OUT->TRIS_B = 0XFF;
    while(1)
    {
        GPIO_OUT->LAT_D ^= 0XFF;
        __delay_ms(500);
    }
    return 0;
}

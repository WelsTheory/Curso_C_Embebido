#include <stdint.h>
#include <stdio.h>

#pragma pack(1)

typedef struct
{
    float distancia;
    float precio;
}uber_t;

void calcular_precio(uber_t * data)
{
    data->precio = data->distancia * 2.5;
    printf("Precio FUNCION: %.2f\r\n",data->precio);
}

int main()
{
    uber_t uberX = {
        .precio = 0.0,
        .distancia = 10.0
    };
    printf("****** ANTES DE LA FUNCION ******\r\n");
    printf("Precio Carrera: %.2f\r\n",uberX.precio);
    calcular_precio(&uberX);
    printf("****** DESPUES DE LA FUNCION ******\r\n");
    printf("Precio Carrera: %.2f\r\n",uberX.precio);

    return 0;
}

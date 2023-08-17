#include <stdint.h>

#pragma pack(1)

typedef struct
{
	char color[1];// 1 bytes
	uint16_t data;// 2 bytes
	uint32_t id_carro;//4 bytes
	float gasolina;// 4 bytes
}uber_t;


uber_t uberBlack;

int main(void)
{
	uint32_t sizestruct = sizeof(uber_t);

	uber_t uberX ={
		.gasolina = 22.5,
		.id_carro = 255
	};
	uberX.id_carro = 0xFF204545;
	uberX.gasolina = 23.2;
	uberBlack.color[0] = 'R';
	for(;;);
}

#include <stdio.h>
#include <stdint.h>

typedef union
{
  char dato1;
  uint16_t dato2;
} ejemplo_union_t;

typedef struct
{
  uint8_t trueData:4;
  uint8_t falseData:5;
} data_t;

typedef union
{
  struct
  {
    unsigned TRISD0:1;
    unsigned TRISD1:1;
    unsigned TRISD2:1;
    unsigned TRISD3:1;
    unsigned TRISD4:1;
    unsigned TRISD5:1;
    unsigned TRISD6:1;
    unsigned TRISD7:1;
  };
} trisd_bits_t;

int
main ()
{
  data_t X;
  printf ("Curso C Embebido \r\n");
  printf ("Size struct data_t: %ld \r\n", sizeof (data_t));
  X.trueData = 10;
  X.falseData = 31;
  printf ("trueData: %d \r\n", X.trueData);
  printf ("falseData: %d \r\n", X.falseData);

  printf ("****************PARTE 2****************************\r\n");
  printf ("Size union ejemplo_union_t: %ld \r\n", sizeof (ejemplo_union_t));
  ejemplo_union_t Y;

  Y.dato1 = 125;
  printf ("dato1: %d \r\n", Y.dato1);

  Y.dato2 = 1200;
  printf ("dato2: %d \r\n", Y.dato2);
  printf ("dato1: %d \r\n", Y.dato1);

  trisd_bits_t TRISDbits;
  TRISDbits.TRISD0 = 0;
  return 0;
}
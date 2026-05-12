#include <stdio.h>

void main()
{
  int a = 5, b = 5, c = 5, d = 5;

  // pre incremento
  printf("Pre-incremento %d \n", a++);

  // pos incremento
  printf("Pos-incremento %d \n", b++);

  printf("Valores final %d %d\n", a, b);

  // pre decremento
  printf("Pre-decremento %d \n", --c);

  // pos decremento
  printf("Pos-decremento %d \n", d--);

  printf("Valores finais %d %d %d %d\n", a, b, c, d);
}
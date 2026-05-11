#include <stdio.h>

void main()
{
  // operadores aritmeticos
  int a = 1, b = -2, c = 3;

  // positivo
  printf("positivo 1 eh: %d\n", +a);
  printf("positivo (-2) eh: %d\n", +b);

  // negativo
  printf("negativo (1) eh: %d\n", -a);
  printf("negativo (-2) eh: %d\n", -b);

  // adicao
  printf("adicao 1 + (-2) = %d\n", a + b);

  // sbtracao
  printf("subtracao 1 - (-2) = %d\n", a - b);

  // divisao
  printf("divisao de -2/1 = %d\n", b / a);

  // multiplicacao
  printf("multiplicacao de 2*5 = %d\n", 2 * 5);

  // modulo/resto da divisao
  printf("modulo de 3%%2 = %d\n", c % 2);
}
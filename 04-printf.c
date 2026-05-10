#include <stdio.h>

void main()
{
  // caracteres
  char caractere = 'a';           // 1 byte / -127 a 127
  unsigned char caractere2 = 'C'; // 0 a 255
  printf("Imprimindo a variavel do tipo char: %c\n", caractere);
  printf("Texto %c texto2 %c\n", caractere, caractere2);

  // numero inteiros
  short int inteiro_curto = 1; // 2 bytes
  int inteiro = 1;             // 4 bytes
  long int inteiro_longo = 1;  // 4 bytes
  printf("%i\n", inteiro_curto);
  printf("%i\n", inteiro);
  printf("%li\n", inteiro_longo);

  unsigned short int inteiro_curto_positivo = 1;
  unsigned int inteiro_positivo = 1;
  unsigned long int inteiro_longo_positivo = 1;
  printf("%u\n", inteiro_curto_positivo);
  printf("%u\n", inteiro_positivo);
  printf("%lu\n", inteiro_longo_positivo);

  // numeros reais
  float num_real = 2.3f;                  // 4 bytes
  double num_real_duplo = 2.2;            // 8 bytes
  long double num_duplo_longo = 3.9e-23L; // 16 bytes
  printf("%f\n", num_real);
  printf("%f\n", num_real_duplo);
  printf("%e\n", (double)num_duplo_longo);

  // constante nomeada
  const int MAX = 100;
  printf("%i", MAX);
}
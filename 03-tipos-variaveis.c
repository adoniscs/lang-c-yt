#include <stdio.h>

void main()
{
  // caracteres
  char caractere;           // 1 byte / -127 a 127
  unsigned char caractere2; // 0 a 255

  // numero inteiros
  short int inteiro_curto; // 2 bytes
  int inteiro;             // 4 bytes
  long int inteiro_longo;  // 4 bytes

  unsigned short int inteiro_curto_positivo;
  unsigned int inteiro_positivo;
  unsigned long int inteiro_longo_positivo;

  // numeros reais
  float num_real;              // 4 bytes
  double num_real_duplo;       // 8 bytes
  long double num_duplo_longo; // 16 bytes

  // constante nomeada
  const int MAX = 100;
}
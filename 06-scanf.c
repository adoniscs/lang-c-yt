#include <stdio.h>

void main()
{
  int idade;
  float altura;
  char letra_favorita;

  printf("Qual a sua idade? ");
  scanf(" %i", &idade);

  printf("Qual a sua altura? ");
  scanf(" %f", &altura);

  printf("Qual a sua letra favorita? ");
  scanf(" %c", &letra_favorita);

  printf("Sua idade e: %i anos\n"
         "Sua altura e: %.2fcm\n"
         "Sua letra favorita e: %c\n",
         idade, altura, letra_favorita);

  printf("Enderecos da variaveis: \n %i, %f, %c", &idade, &altura, &letra_favorita);
}
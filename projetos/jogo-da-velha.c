#include <stdio.h>
#include <stdlib.h>

void desenhaTabuleiro(char tabuleiro[3][3])
{
  system("cls");
  printf("\n");

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf(" %c ", tabuleiro[i][j]);
      if (j < 2)
      {
        printf("|");
      }
    }
    printf("\n");
    if (i < 2)
    {
      printf("---+---+---\n");
    }
  }
  printf("\n");
}

int main(int argc, char *argv[])
{
  char tabuleiro[3][3] = {
      '1', '2', '3',
      '4', '5', '6',
      '7', '8', '9'};
  int jogada = 0;
  int posicao;

  desenhaTabuleiro(tabuleiro);

  return 0;
}
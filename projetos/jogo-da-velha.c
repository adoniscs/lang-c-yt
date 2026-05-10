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

char jogar(char tabuleiro[][3], int posicao, char jogadorAtual)
{
  int linha = (posicao - 1) / 3;
  int coluna = (posicao - 1) % 3;

  if (tabuleiro[linha][coluna] != 'X' && tabuleiro[linha][coluna] != 'O')
  {
    tabuleiro[linha][coluna] = jogadorAtual;
    return 0;
  }

  return 1;
}

int main(int argc, char *argv[])
{
  char tabuleiro[3][3] = {
      '1', '2', '3',
      '4', '5', '6',
      '7', '8', '9'};
  int jogada = 0;
  int posicao;

  while (jogada < 9)
  {
    desenhaTabuleiro(tabuleiro);

    printf("Jogador %c, escolha uma posicao (1-9): ", (jogada % 2 == 0 ? 'X' : 'O'));
    scanf("%d", &posicao);

    if (posicao < 1 || posicao > 9)
    {
      printf("Posicao invalida! Escolha um numero entre 1 e 9.\n");
      printf("Precione Enter para continuar...");
      getchar();
      getchar();
      continue;
    }

    char jogadorAtual = (jogada % 2 == 0 ? 'X' : 'O');
    if (jogar(tabuleiro, posicao, jogadorAtual))
    {
      printf("Posicao ja ocupada! Tente novamente.\n");
      printf("Precione Enter para continuar...");
      getchar();
      getchar();
      continue;
    }

    jogada++;
  }

  printf("Fim do jogo! Precione Enter para sair...\n");
  getchar();
  getchar();

  return 0;
}
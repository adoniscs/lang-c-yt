#include <stdio.h>
#include <stdlib.h>

#define NUMERO_LINHAS 3
#define NUMERO_COLUNAS 3
/**
 * o código \033 representra o ESC
 * o comando [H move o cursor para a posição inicial (canto superior esquerdo)
 * o comando [J limpa tudo a partir do cursor
 */
void limparTela()
{
  printf("\033[H\033[J");
}

void desenhaTabuleiro(char tabuleiro[NUMERO_LINHAS][NUMERO_COLUNAS])
{
  limparTela();
  printf("\n");

  for (int i = 0; i < NUMERO_LINHAS; i++)
  {
    for (int j = 0; j < NUMERO_COLUNAS; j++)
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

char jogar(char tabuleiro[NUMERO_LINHAS][NUMERO_COLUNAS], int posicao, char jogadorAtual)
{
  int linha = (posicao - 1) / NUMERO_LINHAS;
  int coluna = (posicao - 1) % NUMERO_COLUNAS;

  if (tabuleiro[linha][coluna] != 'X' && tabuleiro[linha][coluna] != 'O')
  {
    tabuleiro[linha][coluna] = jogadorAtual;
    return 0;
  }

  return 1;
}

char verificaVitoria(char tabuleiro[NUMERO_LINHAS][NUMERO_COLUNAS])
{
  for (int i = 0; i < NUMERO_LINHAS; i++)
  {
    if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2])
    {
      return 1;
    }

    if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i])
    {
      return 1;
    }
  }

  if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2])
  {
    return 1;
  }

  if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0])
  {
    return 1;
  }

  return 0;
}

int main(int argc, char *argv[])
{
  char tabuleiro[NUMERO_LINHAS][NUMERO_COLUNAS] = {
      '1', '2', '3',
      '4', '5', '6',
      '7', '8', '9'};
  int jogada = 0;
  int posicao;

  while (jogada < 9)
  {
    desenhaTabuleiro(tabuleiro);

    printf("Jogador %c, escolha uma posicao (1-9): ",
           (jogada % 2 == 0 ? 'X' : 'O'));
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

    if (verificaVitoria(tabuleiro))
    {
      desenhaTabuleiro(tabuleiro);
      printf("Jogador %c venceu!!!\n", jogadorAtual);
      break;
    }

    jogada++;
  }

  if (jogada == 9)
  {
    desenhaTabuleiro(tabuleiro);
    printf("Deu velha!!!\n");
  }

  printf("Fim do jogo! Precione Enter para sair...\n");
  getchar();
  getchar();

  return 0;
}

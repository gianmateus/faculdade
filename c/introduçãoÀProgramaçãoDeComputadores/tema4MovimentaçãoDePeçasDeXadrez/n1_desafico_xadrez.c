#include <stdio.h>

int main() {

  // Definição dos movimentos

  const int MOVIMENTO_TORRE = 5;
  const int MOVIMENTO_BISPO = 5;
  const int MOVIMENTO_RAINHA = 8;

  // --- Movimentação da TORRE ---
  // Utilizando a estrutura FOR: ideal quando sabemos o número exato de
  // repetições.
  printf("Movimento da torre:\n");
  for (int i = 0; i < MOVIMENTO_TORRE; i++) {
    printf("Direita\n");
  }
  printf("\n");

  // --- Movimentação do BISPO ---
  // Utilizando a estrutura WHILE: executa enquanto a condição for verdadeira.
  printf("Moviemnto do Bispo:\n");
  int b = 1;
  while (b <= MOVIMENTO_BISPO) {
    printf("Cima, Direita\n");
    b++;
  }
  printf("\n");

  // --- Movimentação da RAINHA ---
  // Utilizando a estrutura DO-WHILE: garante que o código execute ao menos uma
  // vez.
  printf("Movimento da Rainha:\n");
  int r = 1;
  do {
    printf("Esquerda\n");
    r++;
  } while (r <= MOVIMENTO_RAINHA);
  return 0;
}
#include <stdio.h>

void moverTorre(int casas) {
  if (casas > 0) {
    printf("Direita\n");
    moverTorre(casas - 1);
  }
}

void moverBispo(int casas) {
  if (casas > 0) {
    printf("Cima, Direita\n");
    moverBispo(casas - 1);
  }
}

void moverRainha(int casas) {
  if (casas > 0) {
    printf("Esquerda\n");
    moverRainha(casas - 1);
  }
}

int main() {

  // Definição dos movimentos

  const int MOVIMENTO_TORRE = 5;
  const int MOVIMENTO_BISPO = 5;
  const int MOVIMENTO_RAINHA = 8;

  // --- Movimentação da TORRE ---

  printf("Movimento da torre:\n");
  moverTorre(MOVIMENTO_TORRE);

  // --- Movimentação do BISPO ---
  printf("Moviemnto do Bispo:\n");
  moverBispo(MOVIMENTO_BISPO);

  // --- Movimentação da RAINHA ---
  printf("Movimento da Rainha:\n");
  moverRainha(MOVIMENTO_RAINHA);

  // --- Movimentação do CAVALO ---
  int movimentoCompleto = 1;
  while (movimentoCompleto--) {
    for (int i = 0; i < 2; i++) {
      printf("Cima\n");
    }
    printf("Direita\n");
  }

  return 0;
}
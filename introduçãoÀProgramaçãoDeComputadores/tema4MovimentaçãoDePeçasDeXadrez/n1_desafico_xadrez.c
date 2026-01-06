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

void moverCavalo(int casasCima, int casasDireita) {
  if (casasCima > 0) {
    printf("Cima\n");
    moverCavalo(casasCima - 1, casasDireita);
  } else if (casasDireita > 0) {
    printf("Direita\n");
    moverCavalo(0, casasDireita - 1);
  }
}

int main() {

  // Definição dos movimentos

  const int MOVIMENTO_TORRE = 5;
  const int MOVIMENTO_BISPO = 5;
  const int MOVIMENTO_RAINHA = 8;
  const int MOVIMENTO_CAVALO_CIMA = 2;
  const int MOVIMENTO_CAVALO_DIREITA = 1;

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
  printf("Movimento do Cavalo:\n");
  moverCavalo(MOVIMENTO_CAVALO_CIMA, MOVIMENTO_CAVALO_DIREITA);

  return 0;
}
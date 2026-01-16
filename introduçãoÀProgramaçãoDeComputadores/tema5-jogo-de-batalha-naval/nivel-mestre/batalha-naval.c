#include <stdio.h>

#define SIZE 10
#define SKILL_SIZE 5

// Função para imprimir o tabuleiro conforme os requisitos
void exibirTabuleiro(int tabuleiro[SIZE][SIZE]) {
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      if (tabuleiro[i][j] == 3)
        printf("N "); // Navio
      else if (tabuleiro[i][j] == 5)
        printf("H "); // Habilidade
      else
        printf(". "); // Água (0)
    }
    printf("\n");
  }
  printf("\n");
}

int main() {
  int tabuleiro[SIZE][SIZE] = {0};

  // 1. Posicionando alguns navios (Exemplo)
  tabuleiro[1][1] = 3;
  tabuleiro[1][2] = 3;
  tabuleiro[8][8] = 3;

  // 2. Definindo as matrizes de habilidades (5x5)
  int cone[SKILL_SIZE][SKILL_SIZE] = {0};
  int cruz[SKILL_SIZE][SKILL_SIZE] = {0};
  int octaedro[SKILL_SIZE][SKILL_SIZE] = {0};

  // 3. Construindo as matrizes de habilidade com loops e condicionais
  for (int i = 0; i < SKILL_SIZE; i++) {
    for (int j = 0; j < SKILL_SIZE; j++) {
      // Lógica do CONE (Triângulo apontando para baixo)
      if (i == 0 && j == 2)
        cone[i][j] = 1;
      else if (i == 1 && j >= 1 && j <= 3)
        cone[i][j] = 1;
      else if (i == 2)
        cone[i][j] = 1;

      // Lógica da CRUZ
      if (i == 2 || j == 2)
        cruz[i][j] = 1;

      // Lógica do OCTAEDRO (Losango)
      // Distância de Manhattan: |x - centro| + |y - centro| <= raio
      if ((i == 1 && j == 2) || (i == 2 && (j >= 1 && j <= 3)) ||
          (i == 3 && j == 2)) {
        octaedro[i][j] = 1;
      }
    }
  }

  // 4. Sobrepondo Habilidades no Tabuleiro
  // Vamos definir pontos de origem (centro da matriz de habilidade)
  int origemConeL = 2, origemConeC = 2;
  int origemCruzL = 6, origemCruzC = 3;
  int origemOctaL = 5, origemOctaC = 7;

  // Função de sobreposição lógica (Pode ser repetida para cada habilidade)
  for (int i = 0; i < SKILL_SIZE; i++) {
    for (int j = 0; j < SKILL_SIZE; j++) {
      // Calcular posição no tabuleiro real
      // Subtraímos (SKILL_SIZE/2) para centralizar a matriz de habilidade na
      // origem
      int tabuleiroL = origemConeL + (i - 2);
      int tabuleiroC = origemConeC + (j - 2);

      // Verifica se está dentro dos limites do tabuleiro
      if (tabuleiroL >= 0 && tabuleiroL < SIZE && tabuleiroC >= 0 &&
          tabuleiroC < SIZE) {
        if (cone[i][j] == 1)
          tabuleiro[tabuleiroL][tabuleiroC] = 5;
      }

      // Repetindo lógica para Cruz e Octaedro (Simplificado para o exemplo)
      int tabCruzL = origemCruzL + (i - 2);
      int tabCruzC = origemCruzC + (j - 2);
      if (tabCruzL >= 0 && tabCruzL < SIZE && tabCruzC >= 0 &&
          tabCruzC < SIZE) {
        if (cruz[i][j] == 1)
          tabuleiro[tabCruzL][tabCruzC] = 5;
      }

      int tabOctaL = origemOctaL + (i - 2);
      int tabOctaC = origemOctaC + (j - 2);
      if (tabOctaL >= 0 && tabOctaL < SIZE && tabOctaC >= 0 &&
          tabOctaC < SIZE) {
        if (octaedro[i][j] == 1)
          tabuleiro[tabOctaL][tabOctaC] = 5;
      }
    }
  }

  // 5. Exibição Final
  printf("--- TABULEIRO DE BATALHA NAVAL (NÍVEL MESTRE) ---\n");
  exibirTabuleiro(tabuleiro);

  return 0;
}
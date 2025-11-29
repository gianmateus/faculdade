#include <stdio.h>

int main() {

  // Carta 1
  char estado1, codigo1[10], nomeCidade1[50];
  int populacao1, pontosTuristicos1;
  float area1, pib1, densidade1, pibPerCapita1, superPoder1;

  // Carta 2
  char estado2, codigo2[10], nomeCidade2[50];
  int populacao2, pontosTuristicos2;
  float area2, pib2, densidade2, pibPerCapita2, superPoder2;

  // Entrada de dados - Carta 1
  printf("Carta 1\n");
  printf("Digite o Estado (letra): ");
  scanf("%c", &estado1);

  printf("Digite o Codigo da carta (ex:A01): ");
  scanf("%s", codigo1);

  printf("Digite o Nome da Cidade: ");
  scanf("%s", nomeCidade1);

  printf("Digite a Populacao: ");
  scanf("%d", &populacao1);

  printf("Digite os Pontos Turisticos: ");
  scanf("%d", &pontosTuristicos1);

  printf("Digite a Area: ");
  scanf("%f", &area1);

  printf("Digite o PIB: ");
  scanf("%f", &pib1);

  // printf("Digite a Densidade: ");
  // scanf("%f", &densidade1);

  // printf("Digite o PIB per Capita: ");
  // scanf("%f", &pibPerCapita1);

  // Entrada de dados - Carta 2
  printf("Carta 2\n");
  printf("Digite o Estado (letra): ");
  scanf("%c", &estado2);

  printf("Digite o Codigo da carta (ex:A01): ");
  scanf("%s", codigo2);

  printf("Digite o Nome da Cidade: ");
  scanf("%s", nomeCidade2);

  printf("Digite a Populacao: ");
  scanf("%d", &populacao2);

  printf("Digite os Pontos Turisticos: ");
  scanf("%d", &pontosTuristicos2);

  printf("Digite a Area: ");
  scanf("%f", &area2);

  printf("Digite o PIB: ");
  scanf("%f", &pib2);

  // printf("Digite a Densidade: ");
  // scanf("%f", &densidade2);

  // printf("Digite o PIB per Capita: ");
  // scanf("%f", &pibPerCapita2);

  // Cálculos (sem estruturas de decisão ou repeticão)
  // Densidade = populacao / area
  // Pib per capita = pib / populacao

  densidade1 = (float)populacao1 / area1;
  pibPerCapita1 = pib1 / (float)populacao1;

  densidade2 = (float)populacao2 / area2;
  pibPerCapita2 = pib2 / (float)populacao2;

  // Saida formatada

  printf("Carta 1\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Pontos Turisticos: %d\n", pontosTuristicos1);
  printf("Area: %.2f\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Densidade: %.2f\n", densidade1);
  printf("PIB per Capita: %.2f\n", pibPerCapita1);

  printf("Carta 2\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Pontos Turisticos: %d\n", pontosTuristicos2);
  printf("Area: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Densidade: %.2f\n", densidade2);
  printf("PIB per Capita: %.2f\n", pibPerCapita2);

  // Batalha das cartas

  superPoder1 = (float)populacao1 + area1 + pib1 + pibPerCapita1 +
                pontosTuristicos1 - densidade1;
  superPoder2 = (float)populacao2 + area2 + pib2 + pibPerCapita2 +
                pontosTuristicos2 - densidade2;

  if (superPoder1 > superPoder2) {
    printf("Carta 1 venceu\n");
  } else {
    printf("Carta 2 venceu\n");
  }

  return 0;
}
#include <stdio.h>

int main() {

  char estado1, estado2, codigo1[10], codigo2[10], nomeCidade1[50],
      nomeCidade2[50];
  int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2, carta1,
      carta2;
  float area1, area2, densidade1, densidade2, pibPerCapita1, pibPerCapita2,
      superPoder1, superPoder2, pib1, pib2;

  // Entrada de dados - Carta 1

  printf("Carta 1\n");
  printf("Digite o Estado (letra): ");
  scanf(" %c", &estado1);
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

  printf("Digite o PIB (use ponto para decimais): ");
  scanf("%f", &pib1);

  // Entrada de dados - Carta 2

  printf("Carta 2\n");
  printf("Digite o Estado (letra): ");
  scanf(" %c", &estado2);
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

  printf("Digite o PIB (use ponto para decimais): ");
  scanf("%f", &pib2);

  densidade1 = (float)populacao1 / area1;
  pibPerCapita1 = pib1 / (float)populacao1;

  densidade2 = (float)populacao2 / area2;
  pibPerCapita2 = pib2 / (float)populacao2;

  // Escolha dos atributos a serem comparados.
  // Usaremos operadores lógicos.
  // Se a carta 1 tiver 2 atributos maiores que a carta 2, ela vence.
  // Se a carta 1 tiver 2 atributos menores que a carta 2, ela perde.
  // Se a carta 1 tiver 1 atributo maior e 1 menor que a carta 2, ela empata.

  int escolha1, escolha2;
  int resultado1, resultado2;

  printf("### Batalha entre %s e %s ###\n", nomeCidade1, nomeCidade2);
  printf("Escolha o primeiro atributo para comparação: \n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Número de pontos turísticos\n");
  printf("5. Densidade demográfica\n");
  scanf("%d", &escolha1);

  switch (escolha1) {
  case 1:
    printf("O atributo escolhido foi POPULAÇÃO.\n");
    resultado1 = populacao1 > populacao2 ? 1 : 0;
    break;
  case 2:
    printf("O atributo escolhido foi ÁREA.\n");
    resultado1 = area1 > area2 ? 1 : 0;
    break;
  case 3:
    printf("O atributo escolhido foi PIB.\n");
    resultado1 = pib1 > pib2 ? 1 : 0;
    break;
  case 4:
    printf("O atributo escolhido foi NÚMERO DE PONTOS TURÍSTICOS.\n");
    resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
    break;
  case 5:
    printf("O atributo escolhido foi DENSIDADE DEMOGRAFICA.\n");
    resultado1 = densidade1 < densidade2 ? 1 : 0;
    break;
  default:
    printf("Opção inválida!\n");
    break;
  }

  printf("Escolha o segundo atributo para comparação: \n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Número de pontos turísticos\n");
  printf("5. Densidade demográfica\n");
  scanf("%d", &escolha2);

  switch (escolha2) {
  case 1:
    printf("O atributo escolhido foi POPULAÇÃO.\n");
    resultado2 = populacao1 > populacao2 ? 1 : 0;
    break;
  case 2:
    printf("O atributo escolhido foi ÁREA.\n");
    resultado2 = area1 > area2 ? 1 : 0;
    break;
  case 3:
    printf("O atributo escolhido foi PIB.\n");
    resultado2 = pib1 > pib2 ? 1 : 0;
    break;
  case 4:
    printf("O atributo escolhido foi NÚMERO DE PONTOS TURÍSTICOS.\n");
    resultado2 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
    break;
  case 5:
    printf("O atributo escolhido foi DENSIDADE DEMOGRAFICA.\n");
    resultado2 = densidade1 < densidade2 ? 1 : 0;
    break;
  default:
    printf("Opção inválida!\n");
    break;
  }

  if (resultado1 == 1 && resultado2 == 1) {
    printf("Carta 1 venceu!\n");
  } else if (resultado1 == 0 && resultado2 == 0) {
    printf("Carta 2 venceu!\n");
  } else {
    printf("Empate!\n");
  }
}
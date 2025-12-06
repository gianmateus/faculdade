#include <stdio.h>

int main() {

  // Carta 1
  char estado1, codigo1[10], nomeCidade1[50];
  int populacao1, pontosTuristicos1, carta1, carta2;
  float area1, pib1, densidade1, pibPerCapita1, superPoder1;

  // Carta 2
  char estado2, codigo2[10], nomeCidade2[50];
  int populacao2, pontosTuristicos2;
  float area2, pib2, densidade2, pibPerCapita2, superPoder2;

  // Entrada de dados - Carta 1
  printf("Carta 1\n");
  printf("Digite o Estado (letra): ");
  scanf(" %c", &estado1); // Added space before %c to consume newline

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
  scanf(" %c", &estado2); // Added space before %c to consume newline

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

  // superPoder1 = (float)populacao1 + area1 + pib1 + pibPerCapita1 +
  //               pontosTuristicos1 - densidade1;
  // superPoder2 = (float)populacao2 + area2 + pib2 + pibPerCapita2 +
  //               pontosTuristicos2 - densidade2;

  // if (superPoder1 > superPoder2) {
  //   printf("Carta 1 venceu\n");
  // } else {
  //   printf("Carta 2 venceu\n");
  // }

  // Batalha das cartas usando Switch

  int escolha;
  printf("### Batalha entre %s e %s ###\n", nomeCidade1, nomeCidade2);
  printf("Escolha o atributo para comparação: \n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Número de pontos turísticos\n");
  printf("5. Densidade demográfica\n");
  scanf("%d", &escolha);

  switch (escolha) {
  case 1:
    printf("O atributo escolhido foi POPULAÇÃO.\n");
    if (populacao1 > populacao2) {
      printf("Carta 1 (%s) venceu! A população é de: %d\n", nomeCidade1,
             populacao1);
    } else if (populacao2 > populacao1) {
      printf("Carta 2 (%s) venceu! A população é de: %d\n", nomeCidade2,
             populacao2);
    } else {
      printf("Empate!\n");
    }
    break;
  case 2:
    printf("O atributo escolhido foi ÁREA.\n");
    if (area1 > area2) {
      printf("Carta 1 (%s) venceu! A área é de: %.2f\n", nomeCidade1, area1);
    } else if (area2 > area1) {
      printf("Carta 2 (%s) venceu! A área é de: %.2f\n", nomeCidade2, area2);
    } else {
      printf("Empate!\n");
    }
    break;
  case 3:
    printf("O atributo escolhido foi PIB.\n");
    if (pib1 > pib2) {
      printf("Carta 1 (%s) venceu! O PIB é de: %.2f\n", nomeCidade1, pib1);
    } else if (pib2 > pib1) {
      printf("Carta 2 (%s) venceu! O PIB é de: %.2f\n", nomeCidade2, pib2);
    } else {
      printf("Empate!\n");
    }
    break;
  case 4:
    printf("O atributo escolhido foi NÚMERO DE PONTOS TURÍSTICOS.\n");
    if (pontosTuristicos1 > pontosTuristicos2) {
      printf("Carta 1 (%s) venceu! O número de pontos turísticos é de: %d\n",
             nomeCidade1, pontosTuristicos1);
    } else if (pontosTuristicos2 > pontosTuristicos1) {
      printf("Carta 2 (%s) venceu! O número de pontos turísticos é de: %d\n",
             nomeCidade2, pontosTuristicos2);
    } else {
      printf("Empate!\n");
    }
    break;
  case 5:
    printf("O atributo escolhido foi DENSIDADE DEMOGRÁFICA.\n");
    if (densidade1 < densidade2) {
      printf("Carta 1 (%s) venceu! A densidade demográfica é de: %.2f\n",
             nomeCidade1, densidade1);
    } else if (densidade2 < densidade1) {
      printf("Carta 2 (%s) venceu! A densidade demográfica é de: %.2f\n",
             nomeCidade2, densidade2);
    } else {
      printf("Empate!\n");
    }
    break;
  default:
    printf("Opção inválida!\n");
    break;
  }

  return 0;
}

/*
Implementando Comparações Avançadas com Atributos Múltiplos em C


Este é o desafio final do Super Trunfo! Coloque em prática tudo o que você
aprendeu e mostre suas habilidades de programação!


O que você vai fazer


Prepare-se para o desafio final do Super Trunfo! Agora você integrará tudo o que
aprendeu sobre estruturas de decisão em C para criar uma lógica de comparação
ainda mais sofisticada. Você permitirá que o jogador escolha dois atributos para
comparar as cartas de países, implementará menus dinâmicos com switch e usará o
operador ternário para tornar seu código mais elegante. Este desafio é a
culminação dos desafios anteriores, onde você cadastrou as cartas e implementou
a comparação com um único atributo.


Requisitos funcionais


Escolha de Dois Atributos: O sistema deve permitir que o jogador escolha dois
atributos numéricos diferentes para a comparação das cartas, através de menus
interativos. Implemente a lógica necessária para garantir que o jogador não
possa selecionar o mesmo atributo duas vezes.

Comparação com Múltiplos Atributos: Implemente a lógica para comparar as duas
cartas com base nos dois atributos escolhidos. Para cada atributo, a regra geral
é: vence a carta com o maior valor. A exceção continua sendo a Densidade
Demográfica, onde vence a carta com o menor valor.

Soma dos Atributos: Após comparar os dois atributos individualmente, o sistema
deve somar os valores dos atributos para cada carta. A carta com a maior soma
vence a rodada.

Tratamento de Empates: Implemente a lógica para tratar empates. Se a soma dos
atributos das duas cartas for igual, exiba a mensagem "Empate!".

Menus Dinâmicos: Crie menus interativos e dinâmicos usando switch. "Dinâmicos"
significa que, por exemplo, após o jogador escolher o primeiro atributo, esse
atributo não deve mais aparecer como opção para a escolha do segundo atributo.

Exibição Clara do Resultado: Mostre o resultado da comparação de forma clara e
organizada, incluindo:

O nome dos dois países.

Os dois atributos usados na comparação.

Os valores de cada atributo para cada carta.

A soma dos atributos para cada carta.

Qual carta venceu (ou se houve empate).

Requisitos não funcionais


Usabilidade: A interface do usuário deve ser intuitiva e fácil de navegar, com
mensagens claras e instruções para cada etapa.

Performance: O sistema deve executar as comparações e exibir os resultados
rapidamente.

Manutenibilidade: Escreva um código bem estruturado, organizado, com indentação
consistente e comentários explicativos. Use nomes de variáveis descritivos.

Confiabilidade: O sistema deve ser robusto e lidar com entradas inválidas do
usuário de forma adequada, exibindo mensagens de erro apropriadas e evitando
travamentos. Utilize o default no switch para tratar opções inválidas.

Simplificações para o nível avançado


Você pode continuar usando as cartas pré-cadastradas dos desafios anteriores.
Não precisa reimplementar o cadastro.

Foque na integração de todos os elementos: menus dinâmicos com switch,
comparações com if-else (e aninhamentos), operador ternário, cálculo da soma dos
atributos e tratamento de empates.

A comparação é feita entre apenas duas cartas.
*/
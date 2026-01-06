//
// Created by Mateus e Maria on 04.12.25.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int opcao;
    int numeroSecreto, palpite;
    int regras;

    printf("----- Menu Principal -----\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            srand(time(0));
            numeroSecreto = rand() % 10;
            printf("Digite um número de 0 a 9: ");
            scanf("%d", &palpite);
            if (numeroSecreto == palpite) {
                printf("Você acertou!");
                printf("numero secreto %d\n", numeroSecreto);
            } else {
                printf("Você errou!\n");
                printf("numero secreto %d\n", numeroSecreto);
            }
            break;
        case 2:
            printf("A explicação das regras!\n");
            printf("Digite a opção relacionada as regras do jogo\n");
            scanf("%d", &regras);
            switch (regras) {
                case 1:
                    printf("Regra 1");
                    break;
                case 2:
                    printf("Regra 2");
                    break;
                case 3:
                    printf("Regra 3");
                    break;
                default:
                    printf("regra não existe");
                    break;

            }
            break;
        case 3:
            printf("Saindo do jogo.");
            break;
        default:
            printf("Opção inválida!");
            break;
    }


}
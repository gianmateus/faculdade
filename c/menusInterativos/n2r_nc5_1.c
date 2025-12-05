//
// Created by Mateus e Maria on 04.12.25.
//

#include <stdio.h>

int main () {
    int opcao;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Execução do jogo\n");
            break;
        case 2:
            printf("As regras são.....\n");
            break;
        case 3:
            printf("Você saiu do jogo.\n");
            break;
        default:
            printf("Opção inválida");
            break;
    }

}
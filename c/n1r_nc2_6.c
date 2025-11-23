//
// Created by Mateus e Maria on 22.11.25.
//

#include <stdio.h>

int main () {
    int numero = 0, resultado;

    resultado = numero % 2;

    printf("A variável resultado é: %d\n", resultado);

    if (resultado == 0) {
        printf("O número é par\n");
    }
}
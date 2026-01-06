//
// Created by gianm on 08/11/2025.
//

#include <stdio.h>

int main(){
    int idade = 25;
    float altura = 1.75;
    char opcao = 'S';
    char nome[20] = "Sergio";

    //printf("A idade do %s é: %d\n", nome, idade);
    printf("A idade é: %d\n", idade);
    printf("O nome é: %s\n", nome);
    printf("A altura é: %.2f\n", altura);
    printf("A opção é :%c\n", opcao);
}

/*
%d: imprime um inteiro no formato decimal.
%i: equivalente a %d
%f: imprime um número  de ponto flutuante no formato padrão
%e: imprime um número de ponto flutuante no formato científico
%c: imprime um caractere
%s: imprime uma string
*/

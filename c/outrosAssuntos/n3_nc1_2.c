//
// Created by gianm on 11/11/2025.
//

#include <stdio.h>

int main () {
    int numeroNormal = 2147483647; //vlaor maximo de int
    long long int numeroGrande = 2147483647;

    printf("Número regular (int): %d\n",numeroNormal);
    printf("Número grande (long int): %ld\n",numeroGrande);

    numeroGrande = 2147483648; // valor maior que o máximo de int
    printf("Número grande atualizado (long int): %lld\n", numeroGrande);

    return 0;

}
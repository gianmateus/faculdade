#include <stdio.h>

int main() {

    int numero1 = 1, resultado;

    printf("Antes incremento %d\n", numero1);
    //numero1++;
    resultado = numero1++;
    //printf("Apos incremento %d\n", numero1);
    printf("Apos Pós-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = ++numero1;
    printf("Apos Pré-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    //numero1--;
    //printf("Apos decremento %d\n", numero1);

}


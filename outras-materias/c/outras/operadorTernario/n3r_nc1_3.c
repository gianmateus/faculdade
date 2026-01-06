//
// Created by Mateus e Maria on 06.12.25.
//

#include <stdio.h>

int main() {
    int num1 = 40, num2 = 20;
    int maior;

    num1 > num2 ? (maior = num1) : (maior = num2);

    if (num1 > num2) {
        printf("O número maior é %d\n", num1);
    } else {
        printf("O número maior é %d\n", num2);
    }

    printf("O número maior é: %d", maior);
}
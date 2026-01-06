#include <stdio.h>

int main() {

    float nota1, nota2, nota3;
    float media;

    printf("*** Programa de Cálculo de média ***\n"); // banner do programa

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &nota3);

    media = (float)(nota1 + nota2 + nota3) / 3;

    printf("A média do aluno é: %.2f\n", media);

    return 0;

}
#include <stdio.h>

int main() {
  char variavel;

  printf("Digite um valor:\n");
  scanf("%c", &variavel);

  switch (variavel) {
  case 'a':
    printf("Teste do case a\n");
    break;
  case 'b':
    printf("Teste do case b\n");
    break;
  default:
    printf("Teste do default\n");
    break;
  }
}
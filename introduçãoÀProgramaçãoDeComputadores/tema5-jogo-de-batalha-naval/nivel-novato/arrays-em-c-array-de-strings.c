#include <stdio.h>

int main() {

  char *nomes[] = {"Mateus", "Maria", "João"};

  for (int i = 0; i < 3; i++) {
    printf("%s \n", nomes[i]);
  }
  return 0;
}
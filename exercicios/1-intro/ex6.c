/* 6.Crie uma variável e não atribua nenhum valor a ela. Imprima o valor desta
 * variável */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int *x = (int *)malloc(sizeof(int));
  int y;
  printf("%d %d\n", *x, y);
}

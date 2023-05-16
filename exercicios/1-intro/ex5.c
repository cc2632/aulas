/* 5. Usando o que você já sabe sobre o printf, tente usar o scanf para ler
 * algumas variáveis do teclado.*/

#include <stdio.h>

int main() {
  printf("entre com um inteiro: ");
  int x, y;
  scanf("%d %d", &x, &y);
  printf("%d %d\n", x, y);
}

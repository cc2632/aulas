/* 4. Dentro da função main, defina uma variável do tipo inteiro e exiba ela
 * como todos os outros tipos que foram vistos na teoria */
#include <stdio.h>

int main() {
  int x = 80;
  printf("%d\n", x);
  printf("%ld\n", x);
  printf("%u\n", x);
  printf("%lu\n", x);
  printf("%f\n", x);
  printf("%lf\n", x);
  printf("%c\n", x);
  // printf("%s\n", x);
  printf("%p\n", x);
}

#include <stdio.h>

int main() {
  // 2.Dentro da função main, escreva um trecho de código que:
  // - possui duas variáveis inteiras (tipo int) com valores definidos por você
  int x = 1;
  int y = 2;

  // - possui uma terceira variável que deve receber o resultado da soma das
  // outras duas
  int z = x + y;

  // - imprima o valor de cada variável
  printf("x=%d, y=%d, z=%d\n", x, y, z);

  // - exiba o resultado das operações de soma, subtração, divisão e
  // multiplicação
  printf("%d + %d = %d\n", x, y, x+y);
  printf("%d - %d = %d\n", x, y, x-y);
  printf("%d / %d = %d\n", x, y, x/y);
  printf("%d * %d = %d\n", x, y, x*y);
  printf("%d %% %d = %d\n", x, y, x%y);

  // - exiba o resultado do incremento, decremento e resto de divisão
  printf("x=%d\n", x);
  printf("x++=%d\n", x++);
  printf("x=%d\n", x);
  printf("++x=%d\n", ++x);
  printf("x=%d\n", x);
  printf("x--=%d\n", x--);
  printf("x=%d\n", x);
  printf("--x=%d\n", --x);
}

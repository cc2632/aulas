// 3. Faça o mesmo exercício usando ponto flutuante
#include <stdio.h>

int main() {
  // 2.Dentro da função main, escreva um trecho de código que:
  // - possui duas variáveis inteiras (tipo int) com valores definidos por você
  float x = 1;
  float y = 2;

  // - possui uma terceira variável que deve receber o resultado da soma das
  // outras duas
  float z = x + y;

  // - imprima o valor de cada variável
  printf("x=%f, y=%f, z=%f\n", x, y, z);

  // - exiba o resultado das operações de soma, subtração, divisão e
  // multiplicação
  printf("%f + %f = %f\n", x, y, x + y);
  printf("%f - %f = %f\n", x, y, x - y);
  printf("%f / %f = %f\n", x, y, x / y);
  printf("%f * %f = %f\n", x, y, x * y);
  // printf("%f %% %f = %f\n", x, y, x % y);

  // - exiba o resultado do incremento, decremento e resto de divisão
  printf("x=%f\n", x);
  printf("x++=%f\n", x++);
  printf("x=%f\n", x);
  printf("++x=%f\n", ++x);
  printf("x=%f\n", x);
  printf("x--=%f\n", x--);
  printf("x=%f\n", x);
  printf("--x=%f\n", --x);
}

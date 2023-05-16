#include "ex3.h"
#include <stdio.h>
// Fazendo a divisão dos arquivos em main.c, ex3.h e ex3.c, implemente as
// seguintes funções:

// 1. int somatorio(int min, int max): retorna a soma de todos os números entre
// min e max, inclusive
// 2. int somatorioComPasso(int min, int max, int passo): igual ao anterior, mas
// usando o passo para incrementar o valor somado
// 3. int somaParImpar(int min, int max, int par): se par != 0, a soma somente
// dos números pares entre min e max. Se par = 0, a soma dos números ímpares.
// 4. int produtorio(int min, int max): retorna o produto de todos os números
// entre min e max
// 5. int fatorial(int n): retorna o fatorial do número n
// 6. void fibonacciSeq(int n): imprime a sequência de Fibonacci até n números
// 7. int fibonacci(int pos): retorna o número da sequência de Fibonacci na
// posição pos

// Use a função main para gerar os testes de todas as funções que você
// implementou.
int main() {
  int min = 1;
  int max = 5;
  int passo = 2;

  printf("somatorio(%d, %d) = %d\n", min, max, somatorio(min, max));
  printf("somatorioV2(%d, %d) = %d\n", min, max, somatorioV2(min, max));
  printf("somatorioComPasso(%d, %d, %d) = %d\n", min, max, passo,
         somatorioComPasso(min, max, passo));
  printf("somaParImpar(%d, %d, 0) = %d\n", min, max, somaParImpar(min, max, 0));
  printf("somaParImpar(%d, %d, 1) = %d\n", min, max, somaParImpar(min, max, 1));

  printf("produtorio(%d, %d) = %d\n", min, max, produtorio(min, max));
  printf("produtorioV2(%d, %d) = %d\n", min, max, produtorioV2(min, max));

  printf("fatorial(%d) = %d\n", max, fatorial(max));
  printf("fatorialV2(%d) = %d\n", max, fatorialV2(max));

  max = 10;
  printf("fibonacciSeq(%d)\n", max);
  fibonacciSeq(max);

  printf("fibonacci(%d) = %d", 6, fibonacci(6));
}

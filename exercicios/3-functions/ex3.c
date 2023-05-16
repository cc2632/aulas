#include <stdio.h>
// 1. int somatorio(int min, int max): retorna a soma de todos os números entre
// min e max, inclusive
int somatorio(int min, int max) {
  int total = 0;
  for (int i = min; i <= max; i++) // i++ == i += 1 == i = i + 1
    total += i;
  return total;
}

// 2. int somatorioComPasso(int min, int max, int passo): igual ao anterior, mas
// usando o passo para incrementar o valor somado
int somatorioComPasso(int min, int max, int passo) {
  int total = 0;
  for (int i = min; i <= max; i += passo) // i+=passo == i = i + passo
    total += i;
  return total;
}

int somatorioV2(int min, int max) { return somatorioComPasso(min, max, 1); }

// 3. int somaParImpar(int min, int max, int par): se par != 0, a soma somente
// dos números pares entre min e max. Se par = 0, a soma dos números ímpares.
int somaParImpar(int min, int max, int par) {
  int total = 0;

  if (par == 0) { // soma impares
    for (int i = min; i <= max; i++)
      if (i % 2 != 0)
        total += i;
  } else {
    for (int i = min; i <= max; i++)
      if (i % 2 == 0)
        total += i;
  }

  return total;
}

// 4. int produtorio(int min, int max): retorna o produto de todos os números
// entre min e max
int produtorio(int min, int max) {
  int total = 1;
  for (int i = min; i <= max; i++)
    total *= i;
  return total;
}

int produtorioV2(int min, int max) {
  if (min == max)
    return max;
  else
    return min * produtorioV2(min + 1, max);
}

// 5. int fatorial(int n): retorna o fatorial do número n
// f = n * (n-1) * (n-2) * (n-3) *...*1
int fatorial(int n) {
  int f = n;
  for (int i = n - 1; i >= 1; i--)
    f *= i; // f = f * i
  return f;
}

int fatorialV2(int n) {
  if (n == 1)
    return 1;
  else
    return n * fatorialV2(n - 1);
}

// 6. void fibonacciSeq(int n): imprime a sequência de Fibonacci até n números
// 1 1 2 3 5 8 13 21
void fibonacciSeq(int n) {
  int a = 1;
  int b = 1;
  printf("%d %d ", a, b);
  for (int i = 2; i < n; i++) {
    int aux = b;
    b = a + b;
    a = aux;
    printf("%d ", b);
  }
  printf("\n");
}

// 7. int fibonacci(int pos): retorna o número da sequência de Fibonacci na
// posição pos
int fibonacci(int pos) {
  int a = 1;
  int b = 1;
  for (int i = 2; i < pos; i++) {
    int aux = b;
    b = a + b;
    a = aux;
  }
  return b;
}

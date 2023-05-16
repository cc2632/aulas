#include <stdio.h>
// 1. Implemente uma função que recebe um número e imprime o resultado deste
// número multiplicado pelos valores de 0 a 10;
void tabuada(int x) {
  for (int i = 0; i <= 10; i++)
    printf("%d x %d = %d\n", x, i, x * i);
}

// 2. Implemente uma função que receba um valor inteiro e retorna 1 se o valor é
// ímpar e 0 se o valor é par;
int impar(int x) {
  if (x % 2 == 0)
    return 0;

  return 1;
}

// 3. Implemente uma função que recebe um valor inteiro e retorna 1 se o valor é
// positivo, -1 se for negativo e 0 se for igual a 0;
int positivoNegativo(int x) {
  if (x > 0)
    return 1;

  if (x < 0)
    return -1;

  return 0;
}

// 4. Implemente uma função que recebe 2 valores inteiros e retorna o maior e
// uma função que retorne o menor. Usando estas função, implemente a versão
// delas que recebe 3 e 4 valores;
int max(int x, int y) {
  if (x > y)
    return x;

  if (x < y)
    return y;

  return x;
}

int max3(int x, int y, int z) { return max(max(x, y), z); }

int max4(int x, int y, int z, int w) { return max(max(x, y), max(z, w)); }

int min(int x, int y) {
  if (x < y)
    return x;

  if (x > y)
    return y;

  return x;
}

int min3(int x, int y, int z) { return min(min(x, y), z); }

int min4(int x, int y, int z, int w) { return min(min(x, y), min(z, w)); }

int main() {
  printf("Exercicio 1\n");
  tabuada(2);

  printf("Exercicio 2\n");
  int x = 1;
  printf("%d: %d\n", x, impar(x));
  x = 2;
  printf("%d: %d\n", x, impar(x));

  printf("Exercicio 3\n");
  x = 10;
  printf("%d: %d\n", x, positivoNegativo(x));
  x = -10;
  printf("%d: %d\n", x, positivoNegativo(x));
  x = 0;
  printf("%d: %d\n", x, positivoNegativo(x));

  printf("Exercicio 4\n");
  x = 1;
  int y = 2, z = 3, w = 4;
  printf("Max2: %d\n", max(x, y));
  printf("Max3: %d\n", max3(x, y, z));
  printf("Max4: %d\n", max4(x, y, z, w));

  printf("Min2: %d\n", min(w, z));
  printf("Min3: %d\n", min3(w, y, z));
  printf("Min4: %d\n", min4(x, y, z, w));
}

// Crie uma função chamada uniao() que receba como entrada dois vetores de
// inteiros (x1 e x2), suas respectivas quantidades de elementos (n1 e n2) e um
// ponteiro para um inteiro n3.

// A função deve retornar um terceiro vetor x3, alocado dinamicamente,
// contendo a união de x1 e x2 e armazenar o tamanho do vetor x3 na variável
// n3.

// Por exemplo, sendo x1 = {1, 3, 5, 6, 7} e x2 = {1, 3, 4, 6, 8}, então x3={1,
// 3, 5, 6, 7, 4, 8} e n3 = 7.

// Para este exercício, os arquivos main.c e exercicio.h são fornecidos, então
// só é necessário implementar as funções no arquivo exercicios.c.

// Exercício extra: comente o código implementado na função main explicando o
// que está sendo feito em cada linha.

#include "exercicio.h"
#include <stdio.h>
#include <stdlib.h>

int main() {

  int n1 = 5, n2 = 7;

  int *x1 = malloc(n1 * sizeof(int));
  int *x2 = malloc(n2 * sizeof(int));

  for (int i = 0; i < n1; i++) {
    *(x1 + i) = i;
    *(x2 + i) = i;
  }

  for (int i = n1; i < n2; i++)
    *(x2 + i) = i;

  printf("x1: ");
  printArray(x1, n1);
  printf("x2: ");
  printArray(x2, n2);

  int n3;
  int *x3 = uniao(x1, n1, x2, n2, &n3);

  printf("Tamanho de X3: %d\n", n3);
  printf("x3: ");
  printArray(x3, n3);
}

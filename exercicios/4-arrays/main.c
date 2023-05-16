// Seguindo a mesma divisão de arquivos da aula passada, implemente as seguintes
// funções:

// 0. void exibeArray(int v[], int tamanho);
// 1. int soma(int v[], int tamanho);
// 2. int subtracao(int v[], int tamanho);
// 3. float media(int v[], int tamanho);
// 4. void duplica(int v[], int v2[], int tamanho);
// 5. int produtoEscalar(int v1[], int v2[], int tamanho);
// 6. void exibe(int m[][], int linhas, int colunas);
// 7. void somaMatrizes(int m1[][], int m2[][], int r[][], int linhas, int
// colunas);
// 8. void multiplica(int valor, int m[][], int r[][], int linhas, int colunas)
#include "ex4.h"
#include <stdio.h>

int main() {
  int t = 5;
  int v[] = {1, 2, 3, 4, 5};
  printf("v: ");
  exibeArray(v, t);
  printf("soma(v, t) = %d\n", soma(v, t));
  printf("subtracao(v, t) = %d\n", subtracao(v, t));
  printf("media = %f\n", media(v, t));
  printf("mediaV2 = %f\n", mediaV2(v, t));

  int v2[t];
  printf("v2: ");
  exibeArray(v2, t);
  duplica(v, v2, t);
  printf("v: ");
  exibeArray(v, t);
  printf("v2: ");
  exibeArray(v2, t);
  printf("produto escalar = %d", produtoEscalar(v, v2, t));

  int linhas = 3;
  int colunas = 3;
  int m1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int m2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
  int r[3][3];

  exibe(linhas, colunas, m1);
  exibe(linhas, colunas, m2);
  exibe(linhas, colunas, r);

  somaMatrizes(linhas, colunas, m1, m2, r);
  exibe(linhas, colunas, r);

  multiplica(linhas, colunas, 2, m1, r);
  exibe(linhas, colunas, r);
}

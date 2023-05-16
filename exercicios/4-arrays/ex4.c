#include <stdio.h>

void exibeArray(int v[], int tamanho) {
  for (int i = 0; i < tamanho; i++)
    printf("%d ", v[i]);
  printf("\n");
}

int soma(int v[], int tamanho) {
  int total = 0;
  for (int i = 0; i < tamanho; i++)
    total += v[i];
  return total;
}

int subtracao(int v[], int tamanho) {
  int total = 0;
  for (int i = 0; i < tamanho; i++)
    total -= v[i];
  return total;
}
float media(int v[], int tamanho) {
  float m = 0;

  for (int i = 0; i < tamanho; i++)
    m += v[i];

  return m / tamanho;
}

float mediaV2(int v[], int tamanho) {
  return (float)soma(v, tamanho) / tamanho;
}

void duplica(int v[], int v2[], int tamanho) {
  for (int i = 0; i < tamanho; i++)
    v2[i] = v[i];
}

int produtoEscalar(int v1[], int v2[], int tamanho) {
  int total = 0;
  for (int i = 0; i < tamanho; i++)
    total += v1[i] * v2[i];
  return total;
}

void exibe(int linhas, int colunas, int m[linhas][colunas]) {
  for (int l = 0; l < linhas; l++) {
    for (int c = 0; c < colunas; c++)
      printf("%d ", m[l][c]);
    printf("\n");
  }
  printf("\n");
}

void somaMatrizes(int linhas, int colunas, int m1[linhas][colunas],
                  int m2[linhas][colunas], int r[linhas][colunas]) {
  for (int l = 0; l < linhas; l++)
    for (int c = 0; c < colunas; c++)
      r[l][c] = m1[l][c] + m2[l][c];
}

void multiplica(int linhas, int colunas, int valor, int m[linhas][colunas],
                int r[linhas][colunas]) {
  for (int l = 0; l < linhas; l++)
    for (int c = 0; c < colunas; c++)
      r[l][c] = valor * m[l][c];
}

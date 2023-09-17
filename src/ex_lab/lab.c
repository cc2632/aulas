#include <math.h>
#include <stdio.h>

// lab 1
float media(float x, float y) { return (x + y) / 2.; }

float distancia(float x1, float y1, float x2, float y2) {
  float dx = x2 - x1;
  float dy = y2 - y1;
  float d = pow(dx, 2) + pow(dy, 2);
  return sqrt(d);
}

float mediaCC2632(float atv, float p1, float p2, float p3, int labs) {
  int qlabs = (labs >= 6) ? 5 : labs;
  float fl = 0.7 + 0.3 * qlabs / 5;
  float projs = 0.2 * p1 + 0.6 * p2 + 0.2 * p3;
  float media = sqrt(atv * projs * fl);
  return media;
}

// lab 2
float max_float(float x, float y) {
  if (x > y)
    return x;

  return y;
}

float min_float(float x, float y) { return (x < y) ? x : y; }

int sinal(float x) {
  if (x > 0)
    return 1;
  else if (x < 0)
    return -1;

  return 0;
}

int acimaDe(float valor, float limite) {
  if (valor >= limite)
    return 1;

  return 0;
}

// lab 3
int busca(int valor, int *valores, int tamanho) {
  for (int i = 0; i < tamanho; i++)
    if (*(valores + i) == valor)
      return i;

  return -1;
}

float mediaPonderada(float *valores, float *pesos, int tamanho) {
  float media = 0;
  for (int i = 0; i < tamanho; i++)
    media += *(valores + i) * *(pesos + i);

  return media;
}

int tamanho(char *string) {
  int i = 0;
  while (*(string + i) != '\0')
    i++;
  return i;
}

void copiaString(char *string1, char *string2) {
  for (int i = 0; *(string1 + i) != '\0'; i++)
    *(string2 + i) = *(string1 + i);
}

void input(char *print, char *leitura, int tamanho) {
  printf("%s\n", print);
  // scanf("%[^\n]s", leitura);
  fgets(leitura, tamanho, stdin);
}

// lab 4
void escreveArray(int array[], int tamanho, char *nome) {
  FILE *fp = fopen(nome, "wb");

  if (fp == NULL)
    return;

  fwrite(array, sizeof(int), tamanho, fp);
  fclose(fp);
}

void leArray(int array[], int tamanho, char *nome) {
  FILE *fp = fopen(nome, "rb");

  if (fp == NULL)
    return;

  fread(array, sizeof(int), tamanho, fp);
  fclose(fp);
}

#include <stdio.h>
#include <string.h>

int main() {
  // Tipos de dados
  int i = 1;
  float f = 1.2;
  double d = 3.14;
  char c = 'a';

  // printf e scanf
  printf("Hello, world!\n");
  printf("i=%d\t", i);
  printf("f=%.2f\t", f);
  printf("d=%10.3lf\t", d);
  printf("c=%c\t", c);
  printf("c=%d\n", c);

  printf("Entre com um valor: ");
  scanf("%c", &c);
  printf("valor digitado: %c\n", c);

  int dia, mes, ano;
  printf("Entre com uma data no formato dd/mm/aaaa: ");
  scanf("%02d/%02d/%04d", &dia, &mes, &ano);
  printf("%04d.%02d.%02d\n", ano, mes, dia);

  // for, while, do...while
  for (i = 10; i < 10; i++)
    printf("%d ", i);

  printf("%d\n", i);

  i = 10;
  while (i < 10) {
    printf("%d ", i);
    i++;
  }
  printf("%d\n", i);

  i = 10;
  do {
    printf("%d ", i);
    i++;
  } while (i < 10);
  printf("%d\n", i);

  // if, else if, else
  i = 0;
  if (i == 0) {
    printf("i eh zero\n");
  } else if (i == 1) {
    printf("i eh um\n");
  } else if (i == 2) {
    printf("i eh dois\n");
  } else {
    printf("i naum eh zero nem um\n");
  }

  // arrays, strings e fgets
  int tamanho = 5;
  int a[tamanho];
  a[0] = 1;
  a[1] = 2;
  a[2] = 3;
  a[3] = 4;
  a[4] = 5;

  for (int i = 0; i < tamanho; i++)
    printf("%d ", a[i]);
  printf("\n");

  int b[] = {10, 20, 30, 40, 50};
  for (int i = 0; i < tamanho; i++)
    printf("%d ", b[i]);
  printf("\n");

  int str[tamanho];

  for (int i = 0; i < tamanho; i++)
    str[i] = i * i;

  for (int i = 0; i < tamanho; i++)
    printf("%d ", str[i]);
  printf("\n");

  tamanho = 50;
  char str2[tamanho];
  printf("Entre com uma str2ing: ");
  fgets(str2, tamanho, stdin);

  printf("Str = %s", str2);

  for (int i = 0; i < tamanho; i++)
    printf("%c", str2[i]);
  printf("\n");

  // "hello" -> "hello\0"

  // struct
  typedef struct {
    int dia;
    int mes;
    int ano;
  } Data;

  Data d1;
  d1.dia = 10;
  d1.mes = 1;
  d1.ano = 2023;

  printf("%02d/%02d/%04d\n", d1.dia, d1.mes, d1.ano);

  // ponteiros
  i = 1;       // i tem um endereço &i e um valor em i
  int *p = &i; // int *p tem um valor em p que aponta para &i
  // o valor de *p é o valor que está no enderço armazenado em p,
  // ou seja *p = i
  // p -> &i -> 1

  printf("i=%d\n", i);
  printf("*p=%d\n", *p);

  printf("p=%p\n", p);
  printf("&i=%p\n", &i);

  if (i == *p)
    printf("i == *p\n");
  else
    printf("i != *p\n");

  if (p == &i)
    printf("p == &i\n");
  else
    printf("p != &i\n");

  // arquivos
  i = 42;
  FILE *file = fopen("arquivo.txt", "w");
  if (file == NULL)
    printf("Nao foi possivel abrir o arquivo para escrita");
  else {
    fprintf(file, "hello world\n");
    fprintf(file, "%d\n", i);
    fclose(file);
  }

  file = fopen("arquivo.txt", "r");
  if (file == NULL)
    printf("Nao foi possivel abrir o arquivo para leitura");
  else {
    char str[255];
    while (1) {
      fgets(str, 255, file);
      if (feof(file))
        break;
      printf("%s", str);
    }
    fclose(file);
  }

  file = fopen("arquivo.bin", "wb");
  if (file == NULL)
    printf("Nao foi possivel abrir o arquivo binario para escrita");
  else {
    fwrite(&d, sizeof(Data), 1, file);
    fclose(file);
  }

  file = fopen("arquivo.bin", "rb");
  if (file == NULL)
    printf("Nao foi possivel abrir o arquivo binario para leitura");
  else {
    Data d2;
    printf("Antes da leitura: %02d/%02d/%04d\n", d2.dia, d2.mes, d2.ano);
    fread(&d2, sizeof(Data), 1, file);
    fclose(file);
    printf("Depois da leitura: %02d/%02d/%04d\n", d2.dia, d2.mes, d2.ano);
  }

  // funções
}

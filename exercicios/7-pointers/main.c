#include <stdio.h>
#include <stdlib.h>
// O seu programa deve permitir quem o usuário realize as seguintes operações:
// - Soma
int *soma(int x, int y) {
  int *r = (int *)malloc(sizeof(int));
  *r = x + y;
  return r;
}
// - Subtração
int *subtracao(int x, int y) {
  int *r = (int *)malloc(sizeof(int));
  *r = x - y;
  return r;
}
// - Multiplicação
int *multiplicacao(int x, int y) {
  int *r = (int *)malloc(sizeof(int));
  *r = x * y;
  return r;
}
// - Divisão
int *divisao(int x, int y) {
  int *r = (int *)malloc(sizeof(int));
  *r = x / y;
  return r;
}
// - Resto
int *resto(int x, int y) {
  int *r = (int *)malloc(sizeof(int));
  *r = x % y;
  return r;
}
// - Potência
int *potencia(int x, int y) {
  int *r = (int *)malloc(sizeof(int));
  *r = 1;
  for (int i = 0; i < y; i++)
    *r = *r * x;
  return r;
}
// sendo que cada um destas operações deve receber 2 números inteiros e retornar
// um ponteiro para um inteiro que contém o resultado (a exibição do resultado
// não deve ser realizada dentro da função).

int main() {
  // Desenvolva um programa que recebe do usuário 2 números inteiros e uma
  // operação representada por números inteiros em um menu de opções. O programa
  // deve receber estes valores, realizar a operação esperada e exibir o
  // resultado. Em seguida, deve realizar o mesmo processo novamente se o
  // usuário desejar.
  int x;
  int y;
  int opcao;
  int sair;

  // Na função main, use um array de ponteiros de funções (evite usar
  // condicionais para executar a função desejada) e faça todo o processo
  // descrito anteriormente.
  typedef int *(*funcoes)(int, int);
  funcoes fs[] = {soma, subtracao, multiplicacao, divisao, resto, potencia};

  do {
    printf("Entre com o primeiro numero: ");
    scanf("%d", &x);

    printf("Entre com o segundo numero: ");
    scanf("%d", &y);

    printf("Escolha uma operacao\n");
    printf("1. soma\n");
    printf("2. subtracao\n");
    printf("3. multiplicacao\n");
    printf("4. divisao\n");
    printf("5. resto\n");
    printf("6. potencia\n");
    scanf("%d", &opcao);

    int *resultado = fs[opcao - 1](x, y);
    printf("Resultado = %d\n", *resultado);

    printf("Deseja executar novamente(1: continuar, 0: sair)?\n");
    scanf("%d", &sair);
  } while (sair);

  // printf("%d + %d = %d\n", x, y, *soma(x, y));
  // printf("%d - %d = %d\n", x, y, *subtracao(x, y));
  // printf("%d * %d = %d\n", x, y, *multiplicacao(x, y));
  // printf("%d / %d = %d\n", x, y, *divisao(x, y));
  // printf("%d %% %d = %d\n", x, y, *resto(x, y));
  // printf("%d ^ %d = %d\n", x, y, *potencia(x, y));
}

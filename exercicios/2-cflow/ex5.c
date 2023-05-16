#include <stdio.h>
// 5. Faça um código que receba do usuário uma operação aritmética e dentro de
// um loop leia números até que o usuário digite 0. Imprima o resultado de
// aplicar a mesma operação usando todos os números que o usuário digitou, menos
// o 0;

int main() {
  // recebe a operacao
  char operacao;
  printf("Entre com uma operacao:\n");
  printf("+: soma\n");
  printf("-: subtracao\n");
  printf("*: multiplicacao\n");
  printf("/: divisao\n");
  scanf("%c", &operacao);

  // inicializa a variavel com o total das operacoes
  int total = 0;
  if (operacao == '*')
    total = 1;
  if (operacao == '/')
    total = 100;

  // testa os valores recebidos e inicializados
  printf("operacao = %c\n", operacao);
  printf("total no inicio = %d\n", total);

  int n;
  do {
    // recebe o valor
    printf("Entre com um número:\n");
    scanf("%d", &n);

    // testa o valor para fazer a operacao
    if (n != 0) {
      // faz a operacao selecionada
      if (operacao == '+')
        total += n;
      if (operacao == '-')
        total -= n;
      if (operacao == '/')
        total /= n;
      if (operacao == '*')
        total *= n;
    }

    // testa o valor para sair do loop
  } while (n != 0);

  // imprime o resultado das operacoes
  printf("total = %d", total);
}

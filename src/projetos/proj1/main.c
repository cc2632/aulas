#include "projeto.h"
#include <stdio.h>

int main() {
  ListaDeTarefas lt;
  char arquivo[] = "tarefas";
  int codigo, opcao;

  do {
    exibeMenu();
    scanf("%d", &opcao);

    if (opcao == 0) {
    } else if (opcao == 1) {
      codigo = criarTarefa(&lt);
      printf("codigo = %d\n", codigo);
    } else if (opcao == 2) {
      codigo = deletarTarefa(&lt);
      printf("codigo = %d\n", codigo);
    } else if (opcao == 3) {
      codigo = listarTarefas(lt);
      printf("codigo = %d\n", codigo);
    } else {
      printf("opcao invalida\n");
    }

  } while (opcao != 0);
}

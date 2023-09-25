#include "projeto.h"
#include <stdio.h>

int main() {
  ListaDeTarefas lt;

  char arquivo[] = "tarefas";
  int codigo, opcao;

  codigo = carregarTarefas(&lt, arquivo);

  if (codigo != 0) {
    printf("lista de tarefas nao carregada");
    lt.qtd = 0;
  }

  do {
    exibeMenu();
    scanf("%d", &opcao);

    if (opcao == 0) {
    } else if (opcao == 1) {
      codigo = criarTarefa(&lt);
      if (codigo == 1)
        printf("erro ao criar tarefa: sem espaco disponivel\n");
    } else if (opcao == 2) {
      codigo = deletarTarefa(&lt);
      printf("codigo = %d\n", codigo);
    } else if (opcao == 3) {
      codigo = listarTarefas(&lt);
      printf("codigo = %d\n", codigo);
    } else {
      printf("opcao invalida\n");
    }

  } while (opcao != 0);

  codigo = salvarTarefas(&lt, arquivo);
  if (codigo != 0)
    printf("erro ao salvar tarefas em arquivo");
}

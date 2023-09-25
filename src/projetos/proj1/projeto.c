#include "projeto.h"
#include <stdio.h>

int criarTarefa(ListaDeTarefas *lt) {
  printf("criar tarefa\n");
  return 0;
}

int deletarTarefa(ListaDeTarefas *lt) {
  printf("deletar tarefa\n");
  return 0;
}

int listarTarefas(ListaDeTarefas lt) {
  printf("listar tarefa\n");

  for (int i = 0; i < lt.qtd; i++) {
    printf("Prioridade: %d \t Categoria: %s\n", lt.tarefas[lt.qtd].prioridade,
           lt.tarefas[lt.qtd].categoria);
    printf("Descricao: %s\n", lt.tarefas[lt.qtd].descricao);
  }

  return 0;
}

int carregarTarefas(ListaDeTarefas *lt, char *nome) { return 0; }

int salvarTarefas(ListaDeTarefas *lt, char *nome) { return 0; }

void exibeMenu() { printf("menu\n"); }

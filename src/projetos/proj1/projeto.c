#include "projeto.h"
#include <stdio.h>

int criarTarefa(ListaDeTarefas *lt) {
  Tarefa *t = &lt->tarefas[lt->qtd];

  printf("Entre com a prioridade da tarefa: ");
  scanf("%d", &t->prioridade);

  printf("Entre com a categoria da tarefa: ");
  scanf("%s", t->categoria);

  printf("Entre com a descrição da tarefa: ");
  scanf("%s", t->descricao);

  printf("%d \t %s \t %s", t->prioridade, t->categoria, t->descricao);

  lt->qtd++;

  return 0;
}

int deletarTarefa(ListaDeTarefas *lt) {
  printf("deletar tarefa\n");
  return 0;
}

int listarTarefas(ListaDeTarefas *lt) {
  if (lt->qtd == 0)
    return 1;

  for (int i = 0; i < lt->qtd; i++) {
    printf("Prioridade: %d \t Categoria: %s\n", lt->tarefas[i].prioridade,
           lt->tarefas[i].categoria);
    printf("Descricao: %s\n", lt->tarefas[i].descricao);
  }

  return 0;
}

int carregarTarefas(ListaDeTarefas *lt, char *nome) { return 0; }

int salvarTarefas(ListaDeTarefas *lt, char *nome) { return 0; }

void exibeMenu() { printf("menu\n"); }

#include <math.h>
#include <stdio.h>
// Desenvolva um programa que calcula a média desta disciplina para todos os
// alunos de uma turma. O programa deve:

// - armazenar o número de matrícula, as 3 notas em um array, a média final e se
// o aluno foi aprovado em uma variável char;
typedef struct {
  int matricula;
  float notas[3];
  float media;
  char resultado;
} Aluno;

void cadastro(Aluno *a) {
  printf("Entre com a matricula: ");
  scanf("%d", &a->matricula);

  printf("Entre com a primeira nota: ");
  scanf("%f", &a->notas[0]);

  printf("Entre com a segunda nota: ");
  scanf("%f", &a->notas[1]);

  printf("Entre com a terceira nota: ");
  scanf("%f", &a->notas[2]);
}

float calcMedia(Aluno a) {
  float total = a.notas[0] * a.notas[1] * a.notas[2];
  return sqrt(total);
  // return sqrt(a.notas[0] * a.notas[1] * a.notas[2]);
}

char resultado(Aluno a) {
  return (a.media >= 5) ? 'A' : 'R';
  /*
   * if(a.media >= 5)
   *   return 'A';
   * else
   *   return 'R';
   */
}

void printAluno(Aluno a) {
  printf("%d: ", a.matricula);
  printf("%.2f\t%.2f\t%.2f\t", a.notas[0], a.notas[1], a.notas[2]);
  printf("%.2f (%c)\n", a.media, a.resultado);
}

int main() {
  // Aluno a;
  // cadastro(&a);
  // a.media = calcMedia(a);
  // a.resultado = resultado(a);
  // printAluno(a);

  // - perguntar para o usuário a quantidade de alunos no início da execução;
  int total;
  printf("Entre com o total de alunos: ");
  scanf("%d", &total);

  // - armazenar os dados de todos os alunos antes de exibir a média;
  Aluno turma[total];
  for (int i = 0; i < total; i++) {
    cadastro(&turma[i]);
    turma[i].media = calcMedia(turma[i]);
    turma[i].resultado = resultado(turma[i]);
  }

  // - exibir a média da turma e a quantidade de alunos aprovados e reprovados
  int aprovados = 0;
  int reprovados = 0;
  float media = 0;

  // - exibir todas as médias no final do programa.
  for (int i = 0; i < total; i++) {
    printAluno(turma[i]);
    if (turma[i].resultado == 'A')
      aprovados++;
    else
      reprovados++;
    media += turma[i].media;
  }
  media /= total;

  printf("Total de aprovados: %d\n", aprovados);
  printf("Total reprovados: %d\n", reprovados);
  printf("Media da turma: %.2f\n", media);
}

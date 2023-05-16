#include <stdio.h>
#include <stdlib.h>
// Faça um programa em C para armazenar nome, sobrenome e data de nascimento de
// uma pessoa. Seu programa deve conter:

// - enum com os meses do ano
enum Meses {
  JANEIRO = 1,
  FEVEREIRO,
  MARCO,
  ABRIL,
  MAIO,
  JUNHO,
  JULHO,
  AGOSTO,
  SETEMBRO,
  OUTUBRO,
  NOVEMBRO,
  DEZEMBRO
};

// - struct para armazenar os dados de data (dia, mês e ano), sendo que o mês
// deve usar o enum criado
typedef struct {
  int dia;
  enum Meses mes;
  int ano;
} Data;

// - struct para armazenar os dados da pessoa: nome, sobrenome e data de
// nascimento, usando o struct de data
struct Pessoa {
  char nome[255];
  char sobrenome[255];
  Data nascimento;
};
typedef struct Pessoa Pessoa;

// Para ficar mais fácil de fazer o resto do código:
// - Implemente uma função que recebe um struct de pessoa, leia do teclado as
// informações e armazene no struct passado
void cadastro(Pessoa *p) {
  printf("Entre com o nome e sobrenome: ");
  scanf("%s %s", p->nome, p->sobrenome);

  printf("Entre com a data de nascimento: ");
  scanf("%02d/%02d/%04d", &p->nascimento.dia, &p->nascimento.mes,
        &p->nascimento.ano);
}

// - Implemente uma função que recebe um struct e exibe todas as informações
// armazenadas. Esta função deve fazer a conversão do valor do mês para o texto
// com o nome do mês
void printPessoa(Pessoa p) {
  printf("Nome: %s %s", p.nome, p.sobrenome);

  char *mes;
  switch (p.nascimento.mes) {
  case JANEIRO:
    mes = "janeiro";
    break;
  case FEVEREIRO:
    mes = "fevereiro";
    break;
  case MARCO:
    mes = "marco";
    break;
  case ABRIL:
    mes = "abril";
    break;
  case MAIO:
    mes = "maio";
    break;
  case JUNHO:
    mes = "junho";
    break;
  case JULHO:
    mes = "julho";
    break;
  case AGOSTO:
    mes = "agosto";
    break;
  case SETEMBRO:
    mes = "setembro";
    break;
  case OUTUBRO:
    mes = "outubro";
    break;
  case NOVEMBRO:
    mes = "novembro";
    break;
  case DEZEMBRO:
    mes = "dezembro";
    break;
  }

  printf("\tNascimento: %02d/%s/%04d\n", p.nascimento.dia, mes,
         p.nascimento.ano);
}

// Na main, faça um array de structs de pessoa de tamanho 12 e cadastre pessoas
// com nascimento em meses diferentes para testar a conversão dos meses. Faça um
// loop para receber as 12 pessoas e em outro loop mostre as informações das
// pessoas cadastradas.
int main() {
  // Pessoa p;
  // cadastro(&p);
  // printPessoa(p);

  int meses = 12;
  Pessoa pessoas[meses];

  for (int mes = 0; mes < meses; mes++)
    cadastro(&pessoas[mes]);

  for (int mes = 0; mes < meses; mes++)
    printPessoa(pessoas[mes]);
}

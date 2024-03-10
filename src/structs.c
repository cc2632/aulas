#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Pessoa{
    char nome[255];
    int idade;
    long cpf;
} Pessoa;

int main(){
    Pessoa *pessoa = malloc(sizeof(Pessoa));

    strcpy(pessoa->nome, "Meu Nome");
    pessoa->idade = 123;
    pessoa->cpf = 12345678910;

    printf("Nome: %s\n", pessoa->nome);
    printf("Idade: %d\n", pessoa->idade);
    printf("CPF: %ld\n", pessoa->cpf);

}

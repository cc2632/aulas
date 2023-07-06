#include <stdio.h>
#include <stdlib.h>

// exercicio 1
// a função recebe um ponteiro para um char (string) e um inteiro com a
// matricula
void printDados(char *nome, int matricula) {
  printf("Nome: %s\n", nome);           // exibe o nome recebido
  printf("Matricula: %d\n", matricula); // exibe a matricula recebida

  FILE *f = fopen("exercicio1.txt", "w");   // abre o arquivo texto para escrita
  fprintf(f, "Nome: %s\n", nome);           // escreve o nome no buffer
  fprintf(f, "Matricula: %d\n", matricula); // escreve a matricula no buffer
  fclose(f); // fecha o arquivo aberto, salvando os dados escritos
}

// exercicio 2
// input recebe uma string e retorna um string em Python, portando em C ele
// recebe um ponteiro (ou array) de char e retorna um ponteiro (ou array) de
// char. A conversão para outros tipos é feita na função que usa o input.
char *input(char *msg) {
  printf("%s", msg); // exibe a string recebida
  // cria uma nova variável para ler a entrada pelo teclado
  char *input = (char *)malloc(255 * sizeof(char));
  fgets(input, 255, stdin); // le a entrada pelo teclado
  return input;             // retorna a string lida do teclado
}

// exercicio 3 - vespertino
// recebe duas strings s1 e s2 e copia s1 em s2
void copiaString(char *s1, char *s2) {
  // percorre a string do primeiro caracter até encontrar o \0 que define o
  // final da string
  for (int i = 0; s1[i] != '\0'; i++)
    s2[i] = s1[i]; // copia o caracter de s1 em s2 para cada posição i
}

// exercicio 3 - noturno
// recebe uma string e deve retornar o tamanho
int tamanho(char *s) {
  int total; // cria a variável de retorno
  // percorre a string do primeiro caracter até encontrar o \0
  for (total = 0; s[total] != '\0'; total++)
    ;
  return total; // retorna o total encontrado
}

// exercicio 4 - vespertino
// recebe um array e o tamanho deste array e retorna um ponteiro para a soma dos
// números pares
int *somatorioPares(int array[], int tamanho) {
  // cria uma variável e inicializa com um valor que não altera a soma
  int soma = 0;
  int *p = &soma; // cria um ponteiro para retornar o resultado da soma
  for (int i = 0; i < tamanho; i++) // percorre todo o array
    if (array[i] % 2 == 0)          // verifica se o valor no array é par
      soma += array[i];             // atualiza o valor do resultado da soma

  return p; // retorna o ponteiro com o endereço do resultado da soma
}

// exercicio 4 - noturno
// recebe um array e o tamanho deste array e retorna um ponteiro para o produto
// dos números ímpares
int *produtorioImpares(int array[], int tamanho) {
  // cria uma variável e inicializa com um valor que não altera a multiplicação
  int produtorio = 1;
  // cria um ponteiro para retornar o resultado da multiplicaçãAo
  int *p = &produtorio;

  for (int i = 0; i < tamanho; i++) // percorre todo o array
    if (array[i] % 2 != 0)          // verifica se o número é ímpar
      produtorio *= array[i];       // atualiza o valor com a multiplicação

  return p; // retorna o valor calculado
}
int main() {

  printf("Exercicio 1\n");
  char nome[50] = "Meu nome";  // cria uma variável para armazenar o nome
  int matricula = 123456789;   // cria uma variável para armazenar a matricula
  printDados(nome, matricula); // chama a função criada

  printf("Exercicio 2\n");
  char *msg = "Entre com algum texto:\n"; // cria a mensagem que será exibida
  char *str = input(msg); // usa a função input para receber o resultado
  printf("%s\n", str);    // exibe o retorno da função input

  msg = "Entre com um inteiro:\n"; // troca a mensagem que será exibida
  str = input(msg);                // armazena o retorno da função input
  int i = atoi(str);               // converte o valor para um inteiro
  printf("%d\n", i);               // exibe o valor retornado como inteiro

  msg = "Entre com um float:\n"; // troca a mensagem para esperar por um float
  str = input(msg);              // armazena a string retornada
  float f = atof(str);           // converte para um float
  printf("%f\n", f);             // exibe o valor como float

  printf("Exercicio 3 - vespertino\n");
  char s[255] = "Hello, world!";       // cria um string
  printf("Tamanho: %d\n", tamanho(s)); // exibe o tamanho da string passada

  printf("Exercicio 3 - noturno\n");
  char s2[255]; // cria uma nova string sem inicializar
  // exibe os valores das strings para ver que são diferentes
  printf("S1: %s\nS2: %s\n", s, s2);
  copiaString(s, s2);     // usa a função para copiar s em s2
  printf("S2: %s\n", s2); // exibe a string s2 para ver se foi copiada

  printf("Exercicio 4 - vespertino\n");
  int t = 5; // cria uma variável para armazenar o tamanho dos array
  int a1[] = {1, 2, 3, 4, 5}; // cria um array para teste
  int a2[] = {-1, -2, -3, -4,
              -5}; // outro array para teste, mas com números negativos
  int a3[] = {1, 3, 5, 7, 9}; // array somente com números ímpares

  // cria uma variável que recebe o retorno da função
  int *soma = somatorioPares(a1, t);
  printf("Soma: %d\n", *soma);  // exibe o resultado da soma
  soma = somatorioPares(a2, t); // mesma operação mas com o segundo array
  printf("Soma: %d\n", *soma);  // exibe o resultado para segundo array
  soma = somatorioPares(a3, t); // mesma operação para o último array
  printf("Soma: %d\n", *soma);  // exibe o resultado para o terceiro array

  // quebra a linha apenas para ficar mais fácil de ver os resultadodos
  printf("\n");

  // cria uma variável que recebe o retorno da produtória
  int *produtorio = produtorioImpares(a1, t);
  printf("Produtorio: %d\n", *produtorio); // exibe o resultado da produtória
  produtorio = produtorioImpares(a2, t);   // atualiza com o novo resultado
  printf("Produtorio: %d\n", *produtorio); // exibe o resultado obtido
  produtorio = produtorioImpares(a3, t);   // atualiza para o último array
  printf("Produtorio: %d\n", *produtorio); // exibe o novo resultado
}

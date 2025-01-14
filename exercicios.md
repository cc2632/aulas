# Exercícios de provas anteriores

## Código

1. Escreva um programa que armazena seu nome completo em uma variável e seu
número de matrícula em outra variável e em seguida exibe os valores na tela em duas
linhas diferentes. Escreva o programa completo, inclusive as bibliotecas que precisam ser
importadas e funções necessárias.

2. Escreva um programa que exibe o código e o nome da disciplina em linhas diferentes.
Escreva o programa completo, inclusive as bibliotecas que precisam ser importadas

3. Explique como as seguintes funções funcionam:
    - `printf`
    - `fprintf`
    - `scanf`
    - `fscanf`
    - `fwrite`
    - `fread`
    - `fgets`
    - `malloc`
    - `sizeof`

4. Explique o funcionamento da função abaixo:
```c
int f(char *c) {
    int i;
    for(i=0; *(c + i) != ’\0’; i++);
    return i;
}
```

5. Explique o que cada linha da função abaixo faz  e em seguida explique para que a função pode ser utilizada.
```c
void f ( char∗ c1 , char∗ c2 ) {
    for ( int i = 0; ∗( c1 + i ) != '\0' ; i ++)
    ∗( c2 + i ) = ∗( c1 + i ) ;
}
```

## Fundamentos

1. Para que serve a função `main`?
2. Como funcionam os ponteiros na linguagem C?
3. Como funcionam os ponteiros de void?
4. Para que pode ser utilizado um struct? Como ele é diferente de um dicionário?
5. Quais são as diferenças entre um array e uma lista?
6. Como um array é organizado na memória? Apresente um exemplo de seu uso e como ele seria alocado.
7. Como um struct é organizado na memória? Apresente um exemplo de seu uso e como ele seria alocado.
8. Em uma função, qual a diferença entre um parâmetro passado por valor e um passado por referência?
9. Qual o tipo de valor que é armazenado em um ponteiro em C? Como este valor pode ser usado?
10. Por que quando usamos a função scanf precisamos passar o endereço de uma variável mas não precisamos passar o endereço de um array?
11. Explique por que podemos usar aritmética de ponteiros para acessar valores dentro de um array.

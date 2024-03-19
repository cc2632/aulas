#include<stdio.h>

int main(){
    char s0[] = {'a', '\0'};
    printf("%s\n", s0);

    char s[12] = "hello world"; // 11 char + 1 \0
    s[11] = 'a';
    printf("%s\n", s);

    char s1[5];
    printf("Entre com uma string: ");
    scanf("%s", s1); // recebe a string e escreve em mais espaço do que alocado
    fgets(s1, 5, stdin); // recebe a string e armazena apenas o que possui espaço
    printf("String: %s\n", s1);

}

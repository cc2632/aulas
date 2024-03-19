#include<stdio.h>

void clearBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(){
     int i;
     char c;

     printf("Entre com um inteiro: ");
     scanf("%d", &i);

     clearBuffer();

     printf("Entre com um char: ");
     scanf("%c", &c);

     printf("\nValores lidos: %d %c\n", i, c);
}

#include<stdio.h>

int soma(int a, int b);
void printResultado(int a, int b, int c);

int main(){
    int i = 10;
    int j = 20;
    int k = soma(i, j);
    printResultado(i, j, k);
}

int soma(int a, int b){
    return a + b;
}

void printResultado(int a, int b, int c){
    printf("%d + %d = %d\n", a, b, c);
}

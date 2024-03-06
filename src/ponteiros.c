#include<stdio.h>

int main(){
    int i = 1;
    int* p = &i;
    printf("valor de i:                   %d\n", i);
    printf("valor do end. apontado por p: %d\n", *p);
    printf("\n");
    printf("endereco de i: %p\n",&i);
    printf("valor de p:    %p\n",p);
    printf("endereco de p: %p\n",&p);
}

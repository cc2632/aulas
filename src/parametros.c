#include<stdio.h>

void f(int a){
    printf("F: a=%d\n", a);
    a++;
    printf("F: a=%d\n", a);
}

void f2(int v[]){
    printf("F2: v[0]=%d\n", v[0]);
    v[0]++;
    printf("F2: v[0]=%d\n", v[0]);
}

void f3(int *p){
    printf("F3: *p=%d\n", *p);
    (*p)++;
    printf("F3: *p=%d\n", *p);
}

int main(){
     // passagem por valor
     int i = 1;
     printf("M: i=%d\n", i);
     f(i);
     printf("M: i=%d\n", i);

     printf("\n");

     // passagem por referência
     int a[2] = {1, 100};
     printf("M: a[0]=%d\n", a[0]);
     f2(a);
     printf("M: a[0]=%d\n", a[0]);

     printf("\n");

     // passagem por referência (usando ponteiros)
     int *p = &i;
     printf("M: i=%d\n", i);
     printf("M: *p=%d\n", *p);
     f3(p);
     printf("M: *p=%d\n", *p);
     printf("M: i=%d\n", i);
}

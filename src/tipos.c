#include<stdio.h>

int main(){
    int i = 1;
    long l = 2;
    char c = 'a';
    float f = 3.14;
    double d = 2.71;

    printf("entre com um valor int: ");
    scanf("%d", &i);
    printf("entre com um valor long: ");
    scanf("%ld", &l);
    char tmp;
    scanf("%c", &tmp);
    printf("entre com um valor char: ");
    scanf("%c", &c);
    printf("entre com um valor float: ");
    scanf("%f", &f);
    printf("entre com um valor double: ");
    scanf("%lf", &d);

    printf("valor de i: %d\n", i);
    printf("valor de l: %ld\n", l);
    printf("valor de c como int: %d\n", c);
    printf("valor de c como caracter: %c\n", c);
    printf("valor de f: %f\n", f);
    printf("valor de d: %lf\n", d);
}

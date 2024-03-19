#include<stdio.h>

union Numeros{
    int i;
    float f;
};

int main(){
    union Numeros n;
    printf("n.i = %d\n", n.i);
    printf("n.f = %f\n", n.f);

    n.i = 1;
    printf("n.i = %d\n", n.i);
    printf("n.f = %f\n", n.f);

    n.f = 3.14;
    printf("n.i = %d\n", n.i);
    printf("n.f = %f\n", n.f);
}

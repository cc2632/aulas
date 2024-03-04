#include<stdio.h>

int fatorial(int i){
    if (i <= 1)
        return 1;
    else
        return i * fatorial(i-1);
}

int main(){
    int i = 5;
    int j = fatorial(i);
    printf("%d! = %d\n", i, j);
}

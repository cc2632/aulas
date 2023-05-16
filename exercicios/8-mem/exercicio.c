#include <stdio.h>
#include <stdlib.h>

void printArray(int *v, int t){
    for(int i=0; i<t; i++)
        printf("%d ", *(v+i));

    printf("\n");
}

int fazParte(int n, int *v, int t){
    for(int i=0; i<t; i++)
        if(*(v+i) == n)
            return 1;

    return 0;
}

int *uniao(int *x1, int n1, int *x2, int n2, int *n3){
    *n3 = n1;
    for(int i=0; i<n2; i++)
        if(!fazParte(*(x2+i), x1, n1))
            *n3 = *n3 + 1;

    int *x3 = malloc(*n3 * sizeof(int));

    int p = 0;
    for(int i=0; i<n1;i++)
        *(x3+p++) = *(x1+i);

    for(int i=0;i<n2;i++)
        if(!fazParte(*(x2+i), x1, n1))
            *(x3+p++) = *(x2+i);

    return x3;
}

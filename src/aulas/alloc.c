#include <stdio.h>
#include <stdlib.h>

int main(){
    int* p = malloc(5 * sizeof(int));
    *(p+0) = 1;
    *(p+1) = 2;
    *(p+2) = 3;
    *(p+3) = 4;
    *(p+4) = 5;

    for(int i=0; i<5; i++)
        printf("*(p+%d) = %d (%p)\n", i, *(p+i), (p+i));

    printf("\n");

    p[0] = 6;
    p[1] = 7;
    p[2] = 8;
    p[3] = 9;
    p[4] = 10;
    for (int i = 0; i < 5; i++)
         printf("p[%d] = %d (%p)\n", i, p[i], &(p[i]));

    free(p);

}

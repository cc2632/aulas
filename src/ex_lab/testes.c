#include <stdio.h>
#include "lab.h"

int main(){

    printf("Lab 1 - Ex 1\n");
    float x = 10;
    float y = 20;
    printf("A media de %.2f e %.2f eh %.5f\n", x, y, media(x, y));

    printf("\nLab 1 - Ex 2\n");
    float x1 = 1;
    float y1 = 1;
    float x2 = 2;
    float y2 = 2;
    printf("Distancia entre (%.2f, %.2f) e (%.2f, %.2f) eh %.2f\n",
            x1, y1, x2, y2, distancia(x1, y1, x2, y2));

    printf("\nLab 1 - Ex 3\n");
    float atv = 10;
    float proj1 = 10;
    float proj2 = 10;
    float proj3 = 10;
    int labs = 10;
    printf("A media de CC2632 eh %.2f", mediaCC2632(atv, proj1, proj2, proj3, labs));
}

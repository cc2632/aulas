#include "lab.h"
#include <stdio.h>

int main() {

  printf("Lab 1 - Ex 1\n");
  float x = 10;
  float y = 20;
  printf("A media de %.2f e %.2f eh %.5f\n", x, y, media(x, y));

  printf("\nLab 1 - Ex 2\n");
  float x1 = 1;
  float y1 = 1;
  float x2 = 2;
  float y2 = 2;
  printf("Distancia entre (%.2f, %.2f) e (%.2f, %.2f) eh %.2f\n", x1, y1, x2,
         y2, distancia(x1, y1, x2, y2));

  printf("\nLab 1 - Ex 3\n");
  float atv = 10;
  float proj1 = 10;
  float proj2 = 10;
  float proj3 = 10;
  int labs = 10;
  printf("A media de CC2632 eh %.2f\n",
         mediaCC2632(atv, proj1, proj2, proj3, labs));

  printf("\nLab 2 - Ex 1\n");
  printf("O maior entre %.2f e %.2f eh %.2f\n", x, y, max_float(x, y));
  printf("O maior entre %.2f e %.2f eh %.2f\n", y, x, max_float(y, x));
  printf("O maior entre %.2f e %.2f eh %.2f\n", x, x, max_float(x, x));

  printf("\nLab 2 - Ex 2\n");
  printf("O menor entre %.2f e %.2f eh %.2f\n", x, y, min_float(x, y));
  printf("O menor entre %.2f e %.2f eh %.2f\n", y, x, min_float(y, x));
  printf("O menor entre %.2f e %.2f eh %.2f\n", x, x, min_float(x, x));

  printf("\nLab 2 - Ex 3\n");
  printf("O sinal de %.2f eh %d\n", -10., sinal(-10.));
  printf("O sinal de %.2f eh %d\n", 10., sinal(10.));
  printf("O sinal de %.2f eh %d\n", 0., sinal(0.));

  printf("\nLab 2 - Ex 4\n");
  printf("O valor %.2f esta acima de %.2f? %d\n", 5., 10., acimaDe(5., 10.));
  printf("O valor %.2f esta acima de %.2f? %d\n", 20., 10., acimaDe(20., 10.));
  printf("O valor %.2f esta acima de %.2f? %d\n", 10., 10., acimaDe(10., 10.));
}

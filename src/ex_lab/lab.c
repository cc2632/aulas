#include <math.h>

// lab 1
float media(float x, float y) { return (x + y) / 2.; }

float distancia(float x1, float y1, float x2, float y2) {
  float dx = x2 - x1;
  float dy = y2 - y1;
  float d = pow(dx, 2) + pow(dy, 2);
  return sqrt(d);
}

float mediaCC2632(float atv, float p1, float p2, float p3, int labs) {
  int qlabs = (labs >= 6) ? 5 : labs;
  float fl = 0.7 + 0.3 * qlabs / 5;
  float projs = 0.2 * p1 + 0.6 * p2 + 0.2 * p3;
  float media = sqrt(atv * projs * fl);
  return media;
}

// lab 2
float max_float(float x, float y) {
  if (x > y)
    return x;

  return y;
}

float min_float(float x, float y) { return (x < y) ? x : y; }

int sinal(float x) {
  if (x > 0)
    return 1;
  else if (x < 0)
    return -1;

  return 0;
}

int acimaDe(float valor, float limite) {
  if (valor >= limite)
    return 1;

  return 0;
}

#include <math.h>

// lab 1
float media(float x, float y){
    return (x + y) / 2.;
}

float distancia(float x1, float y1, float x2, float y2){
    float dx = x2 - x1;
    float dy = y2 - y1;
    float d = pow(dx, 2) + pow(dy, 2);
    return sqrt(d);
}

float mediaCC2632(float atv, float p1, float p2, float p3, int labs){
    int qlabs = (labs >= 6) ? 5 : labs;
    float fl = 0.7 + 0.3 * qlabs / 5;
    float projs = 0.2 * p1 + 0.6 * p2 + 0.2 * p3;
    float media = sqrt(atv * projs * fl);
    return media;
}

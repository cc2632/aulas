#include <stdio.h>

// tipo_de_retorno nome_da_funcao(tipo par1, tipo par2, ...){
// definicao da funcao
// }

float soma(float x, float y) {
  float soma = x + y;
  return soma;
  // return x + y;
}

float media(int array[], int tamanho) {
  float m = 0;

  // calculo da media
  for (int i = 0; i < tamanho; i++)
    m += array[i];
  m /= tamanho;

  return m;
}

int main() {
  float i = 3.14;
  float j = 2.78;
  float k = soma(i, j);
  printf("%f + %f = %f\n", i, j, k);

  int a[] = {10, 25, 39, 42, 55};
  int t = 5;
  float m = media(a, t);
  printf("media = %f\n", m);
}

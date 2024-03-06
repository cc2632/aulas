#include<stdio.h>

void initArray(int array[], int tamanho){
    for(int i=0; i<tamanho; i++)
        array[i] = i+1;
}

void printArray(int tamanho, int array[tamanho]){
    for(int i=0; i<tamanho; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main(){
    int tamanho = 8; // C99 em diante
    int a[tamanho];
    initArray(a, tamanho);
    printArray(tamanho, a);

  /*
    0   1   2   3   4   5   6   7
  +---+---+---+---+---+---+---+---+
  | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 |
  +---+---+---+---+---+---+---+---+
   &+0 &+1 &+2 &+3 &+4 &+5 &+6 &+7
  */

}

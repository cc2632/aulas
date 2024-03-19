#include<stdio.h>
#include <stdlib.h>

void printArray(int array[], int t){
    for(int i=0; i<t; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main(){
    int t = 5;
    int array[] = {1, 2, 3, 4, 5};
    printf("dados que serao armazenados: ");
    printArray(array, t);

    // salva o array em um arquivo binario
    printf("salvando dados em um arquivo binario\n");
    FILE *f = fopen("array", "wb");
    fwrite(array, t, sizeof(int), f);
    fclose(f);

    // le os dados do arquivo binario e armazena em array2
    printf("lendo os dados do arquivo binario\n");
    int array2[t];
    f = fopen("array", "rb");
    int i = fread(array2, t, sizeof(int), f);
    fclose(f);
    printf("dados que foram lidos: ");
    printArray(array2, t);
}

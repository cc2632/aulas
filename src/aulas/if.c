#include<stdio.h>

int main(){
     int i = 0;
     int j = 0;

     if(i > 0 && j > 0) // and
         printf("os dois sao positivos\n");
     else if(i < 0 || j < 0) // or
         printf("pelo menos um deles eh negativo\n");
     else if(!(i < 0)) // not
         printf("i eh positivo ou zero\n");
     else
         printf("qualquer outra condicao\n");
}

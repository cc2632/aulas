#include<stdio.h>

int main(){
     int array[8];

     int d1=5, d2=5;
     int matriz[d1][d2];

     for(int i=0; i<d1; i++)
         for(int j=0; j<d2; j++)
             matriz[i][j] = (i+1) * (j+1);

     for(int i=0; i<d1; i++){
         for(int j=0; j<d2; j++)
             printf("%05d ",matriz[i][j]);
         printf("\n");
     }
}

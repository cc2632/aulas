#include<stdio.h>

int main(){
     int nota = -1;
     int nota_final;
     int notaf;

     int nota2 = (nota > 10) ? 10 : (nota < 0) ? 0 : nota;

     nota_final = (nota < 0) ? 0 : nota;
     if (nota < 0)
         notaf = 0;
     else
         notaf = nota;

     nota_final = (nota_final > 10) ? 10 : nota_final;
     if (notaf > 10)
         notaf = 10;

     printf("nota = %d\n", nota);
     printf("nota2 = %d\n", nota2);
     printf("nota_final = %d\n", nota_final);
     printf("notaf = %d\n", notaf);

}

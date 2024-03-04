#include<stdio.h>

int main(){
     int i = 0;
     printf("i = %d\n", i);   // 0
     printf("i = %d\n", i++); // 0 (primeiro usa o valor, depois incrementa)
     printf("i = %d\n", ++i); // 2 (primeiro incrementa, depois usa o valor)
     printf("i = %d\n", i--); // 2 (primeiro usa o valor, depois decrementa)
     printf("i = %d\n", --i); // 0 (primeiro decrementa, depois usa o valor)
     printf("i = %d\n", i);   // 0
}

#include<stdio.h>

int main(){
     int* p;
     printf("&p+0: %p\n",&p+0);
     printf("&p+1: %p\n",&p+1);
     printf("&p+2: %p\n",&p+2);
     printf("&p+3: %p\n",&p+3);
     printf("&p+4: %p\n",&p+4);

     int a[5];
     printf("&a:    %p\n", &a);
     for(int i=0; i<5;i++)
         printf("&a[%d]: %p\n", i, &a[i]);

}

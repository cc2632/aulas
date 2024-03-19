#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "hello world";
    int len = strlen(str); // string length
    printf("len = %d\n", len);

    char str2[12];
    strcpy(str2, str); // string copy
    printf("Original: %s\nCopia: %s\n", str, str2);

    int comp = strcmp(str, "hello world"); // string compare
    printf("comp = %d\n", comp); // 0 se as strings forem iguais
                                 // !=0 se as strings forem diferentes
}

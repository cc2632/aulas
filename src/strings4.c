#include<stdio.h>

void upper(char s[]){
    for(int i=0; s[i]!='\0'; i++)
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
}

void lower(char s[]){
    for(int i=0; s[i]!='\0'; i++)
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
}

int main(){
     char s[] = "hElLo, WoRlD!";
     printf("original: %s\n", s);

     upper(s);
     printf("upper: %s\n", s);

     lower(s);
     printf("lower: %s\n", s);
}

#include<stdio.h>

int escreveArquivo(char *nome){
   FILE *fp = fopen(nome, "w");

   if(fp == NULL){
       printf("erro ao abrir o arquivo");
       return 1;
   }

   int hw = fprintf(fp, "hello, world\n");
   int pi = fprintf(fp, "pi = %f\n", 3.14);
   if(hw == 0 || pi == 0)
       printf("erro na escrita no arquivo\n");

   fclose(fp);
   return 0;
}

int leArquivo(char *nome){
    FILE *fp = fopen(nome, "r");

    if(fp == NULL){
        printf("erro na abertura do arquivo para leitura\n");
        return 1;
    }

    char linha[255];

    char *s = fgets(linha, 255, fp);
    printf("%s\n", linha);
    printf("retorno fgets: %s\n", s);

    float pi;
    int i = fscanf(fp, "pi = %f", &pi);
    printf("pi = %f\n", pi);
    printf("retorno fscanf: %d\n", i);

    return 0;
}

int main(){
    char nome[100] = "arquivo.txt";
    escreveArquivo(nome);
    //leArquivo(nome);
}

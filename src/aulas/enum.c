#include<stdio.h>

enum Erros {OK, ABERTURA, FECHAMENTO, LEITURA, ESCRITA, VAZIO};

enum Erros escreveArquivo(char *nome){
    FILE *f = fopen(nome, "w");
    if(f == NULL)
        return ABERTURA;

    int qtd = fprintf(f, "hello, world\n");
    if(qtd == 0)
        return ESCRITA;

    int fechamento = fclose(f);
    if(fechamento != 0)
        return FECHAMENTO;

    return OK;
}

int main(){
    char arq[255] = "arquivo.txt";
    enum Erros e = escreveArquivo(arq);
    switch(e){
        case ABERTURA:
            printf("erro na abertura do arquivo\n");
            break;
        case FECHAMENTO:
            printf("erro no fechamendo do arquivo\n");
            break;
        case LEITURA:
            printf("erro na leitura do arquivo\n");
            break;
        case ESCRITA:
            printf("erro na escrita do arquivo\n");
            break;
        case VAZIO:
            printf("erro de arquivo vazio\n");
            break;
        case OK:
            printf("sem erros\n");
            break;

    }
}

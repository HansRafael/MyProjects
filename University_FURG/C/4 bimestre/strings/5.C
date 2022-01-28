#include <stdio.h>
#include <string.h>
int main()
{
    char nome[30];
    int i,tamanho;
    printf("Deixar maisculo\n");
    scanf("%s",nome);
    tamanho = strlen(nome);

    for(i = 0; i < tamanho; i ++){
            nome[i] = nome[i] - 6;
    }
    printf("%s",nome);
}
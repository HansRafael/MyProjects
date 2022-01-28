#include <stdio.h>
#include <string.h>
#define TAMANHO 200
int main(){
    char nome[TAMANHO],nome1[TAMANHO] = "";

    int idade,i,maior = -1,menor,cont;

    for(i = 0; i < 3; i++){
    printf("Digite o nome:\n");
    fgets(nome,TAMANHO-1,stdin);
    printf("Digite a idade:\n");
    scanf("%d",&idade);
    getchar();
    if(idade>maior){
        maior = idade;
        strcpy(nome1,nome);   
        }
    }
    printf("A pessoa mais velha se chama %s e tem %d anos",nome1,maior);
}
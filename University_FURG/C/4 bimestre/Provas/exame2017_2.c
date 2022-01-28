#include <stdio.h>
#include <stdlib.h>

int geraVetor(int* vet1,int tamanho,int valor){
    for(int i = 0; i < tamanho; i++){
        vet1[i] = valor;
    }
}

int main(){
    int* vet;
    int n;
    int valor;
    printf("Digite o tamnho e o valor a ser preenchido no vetor\n");
    scanf("%d %d",&n,&valor);
    vet = malloc(n*sizeof(int));
    geraVetor(vet,n,valor);
    for(int i = 0; i < n; i++){
        printf("%d ",vet[i]);
    }
}
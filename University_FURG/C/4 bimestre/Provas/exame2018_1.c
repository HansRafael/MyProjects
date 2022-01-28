#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int main(){
    int vet[MAX];
    int vet_test[MAX];
    int n,cont=0,aux =0;
    printf("Digite a entrada\n");
    for(int i = 0; i < MAX; i++){
        scanf("%d",&vet[i]);
    }
    for(int k = 0; k <MAX; k ++){
        if (aux != vet[k]){
            aux = vet[k];
            cont = 0;
            for(int i = 0; i <MAX; i++){
                if(vet[i] == aux){
                    cont++;
                }
            }   
        printf("numero %d: %d vezes\n",aux,cont);
        }
        else
        {
            continue;
        }
        
    }
}

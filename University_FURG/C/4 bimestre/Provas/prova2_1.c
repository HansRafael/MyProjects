#include <stdio.h>
#include <stdlib.h>
int main(){
    int* vet_1 = NULL;
    int* vet_2 = NULL;
    int* vet_test = NULL;
    int n,i_1 = 0,i_2 = 1,cont = 1,cont_1 =1,cont_2 = 1;
    printf("Digite o tamanho do vetor:\n");
    scanf("%d",&n);
    
    vet_1 = (int*)malloc(n*sizeof(int));
    vet_test = (int*)malloc(n*sizeof(int));
    printf("Digite os valores a serem preenchidos\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&vet_1[i]);
        vet_test[i] = vet_1[i];
    }
    
    

}
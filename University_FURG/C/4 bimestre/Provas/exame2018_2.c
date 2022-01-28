#include <stdio.h>
#include <stdlib.h>

int Merge(int* vet1,int* vet2,int* vetFinal,int x){
    int menor = 0, k = 0;
    for(int i = 0; i < x;i++){
        if(vet1[i] < vet2[i]){
            vetFinal[k] = vet1[i];
            vetFinal[k+1] = vet2[i];
            k+=2;
        }
        else
        {
            vetFinal[k] = vet2[i];
            vetFinal[k+1] = vet1[i];
            k+=2;
        }
    }
}
int main(){
    int* vet_1;
    int* vet_2;
    int* vet_final;
    int n,cont,aux;
    
    printf("n de elementos;\n");
    scanf("%d",&n);
    vet_1 = malloc(n*sizeof(int));
    vet_2 = malloc(n*sizeof(int));
    aux = 2*n;
    vet_final = malloc((aux)*sizeof(int));
    
    printf("Vetor 1:\n");
    for(int i = 0;i < n; i++){
        scanf("%d", &vet_1[i]);
    }
    printf("Vetor 2:\n");
    for(int i = 0;i < n; i++){
        scanf("%d",&vet_2[i]);
    }
    Merge(vet_1,vet_2,vet_final,n);
    for (int i = 0; i < (aux); i++)
    {
        printf("%d ",vet_final[i]);
    }
}
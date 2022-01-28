#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,k=1,cont = 0,cont_1,cont_2 = 1,x=0;
    int* vet_1;
    int* vet_2;
    printf("Digite o n(par) de elementos do vetor\n");
    scanf("%d",&n);
    printf("\n");
    vet_1 = (int*)malloc(n*sizeof(int));
    for(int i = 0; i<n ; i++){
        scanf("%d",&vet_1[i]);
    }

    for(int i = 1; i < n; i+=2){
        cont = cont + vet_1[i];
    }

    vet_2 = (int*)malloc(cont*sizeof(int));

    for(int j = 0; j < cont; j +=2){
        cont_1 = vet_1[k];
        if ((n/2) < cont_2){
            break;
        }
        for(int i =0; i < cont_1;i++){
            vet_2[x] = vet_1[j];
            printf("%d ",vet_2[x]);
            x++;
        }
        k+=2;
        cont_2++;
    }
    printf("\n");
    for(int i = 0; i < x; i++){
        printf("%d ",vet_2[i]);
    }
    free(vet_1);
    free(vet_2);    
}
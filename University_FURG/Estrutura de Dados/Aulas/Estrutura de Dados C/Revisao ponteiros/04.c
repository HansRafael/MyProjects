#include <stdio.h>
#include <stdlib.h>  
int main(){
    
    int vet[5] = {1,2,3,4,5};
    int *p = vet; //o nome do vetor é ele mesmo. o 'vet'(um array) já é um ponteiro
    int i;
    for(i = 0; i < 5; i++)
        printf("%d\n",p[i]); // p[i] = *(p+i)


    printf("vet[2] = %d\n",vet[2]);
    printf("vet[2] = %d\n",*(vet+2));


    //acessando o ENDEREÇO DE UM DADO DO ARRAY
    printf("&vet[2] = %d\n",&vet[2]);
    printf("&vet[2] = %d\n",(vet+2));

    /*também podemos declarar um
    array de ponteiros */
    //tipo_dado *nome_array[tamanho];
    
    int *vet2[2]; //array de 5 ponteiros
    int x = 10, y[2] = {20,30};
    vet2[0] = &x;
    vet2[1] = y;
    printf("vet2[0] = %p\n",vet2[0]);
    printf("vet2[1] = %p\n",vet[1]);

    printf("*vet2[0] = %d\n",*vet2[0]);
    printf("vet2[1][1] = %d\n",vet2[1][0]); /*como é um array, temos que acessar primeiro o valor de y,
                                            e depois qual valor em y. É uma matriz!!! */

    system("pause");
    return 0;

}
#include <stdio.h>
#define col 3
#define lin 3
int main()
{
    int matriz_1[col][lin];
    int matriz_2[col][lin];
    int matrizSoma[col][col];   
    int i,j,m = 1,n = 1;
    for(i = 0; i < lin;i++)
    {
        for(j = 0 ; j < col; j++)
        {
            printf("Digite um valor para a posicao (%d,%d)\n",i,j);
            scanf("%d",&matriz_1[i][j]);
        }
    }        
    
    for(i = 0; i < lin;i++)
    {
        for(j = 0 ; j < col; j++)
        {
            matriz_2[i][j] = (m*n);
            n++;
        }
    n = 1;
    m++;
    }
    for(i = 0; i < lin;i++)
    {
        for(j = 0 ; j < col; j++)
            {
                matrizSoma[i][j] = matriz_1[i][j] + matriz_2[i][j];
            }
    }
    for(i = 0; i < lin;i++)
    {
        for(j = 0 ; j < col; j++)
        {
            printf("%d,",matriz_2[i][j]);
        }
    printf("\n");
    }
}

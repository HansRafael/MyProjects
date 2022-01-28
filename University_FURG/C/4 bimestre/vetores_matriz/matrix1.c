#include <stdio.h>
int main()
{
    int matriz4_4[3][4];
    int i,j;
    for(i = 0; i < 3;i++)
    {
        for(j = 0 ; j < 4; j++)
        {
            printf("Digite um valor para a posicao (%d,%d)\n",i,j);
            scanf("%d",&matriz4_4[i][j]);
        }
    }
    for(i = 0 ; i < 3;i++)
    {
        for(j = 0; j < 4; j++) 
        printf("%d,",matriz4_4[i][j]);
    printf("\n");
    }
}
/* p fazer a transposta, baster inverter o i e o j
    for (j=0; j<4; j++)
        for (i=0; i<3; i++) */
        
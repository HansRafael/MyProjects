#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3

int main(){
    int Tabu[3][3] = {0,0,0
                     ,0,0,0,    
                      0,0,0};
    int Jogador1 = 0,Jogador2,n,m,i,j,k = 1,pc,pc2;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            printf("%d|",Tabu[i][j]);
    printf("\n");
    }

    printf("Jogador 1 = 1\n");
    printf("Jogador 2 = 2\n");
    while(k != 0)
    {
        pc = (rand() % 3 );
        pc2 = (rand() % 3 );
        printf("Digite a posicao (linha,coluna)\n");
        if (Jogador1 == 0)
        {
            scanf("%d %d",&m,&n);
            if (Tabu[m-1][n-1] != 2){
                Tabu[m-1][n-1] = 1;
                Jogador1 = 1;
            }
            else
            {
                printf("Jogada invalida\n");
            }
            
        }
        else
        {
            if (Tabu[pc][pc2] != 1){
                Tabu[pc][pc2] = 2;
                Jogador1 = 0;
            }
            else
            {
                printf("jogada invalida\n");
            }
            
        }
        

            if((Tabu[0][0] == 1 && Tabu[0][1] == 1 && Tabu[0][2] == 1) || (Tabu[1][0] == 1 && Tabu[1][1] == 1 && Tabu[1][2] == 1) || (Tabu[2][0] == 1 && Tabu[2][1] == 1 && Tabu[2][2] == 1) || (Tabu[0][0] == 1 && Tabu[1][0] == 1 && Tabu[2][0] == 1) || (Tabu[0][1] == 1 && Tabu[1][1] == 1 && Tabu[2][1] == 1) || (Tabu[0][2] == 1 && Tabu[1][2] == 1 && Tabu[2][2] == 1) || (Tabu[0][0] == 1 && Tabu[1][1] == 1 && Tabu[2][2] == 1) || (Tabu[0][2] == 1 && Tabu[1][1] == 1 && Tabu[2][0] == 1))
            {
                printf("Jogador 1 ganhou\n");
                k = 0;
            }
            if((Tabu[0][0] == 2 && Tabu[0][1] == 2 && Tabu[0][2] == 2) || (Tabu[1][0] == 2 && Tabu[1][1] == 2 && Tabu[1][2] == 2) || (Tabu[2][0] == 2 && Tabu[2][1] == 2 && Tabu[2][2] == 2) || (Tabu[0][0] == 2 && Tabu[1][0] == 2 && Tabu[2][0] == 2) || (Tabu[0][1] == 2 && Tabu[1][1] == 2 && Tabu[2][1] == 2) || (Tabu[0][2] == 2 && Tabu[1][2] == 2 && Tabu[2][2] == 2) || (Tabu[0][0] == 2 && Tabu[1][1] == 2 && Tabu[2][2] == 2) || (Tabu[0][2] == 2 && Tabu[1][1] == 2 && Tabu[2][0] == 2))
            {
                printf("Jogador 2 ganhou\n");
                k = 0;
            }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            printf("%d|",Tabu[i][j]);
    printf("\n");
    }
    }
} 

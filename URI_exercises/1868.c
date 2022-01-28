#include <stdlib.h>
#include <stdio.h>

int make(int Tamanho, int Direcao_linha,int Direcao_coluna, int Cont){
    int x,posicao,i,j,posi_linha,posi_coluna;
    x = Tamanho;
    int Vetor[x][x];
    for(i = 0; i < x; i++){
        for( j = 0; j < x; j++)
            Vetor[i][j] = 'O';
    }

    Vetor[posi_linha][posi_coluna] = 'X';

    for(i = 0; i < x; i++){
        for( j = 0; j < x; j++)
            printf("%c ",Vetor[i][j]);
        printf("\n");
    }
    printf("@");
    
}




int main(){
    int i,j,x,cont,ultima_pos,posi_linha,posi_coluna;
    scanf("%d\n",&x);
    posi_linha,posi_coluna = x/2;
    cont = -1;
    for(i = 0; i < (x*x); i++){
        printf("aq?");
        if (cont == -1 )
            ultima_pos = make(x,posi_linha,posi_coluna,0);
        if (cont == 0){
            posi_coluna++;
            make(x,posi_linha,posi_coluna,0);
        }
        if (cont == 1){
            posi_linha = posi_linha - 1;
            make(x,posi_linha,posi_coluna,0);
        }
        if(cont = 2){
            posi_coluna = posi_coluna -1;
            make(x,posi_linha,posi_coluna,0);
        }
        if (cont == 3){
            posi_linha++;
            make(x,posi_linha,posi_coluna,0);
        }        
        cont++;
   }
}
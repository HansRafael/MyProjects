#include <stdio.h>
int tentativas=0, continuar=1, menorPalpite=0, maiorPalpite=1000, palpite=500, escolha=0, tmp = 0;
 
int main(){
 
    printf("Pense em um número de 1 a 1000.\n");
    while(continuar == 1){
        printf("Esse número é: \n (1) - MAIOR que %i. \n (2) - MENOR que %i. \n (3) - IGUAL A %i.\n", palpite, palpite, palpite);
        scanf("%i", &escolha);
 
        if (escolha != 1 && escolha != 2 && escolha != 3){
            printf("Essa não é uma escolha válida. Tente novamente.\n");
            continue;
        }
 
        tentativas += 1;
 
        switch(escolha){
            case 1:
                tmp = palpite + ((maiorPalpite - palpite) / 2);
                menorPalpite = palpite + 1;
                palpite = tmp;
                break;
            case 2:
                tmp = palpite - ((palpite - menorPalpite) / 2);
                maiorPalpite = palpite - 1;
                palpite = tmp;
                break;
            case 3:
                printf("O número é: %i. %i tentativas. \n", palpite, tentativas);
                continuar = 0;
                break;
        }
    }
    return 0;
}
#include <stdio.h>
#include <string.h>
#define TAMANHO 200
int main() {
    char bin[TAMANHO]="";
    char aux[TAMANHO]="";
    int dec;
    printf("Digite o nro em decimal: ");
    scanf("%d",&dec);
    while(dec>0){
        if (dec%2==0){
            strcpy(aux,"0");
            // printf("%s\n",aux);
        }
        else
            strcpy(aux,"1");
        printf("1_____%s\n",bin);
        strcat(aux,bin);
        strcpy(bin,aux);
        printf("2_____%s\n",bin);
        dec=dec/2;

    }
    printf("Numero em Binario: %s\n",bin);
    return 0;
}
#include <stdio.h>
#include <string.h>
int main(){
    unsigned char Caracter[255];
    int numero[255],i,k = 0;

    for(i = 0; i <255;i++){
        Caracter[i] = k;
        k++;
    }
    for(i = 0;i<255;i++)
        printf("%c - %d\n",Caracter[i],i);
}

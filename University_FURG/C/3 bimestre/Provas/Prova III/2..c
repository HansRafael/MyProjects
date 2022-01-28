#include<stdio.h>
int main(){
    int numero,divisor,numeroguardado,cont;
    cont=0;
    divisor=2;
    numeroguardado=0;
    printf("digite um numero positivo maior que 0\n");
    scanf("%i",&numero);
    printf("%i =",numero);
    while (numero>0){
        if (numero==1){
            break;
        }
        if (numero%divisor==0){
            printf(" %i x",divisor);
            numero=numero/divisor;
            
        }

            
        else{
            divisor++;
        }
    }
    printf(" 1");
    printf("\n");
}
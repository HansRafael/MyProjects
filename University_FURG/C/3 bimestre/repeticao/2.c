#include <stdio.h>
int main(){

    int a,maior,menor,cont;
    cont = 0;
    maior = 0;
    while (cont < 10)
    {
        scanf("%d",&a);
        if (a > maior)
        {
            maior = a;
        }
        if(a < menor)
        {
            menor = a;
        }
    cont++;       
    }
    printf("O maio numero eh: %d\n menor eh %d",maior,menor);
}
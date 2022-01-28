#include <stdio.h>
int main()
{
    int n,primo,cont,cont1;
    cont1 = 0;
    cont = 1;
    printf("Digite um numero para fatorar: ");
    scanf("%d",&n);

    while(n >= cont)
    {
        if(n%cont == 0)
        {
        cont1 ++;
        cont ++;
        }
        else
        {
        cont++;
        }
    }
    if (cont1 == 2)
    {
        printf("numero Primo");
    }
}

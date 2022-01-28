#include <stdio.h>
int main()
{
    int n,i,cont = 1,pot;
    printf("Digite um valor:");
    scanf("%d",&n);

    for(i = 1; i <= n; i++)
    {
        pot = pot + cont;
        if (i == 1)
            printf("%d ^ 2 = ",n);
        if ( i != n)
            printf("%d + ",cont);
        else
            printf("%d ",cont);
        
        cont += 2;
    }
    printf("= %d",pot);
}
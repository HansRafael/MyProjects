#include <stdio.h>
int main()
{
    int n,cont,i,ultimo = 1,penultimo = 1,result;
    printf("Digite um valor >= 3:");
    scanf("%d",&n);

    for(i = 1; i <= n; i++)
    {
        if (i == 1 || i == 2)
        {
            cont = 1;
            printf("%d ",cont);
        }
        else
        {
            result = (ultimo + penultimo);
            printf("%d ",result);
            ultimo = penultimo;
            penultimo = result;
           
        }
    }
}
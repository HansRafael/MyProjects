#include <stdio.h>
int main()
{
    int n,i;
    printf("Digite um valor N maior que 0\n");
    scanf("\n%d",&n);
    for(i = 1; i <= n; i++)
        if(i%3 == 0 || i%5 == 0)
        {
            if (i%3 == 0 && i%5 == 0)
                printf("Ding-Dong ");
            else
            {
                if(i%3 == 0)
                    printf("Ding ");
                if(i%5 == 0)
                    printf("Dong ");
            }
        }
        
        else
        {
            printf("%d ",i);
        }
        
            
}
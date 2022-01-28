#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *p;
    
    int n, i = 0;
    printf("N de elemntos\n");
    scanf("%d",&n);
    p = malloc((sizeof(int)*n)); //Assim criamos um veto de n 

    for(i; i < (n); i++)
    {
        scanf("%d",(p+i));
    }
    for(i = (n-1); i >=0 ; i--)
    {
        printf("%d\n",*(p+i));
    }    
}
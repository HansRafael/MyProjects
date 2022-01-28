///Inverte os numeros///
#include <stdio.h>
int main()
{
    int Num[10],i;

    printf("Digite 10 valores:\n");
    for(i = 0; i <= 9; i++)
        scanf("%d",&Num[i]); 

    printf("Os numero inversos sao:\n");
    
    for(i = 9; i > -1; i--)
        printf("%d\n",Num[i]);

}
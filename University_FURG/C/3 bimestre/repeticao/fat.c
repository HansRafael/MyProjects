#include <stdio.h>
int main()
{
    int n,i,fat = 1;
    printf("Diga N para fatorar: ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        fat = fat * i;
        if (i != n)
            printf("%d x ",i);
        else
            printf("%d = ",i);
    }
    printf("%d\n",fat);
}

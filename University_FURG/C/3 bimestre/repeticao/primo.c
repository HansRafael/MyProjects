#include <stdio.h>
int main() {
    int n, k,i;
    printf("\nDigite um numero natural: ");
    scanf("%d", &n);

    for(k=2; k<=n-1; k++) 
        if( n%k == 0 ) 
            break;
        if( k==n ) 
            printf("\nO numero eh primo");
        else 
            for(i = 1; i <=n; i++)
        {   
            if(n%i == 0)
            {
                printf("%d eh divisor de %d\n",i,n);
            }
        }
        

}
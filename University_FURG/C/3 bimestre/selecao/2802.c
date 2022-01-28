#include <stdio.h>
int main(){

    long long int n;
    long long int c;
    int soma;
    soma = 0;

    scanf("%lld",&n);
    c = 1 + (((n-1)*n)/2) + (((n)*(n - 1)*(n - 2 )*(n - 3))/24);
    printf("%lld",c);
return 0;
}
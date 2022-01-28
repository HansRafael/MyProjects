#include <stdio.h>

long long int Fatorial(long long int);

int main() 
{
    long long int a,b,soma;

    scanf("%lld%lld",&a,&b);
    printf("%lld",(Fatorial(a)+Fatorial(b)));

    return 0;

}


long long int Fatorial(long long int a)
{
    int c;
    long long int result = 1;

    for (c = 1; c <= a; c++)   
        result = result * c;
        
    return result;

}
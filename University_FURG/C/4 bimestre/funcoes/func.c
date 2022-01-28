#include <stdio.h>
int fun(int a)
{
    return (a*a*a) + 1;

}
int cubo(int k, int l)
{
    return (k*l) + (k - l);
}

int main()
{
    int a,b,d,e,f;
    a = 2;
    d = 10;
    e = 32;
    b = fun(a);
    f = cubo(d,e);
    printf("%d\n",b);
    printf("%d",f);
}

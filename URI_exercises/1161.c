#include <stdio.h>

long long int fac(long long int n){
   long long int aux;
   int i;
   for(i = n; i > 0; i--){
      aux *= n;
      n--;
   }
   return aux;
}

int main()
{
 long long int m, n,aux,aux2;
 while(scanf("%lld %lld", &m, &n) != EOF)
{
   aux = fac(m);
   aux2 = fac(n);

   printf("%lld\n", aux + aux2);
}

 return 0;
}
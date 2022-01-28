#include <stdio.h>
#include <stdlib.h>
int main(){
    int x;
    int* prt = 100;
    prt = &x;
    x=10;
    


    printf("Valor de x ....: %d\n",x);
    printf("Valor de x ....: %d\n",prt);

    return 0;
}
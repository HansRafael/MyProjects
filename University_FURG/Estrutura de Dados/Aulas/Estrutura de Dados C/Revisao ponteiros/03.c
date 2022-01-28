#include <stdio.h>
#include <stdlib.h>  
int main(){

    void *pp;
    int *pl, x = 10;
    pl = &x;
    pp = &x;
    printf("Endereco em pp: %d \n",* (int*)pp);
    pp = &pl;
    printf("Endereco em pp: %p \n",pp);
    pp = pl;
    printf("Endereco em pp: %p \n",pp);

    system("pause");
    return -0;
}
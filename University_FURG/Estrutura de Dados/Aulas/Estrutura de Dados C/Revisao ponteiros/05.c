#include <stdio.h>
#include <stdlib.h>  
int main(){
    
    int x = 10;
    int *p = &x;
    int **p2 = &p;
    //endereço em p2
    printf("p2: %d\n",p2);
    //conteudo do endereço
    printf("*p2: %d\n",*p2);
    //conteudo do endereço do endereço
    printf("**p2: %d\n",**p2);
    system("pause");
    return 0;

}
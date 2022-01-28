#include <stdio.h>
#include <stdlib.h>  
int main(){
    int x = 10;
    int *p;

    p = &x;
    printf("x = %d\n",x);
    printf("&x = %d\n",&x);
    printf("p = %d\n",p);  //mesmo lugar q &x

    printf("___________________________\n");
    
    printf("x = %d\n",x);
    printf("p = %d\n",p);
    printf("*p = %d\n",*p); // * também é usado para acessar o conteudo do ponteiro

    printf("___________________________\n");

    printf("x = %d\n",x);
    *p = 12;
    printf("*p = %d\n",*p);
    printf("x = %d\n",x);
    
    
    system("pause");
    return 0;
}
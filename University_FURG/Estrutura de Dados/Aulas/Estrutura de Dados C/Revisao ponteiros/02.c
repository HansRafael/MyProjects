#include <stdio.h>
#include <stdlib.h>  
int main(){
    int *p, *pl, x = 10;
    float y = 20.0;
    p = &x; // recebe o ENDEREÇOO
    printf("*p: %d \n",*p);
    pl = p;
    printf("*pl: %d \n",*pl);
    p = &y;

    system("pause");
    return 0;

}
#include <stdio.h>
int main(){
    int a,b,div;
    scanf("%d",&a);
    scanf("%d",&b);

    div = b%a;
    if (b == 0)
        printf("divisao por 0 nao possivel");
    if (div == 0){
        printf("eh divisor");
    }
    else
        printf("nao eh");
    
}
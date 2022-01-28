#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);

    if (a >= 7 && a <= 12)
        printf("Bom dia!");
    if (a > 12 && a <= 19)
        printf("Boa tarde!");
    if (a > 19 || a < 7)    
        printf("Boa noite!");
    
}
#include <stdio.h>
int main(void){
    int a;
    printf("Digete um numero: ");
    scanf("%d",&a);
    switch (a){
        case (0 || 2 || 4 || 6 || 8 || 10):
            printf("Par, entre 0 e 10");
            break;
        case (1 || 3 || 5 || 7 || 9)
            printf("Impar, entre 0 e 10");
            break;
        default:
        printf("Nao esta entre 0 e 10");
        break;
    }
return 1;  
} 
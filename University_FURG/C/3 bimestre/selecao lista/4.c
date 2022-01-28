#include <stdio.h>
int main(void){
    int a;
    float b,c;
    
    printf("Conversao Dolar para Real - 1\n");
    printf("Conversao Real para Dolar - 2\n");
    scanf("%d",&a);
    
    switch(a)
    {
        case 1:
        printf("Cotacao Dolar:");
        scanf("%f",&b);
        printf("Quantos Dolares vc tem?:");
        scanf("%f",&c);
        printf("Voce tem %f Reais",(c*b));
        break;

        case 2:
        printf("Cotacao Dolar:");
        scanf("%f",&b);
        printf("Quantos dolares voce tem?:");
        scanf("%f",&c);
        printf("Voce tem %f dolares",(c/b));
        break;

}
    
}
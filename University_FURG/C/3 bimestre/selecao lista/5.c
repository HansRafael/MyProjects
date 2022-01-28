#include <stdio.h>
int main(void){
    int a;
    float b,total,parcela;
    
    printf("preco total:");
    scanf("%f",&b);
    printf("A vista - 1\n");
    printf("2x com acrescimo de 10%% - 2\n");
    printf("3x com acrescimo de 20%% - 3\n");
    scanf("%d",&a);
    
    switch(a)
    {
        case 1:
            printf("O valor fica %f",b);
            break;

        case 2:
        total = (b*1.10);
        printf("o valor fica %f, em %f de 2x",total,(total/2));
        break;
        case 3:
        total = (b*1.20);
        printf("o valor fica %f, em %f de 3x",total,(total/3));
        break;

}
    
}
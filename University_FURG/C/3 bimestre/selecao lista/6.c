#include <stdio.h>
int main(void){
    int a,a1;
    float b,c;
    
    printf("1 - Conta corrente \n");
    printf("2 - Aplicacoes \n");
    printf("3 - Cancelar operacao \n");
    scanf("%d",&a);
    
    switch(a)
    {
        case 1:
            printf("1- Saldo da Conta Corrente\n");
            printf("2- Extrato da Conta Corrente\n");
            printf("3- Saque da Conta Corrente\n");
            printf("4- Cancelar Operacao\n");
            scanf("%d",&a1);
        
        switch(a1){
        case (1 || 2 || 3 || 4):
            printf("Show");
        }
        ;

        case 2:
            printf("1- Saldo da Aplicacao\n");
            printf("2- Extrato da Aplicao\n");
            printf("3- Saque da Aplicacao\n");
            printf("4- Cancelar Operacao\n");

            scanf("%d",&a1);
        
        switch (a1){
        case (1 || 2 || 3 || 4):
            printf("Show");
        }
}
    
}
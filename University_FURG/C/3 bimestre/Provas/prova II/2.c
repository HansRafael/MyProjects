#include <stdio.h>
int main()
{
    int a,peso,idade;
    float dosagem;
    printf("Informe o Peso e a Idade respectivamente\n");
    scanf("%d\n%d",&peso,&idade);

    if (idade >= 14)
    {
        if (peso >= 50)
        {
            dosagem = (1200.0/200.0)*10.0;
            printf("A dosagem sera de %f gotas",dosagem);
        }
        else
        {
            dosagem = (855.0/200.0)*10.0;
            printf("A dosagem sera de %f gotas",dosagem);
        }
        
    }
    else
    {
        if(5 <= peso && peso <= 10)
        {
            dosagem = (130.0/200.0)*10.0;
            printf("A dosagem sera de %f gotas",dosagem);
        }
        if(10 < peso && peso <= 15)
        {
            dosagem = (250.0/200.0)*10.0;
            printf("A dosagem sera de %f gotas",dosagem);
        }
        if(15 < peso && peso <= 25)
        {
            dosagem = (350.0/200.0)*10.0;
            printf("A dosagem sera de %f gotas",dosagem);
        }
        if(25 < peso && peso <= 30)
        {
            dosagem = (500.0/200.0)*10.0;
            printf("A dosagem sera de %f gotas",dosagem);
        }
        if(30 < peso)
        {
            dosagem = (800.0/200.0)*10.0;
            printf("A dosagem sera de %f gotas",dosagem);
        }
    }
    
}
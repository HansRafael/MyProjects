#include <stdio.h>
int main()
{
    float a,imposto,valor;
    valor = 0;
    while (valor >= 0)
    {
        printf("Digite o valor: ");
        scanf("%f",&valor);
        if (valor <= 1903.98)
        {
            imposto += 0;
        }
        if (valor >= 1903.99 && valor <= 2826.65)
        {
            imposto += (valor * 7.5)/100.0;
        }
        if (valor >= 2826.56 && valor <= 3751.05)
        {
            imposto += (valor * 15)/100.0;
        }
        if (valor >= 3751.05 && valor <= 4664.68)
        {
            imposto += (valor * 22.5)/100.0;
        }
        if (valor < 4664.68)
        {
            imposto += (valor * 27.5)/100.0;
        }
    }
    printf("o imposto arrecaadado foi: %f",imposto);
}
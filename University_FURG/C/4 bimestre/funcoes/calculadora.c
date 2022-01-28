#include <stdio.h>

double soma(double x, double y)
{
    return (x + y);
}
double subtracao(double x, double y)
{
    return (x - y);
}
double Mult(double x, double y)
{
    return (x * y);
}
int div(double x, double y,double * out)
{

    if (y == 0)
        return 0;
    else
        *out = (x / y);
        return 1;
}
double Potencia(double x,double y)
{
    int i,Potencia_c = 1;
    for (i = 1; i <= y; i++)
    {
        Potencia_c = Potencia_c * x;
    }
    return Potencia_c;
}
int fat(int x, int * out)
{
    int i,fato = 1;
    if (x < 0)
        return 0;
    else
    {
        for (i = 1; i <= x; i++)
        {
            fato = fato * i;
        }
        * out = fato;
        return 1;
    }
}
float pi(int n)
{
    int cont;
    cont = 0;
    float x,result1,result2,i1,i2;
    result1=result2=0;
    i1 = 1;
    i2 = 3;

    if (n%2 == 0)
    {
        while(cont < (n/2.0)){
            result1 = result1 + (4.0/i1);
            result2 = result2 + (4.0/i2);
            cont ++;
            i1 = i1 + 4.0;
            i2 = i2 + 4.0;
    }
    }
    else{
        cont = 0;    
        while(cont < (n+1)/2){
            result1 = result1 + (4/i1);
            cont++;
            i1 = i1 + 4;
        }
        cont = 0;
        while(cont < (n-1)/2){
            result2 = result2 + (4/i2);
            cont++;
            i2 = i2 + 4;
        }
    } 
    x = (result1-result2);
    return x;
}
int main()
{
    int choice = 1,main_int_a,main_int_b,f_fat,arranjo_a,arranjo_b,arranjo_c;
    double main_a,main_b,f;
    float mainf_a;
    while (choice != 0)
    {
    printf("-----Menu-----\n0 - Sair\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n5 - Potencia\n6 - fatorial\n7 - Arranjo n elementos em grupo de p\n8 - Combinacao n elemtnso em grupo de p\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        scanf("%lf %lf", &main_a,&main_b);
        f = soma(main_a,main_b);
        printf("%.10lf\n",f);
        break;

    case 2:
        scanf("%lf %lf", &main_a,&main_b);
        f = subtracao(main_a,main_b);
        printf("%.10lf\n",f);
        break;

    case 3:
        scanf("%lf %lf", &main_a,&main_b);
        f = Mult(main_a,main_b);
        printf("%.10lf\n",f);
        break;
    
    case 4:
        scanf("%lf %lf", &main_a,&main_b);
        if (div(main_a,main_b,&f) == 0)
            printf("Divisao por 0 nao aceita.\n");
        else
            printf("%.10lf\n",f);
        break;
        
    case 5:
        scanf("%lf %lf", &main_a,&main_b);
        f = Potencia(main_a,main_b);
        printf("%.10lf\n",f);
        break;

    case 6:
        scanf("%d",&main_int_a);
        if (fat(main_int_a,&f_fat) == 0)
            printf("Impossivel fatorial por negativos\n");
        else
            printf("%d\n",f_fat);        
        break;

    case 7:
        scanf("%d %d",&main_int_a,&main_int_b);
        fat(main_int_a,&arranjo_a);
        f_fat = (main_int_a - main_int_b);
        fat(f_fat,&arranjo_b);
        printf("%d\n",(arranjo_a/arranjo_b));
        break;
    
    case 8:
        scanf("%d %d",&main_int_a,&main_int_b);
        fat(main_int_a,&arranjo_a);
        fat(main_int_b,&arranjo_c);
        f_fat = (main_int_a - main_int_b);
        fat(f_fat,&arranjo_b);
        printf("%d\n",(arranjo_a/(arranjo_c*arranjo_b)));
        break;
        

    }
    }
}

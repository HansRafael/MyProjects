#include <stdio.h>
int main()
{
    int a;
    float cont,c1,c2,c3,c4,votoNulo,votoBranco,total;
    c1=c2=c3=c4=votoNulo=votoBranco=0;
    cont = 1;
    while (cont != 0)
    {
        printf(" 1 - Jose\n 2 - Maria\n 3 - Carlao\n 4 - Hanzao\n 5 - Voto Nulo\n 6 - Voto Branco\n 0 - Fim\n");
        scanf("%d\n",&a);
        switch (a)
        {
            case 1:
                c1 = c1 + 1;
                break;
            case 2:
                c2++;
                break;
            case 3:
                c3++;
                break;
            case 4:
                c4++;
                break;
            case 5:
                votoNulo++;
                break;
            case 6:
                votoNulo++;
                break;
            case 0:
                cont--;
                break;
        }
    }
    total = c1+c2+c3+c4;
    printf("%1.f votos de Jose\n%2.f votos de Maria\n%2.f votos Carlao\n%2.f votos Hanzao\n%2.f votos nulos\n%2.f votos em branco\n",c1,c2,c3,c4,votoNulo,votoBranco);   
    printf("---------------PORCENTAGEM------------\n%.4f%% de Jose\n%2.f%% de Maria\n%2.f%% de Carlao\n%2.f%% de Hanzao\n",((c1/total)*100),((c2/total)*100),((c3/total)*100),((c4/total)*100));
    if (((c1/total)*100) > 50 || ((c2/total)*100) > 50 || ((c3/total)*100) > 50 || ((c4/total)*100) > 50)
        printf("__________________\nTERA SEGUNDO TURNO\n__________________");
}

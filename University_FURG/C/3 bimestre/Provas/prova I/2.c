#include <stdio.h>
int main()
{
    int andar1,andar2,andar3,temp1,temp2,temp3;
    printf("Funionarios: 1 Andar, 2 Andar e 3 Andar\n");
    scanf("%d %d %d",&andar1,&andar2,&andar3);

    if (andar1 == andar2 && andar2 == andar3)
        printf("Colocar a maquina no Segundo Andar");
    else
    {   
        temp2 = andar3*2 + andar1*2;
        temp1 = andar2*2 + andar3*4;
        temp3 = andar2*2 + andar1*4;
        if (temp2 > temp1 && temp2 > temp3)
            printf("Colocar Segundo Andar");
        if (temp1 > temp3 && temp1 > temp2 && temp2 > temp3)
            printf("Colocar Primeiro andar");
        if(temp3 < temp1 && temp3 < temp2 && temp2 < temp1)
            printf("colocar Terceiro andar");
        if(temp1 > temp2 && temp3 > temp2 && temp1>temp3)
            printf("Colocar Primeiro andar");
    }


}

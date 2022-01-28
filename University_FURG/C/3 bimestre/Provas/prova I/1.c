#include <stdio.h>
int main()
{
    int alunos,capa,viagem,a,cont,cont1;
    cont1 = 1;
    a = 0;
    printf("Diga a Capacidade e o Numero de Alunos:\n");
    scanf("%d\n%d",&capa,&alunos);


    if(alunos < capa)
        printf("Numero de viagens: 1");
    if(alunos == capa)
        printf("Numero de viagens: 2");
    if(alunos > capa)
    {
        a = capa - 1;
        capa--;
        while(a < alunos)
        {
            a = a + capa;
            cont1++;
        }
    printf("Numero de viagens: %d",cont1);
    }   
    
    }



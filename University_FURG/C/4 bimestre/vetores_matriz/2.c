///Ler notas dos alunos///

#include <stdio.h>
#define MAX 5
int main()
{
    float notas[MAX],x,k = 1;
    printf("Digite as notas:\n");
    for(int i = 0; i < MAX; i++)
        scanf("%f",&notas[i]);
    
    printf("Qual nota deseja acessar?\n");
    while (k > 0)
    {
        scanf("%f",&x);
        if (x <= 0)
            k--;
        else
            for(int i = 0; i < MAX; i++)
            {
                if((x == notas[i]) 
                    printf("Nota na possicao %d\n",i);
                
                                
            }

    }
}
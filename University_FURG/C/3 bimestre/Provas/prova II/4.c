#include <stdio.h>
int main()
{
    int n,i,cont,rot;
    rot = 0;
    cont = 0;
    char letra;
    printf("Digite o numero de comandos:\n");
    scanf("%d",&n);

    while(cont < n)
    {
        printf("E-Esquerda\nD-Direita\n");
        scanf("%s",&letra);
        if(letra == 'd')
        {
            rot = rot + 1;
            cont ++;
        }
        else
        {
            rot = rot - 1;
            cont ++;        
        }    
        
    }
    printf("%d",rot);
}
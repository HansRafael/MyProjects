#include <stdio.h>
#include <string.h>

int main()
{
    char Palavra[30];
    int cont = 0,i,tamanho,result;
    printf("Numero e quantidade de 'a' \n");
    scanf("%s",Palavra);

    tamanho = strlen(Palavra);
    for(i = 0; i < tamanho; i++)
    {
        if (Palavra[i] == 'a')
        {
            cont++;
        }
    }
    printf("A palavra tem %d letras e %d 'As'",tamanho,cont);

}
#include <stdio.h>
#include <string.h>

int main()
{
    char senha[20] = "computador", tentativa[30];
    int cont,result;
    printf("Digite a senha: 5 tentativas\n");
    for(cont = 4; cont >= 0; cont--)
    {
        scanf("%s",tentativa);
        result = strcmp(senha,tentativa); //compara strings
        if (result == 0)
            printf("Voce acertou!");
        else
        {
            printf("Errou, restam %d tentativas\n",cont);
        }
    }
}
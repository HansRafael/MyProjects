#include <stdio.h>
#include <string.h>
int main(){
    char Palavra[100];
    char Test[100];
    int n,i,k,cont=0;
    int aux;
    printf("Verificar se eh palindrome:\n");
    scanf("%s",Palavra);


    printf("%s\n",Palavra);


    strcpy(Test,Palavra);
    k = (strlen(Test) - 1);

    for(i = 0; i < strlen(Palavra); i++){
        if ( Test[k] == Palavra[i]){
            k--;
            cont++;
        }
        else
        {
            k--;
        }
    }
    if (cont == strlen(Palavra))
        printf("Eh palidrome");
    else
    {
        printf("Nao eh palindrome");
    }
    
}
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
typedef struct _pessoa
{
    long int codigo;
    char nome[MAX];
    int amigosCodigo[MAX];
}tp_pessoa;

tp_pessoa redeSocial[MAX];
int numeroAgenda = 0;

int menu(int* out){
    int n;
    printf("_____ ORKUT _____\n\nEscolha as opcoes:\n1 -Novo contato\n2 -Mostrar amigos\n3 -Pesquisar contato por nome\n4 -Modificar contato\n5 -Cancelar\n");
    scanf("%d",out);
}

void cadastroPessoa(tp_pessoa pessoa){
    agenda[numeroAgenda] = pessoa;
    numeroAgenda++;
}
tp_pessoa salvaCadastro(){
    tp_pessoa auxiliar;
        printf("\n\n");
        printf("Nome completo: ");
        fflush(stdin);
        fgets(auxiliar.nome,MAX,stdin);
        printf("Seu codigo: ");
        fflush(stdin);
        scanf("%d",&auxiliar.codigo);
        return auxiliar; 
}

int mostraAmigos(int x){
    printf("__________________________\n");
    printf("Amigos em comum: %s",agenda[x].nome);
}


int main(){
    int choice,k = 1;
    tp_pessoa novoContato;
    while (k != 0)
    {
        menu(&choice);
        switch (choice)
        {
        case 1:
            if (numeroAgenda < MAX){
                novoContato = salvaCadastro();
                cadastroPessoa(novoContato);
            }
            else{
                printf("Numero maximo de contatos (100) atingido!\n");
                break;
            }
            break;
}
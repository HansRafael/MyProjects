#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
#define STRING 255

typedef struct _nascimento
{
    int dia;
    int mes;
    int ano;
}tp_nascimento;

typedef struct _endereco {
    int numero;
    char rua[STRING];
} tp_endereco;

typedef struct _pessoa{
    char nome[STRING];
    char cidade[STRING];
    char estado[STRING];
    tp_endereco endereco;
    long int telefone;
    tp_nascimento dataNascimento;
}tp_pessoa;

tp_pessoa agenda[MAX];
int i;
int numeroAgenda = 0;

int menu(int* out){
    int n;
    printf("_____ AGENDA _____\n\nEscolha as opcoes:\n1 -Novo contato\n2 -Consultar todos contatos\n3 -Pesquisar contato por nome\n4 -Modificar contato\n5 -Cancelar\n");
    scanf("%d",out);
}

int mostraPessoa(int x){
        printf("__________________________\n");
        printf("Nome completo: %s",agenda[x].nome);
        printf("Data de nascimento:%d/%d/%d",(agenda[x].dataNascimento.dia),(agenda[x].dataNascimento.mes),(agenda[x].dataNascimento.ano));
        printf("\nNumero celular: %d",agenda[x].telefone);
        printf("\nEndereco: %sn %d",(agenda[x].endereco.rua),(agenda[x].endereco.numero));
        printf("\nCidade: %s",agenda[x].cidade);
        printf("Estado: %s",agenda[x].estado);
        printf("__________________________\n");
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
        fgets(auxiliar.nome, 50, stdin);
        printf("Data de nascimento:\nDia - ");
        fflush(stdin);
        scanf("%d",&auxiliar.dataNascimento.dia);
        printf("Data de nascimento:\nMes - ");
        fflush(stdin);
        scanf("%d",&auxiliar.dataNascimento.mes);
        printf("Data de nascimento:\nAno - ");
        fflush(stdin);
        scanf("%d",&auxiliar.dataNascimento.ano);
        printf("Numero celular: ");
        fflush(stdin);
        scanf("%ld",&auxiliar.telefone);
        printf("Endereco (rua): ");
        fflush(stdin);
        fgets(auxiliar.endereco.rua,50,stdin);
        printf("Endereco (numero): ");
        fflush(stdin);
        scanf("%d",&auxiliar.endereco.numero);
        printf("Cidade: ");
        fflush(stdin);
        fgets(auxiliar.cidade, 50, stdin);
        printf("Estado: ");
        fflush(stdin);
        fgets(auxiliar.estado, 50, stdin);
        return auxiliar;
}

void consultaNome(){
    char consulta[50];
    int k = 0;
    printf("Qual o contato que deseja encontrar?\n");
    fflush(stdin);
    fgets(consulta, 50, stdin);
    for(int i = 0; i <numeroAgenda; i++){
        if(strcmp(agenda[i].nome,consulta) == 0){
            mostraPessoa(i);
            k = 1;
        }
    }
    if (k == 0){
        printf("NOME NAO LISTADO\n");
    }
}

void modificarPessoa(){
    tp_pessoa novoContato1;
    int k;
    printf("Qual o contato que deseja modificar?\n");
    for(int i =0; i < numeroAgenda; i ++){
        printf("%d - %s",(i+1),(agenda[i].nome));
    }
    scanf("%d",&k);
    novoContato1 = salvaCadastro();
    agenda[(k-1)] = novoContato1;
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
            else
            {
                printf("Numero maximo de contatos (100) atingido!\n");
                break;
            }
            break;
        case 2:
            for(int i = 0; i< numeroAgenda; i++){
                mostraPessoa(i);
            }

            break;
        case 3:
            consultaNome();
            break;
        case 4:
            modificarPessoa();
            break;
        case 5:
            k = 0;
            break;
        }
    }
}


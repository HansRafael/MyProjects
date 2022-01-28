#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>
#define MAX 100

typedef struct _nascimento
{
    int dia;
    int mes;
    int ano;
}tp_nascimento;


typedef struct _endereco {
    int numero;
    char rua[20];
} tp_endereco;

typedef struct _pessoa{
    char nome[MAX];
    char cidade[MAX];
    char estado[MAX];
    tp_endereco endereco;
    long int telefone;
    tp_nascimento dataNascimento;
}tp_pessoa;


tp_pessoa agenda[5];
int i;
int numeroAgenda = 0;

int menu(int* out){
    int n;
    printf("_____ AGENDA _____\n\nEscolha as opcoes:\n1 -Novo contato\n2 -Consultar todos contatos\n3 -Pesquisar contato por nome\n4 -Modificar contato\n5 -Cancelar\n");
    scanf("%d",&n);
    * out = n;
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
        printf("Data de nascimento (dd/mm/aaaa): ");
        fflush(stdin);
        scanf("%d %d %d",&auxiliar.dataNascimento.dia,&auxiliar.dataNascimento.mes,&auxiliar.dataNascimento.ano);
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
    printf("Qual o contato que deseja encontrar?\n");
    fflush(stdin);
    fgets(consulta, 50, stdin);
    for(int i = 0; i <numeroAgenda; i++){
        if(strcmp(agenda[i].nome,consulta) == 0){
            mostraPessoa(i);
        }
    }
}

int mostraPessoa(int x){
        printf("Nome completo: %s",agenda[x].nome);
        printf("Data de nascimento:%d/%d/%d",agenda[x].dataNascimento.dia,agenda[x].dataNascimento.mes,agenda[x].dataNascimento.ano);
        printf("\nNumero celular: %d",agenda[x].telefone);
        printf("\nEndereco: %srua: %d",agenda[x].endereco.rua,agenda[x].endereco.numero);
        printf("\nCidade: %s",agenda[x].cidade);
        printf("Estado: %s",agenda[x].estado);
}

void modificarPessoa(){
    tp_pessoa novoContato1;
    char consulta[50];
    printf("Qual o contato que deseja modificar?\n");
    fflush(stdin);
    fgets(consulta, 50, stdin);
    for(int i = 0; i <numeroAgenda; i++){
        if(strcmp(agenda[i].nome,consulta) == 0){
            novoContato1 = salvaCadastro();
            agenda[i] = novoContato1;
        }
    }
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
            if (numeroAgenda < 5){
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


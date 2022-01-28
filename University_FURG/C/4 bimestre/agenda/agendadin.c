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
    char *rua;
} tp_endereco;

typedef struct _pessoa{
    char *nome;
    char *cidade;
    char *estado;
    tp_endereco endereco;
    long int telefone;
    int dd;
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
        printf("\nNumero celular: (%d) %d",agenda[x].dd,agenda[x].telefone);
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
    char consulta[100],consulta_2[100],consulta_3[100],consulta_4[100];
    int tamanho = 0;
        printf("\n\n");
        printf("Nome completo: ");
        fflush(stdin);
        fgets(consulta, 100, stdin);
        tamanho =strlen(consulta);
        auxiliar.nome = malloc(tamanho);
        strcpy(auxiliar.nome,consulta);
        printf("Data de nascimento:\nDia - ");
        fflush(stdin);
        scanf("%d",&auxiliar.dataNascimento.dia);
        printf("Data de nascimento:\nMes - ");
        fflush(stdin);
        scanf("%d",&auxiliar.dataNascimento.mes);
        printf("Data de nascimento:\nAno - ");
        fflush(stdin);
        scanf("%d",&auxiliar.dataNascimento.ano);
        printf("DD do celular: ");
        fflush(stdin);
        scanf("%ld",&auxiliar.dd);
        printf("Numero celular: ");
        fflush(stdin);
        scanf("%ld",&auxiliar.telefone);
        printf("Endereco (rua): ");
        fflush(stdin);
        fgets(consulta_2,100,stdin);
        auxiliar.endereco.rua = malloc(strlen(consulta_2));
        strcpy(auxiliar.endereco.rua,consulta_2);
        printf("Endereco (numero): ");
        fflush(stdin);
        scanf("%d",&auxiliar.endereco.numero);
        printf("Cidade: ");
        fflush(stdin);
        fgets(consulta_3, 100, stdin);
        auxiliar.cidade = malloc(strlen(consulta_3));
        strcpy(auxiliar.cidade,consulta_3);
        printf("Estado: ");
        fflush(stdin);
        fgets(consulta_4, 100, stdin);
        auxiliar.estado = malloc(strlen(consulta_4));
        strcpy(auxiliar.estado,consulta_4);
        return auxiliar;
}

void consultaNome(){
    char consulta[100];
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

    while (k <= 0 || k > numeroAgenda)
    {
        printf("Valor nao listado, digite outro\n");
        scanf("%d",&k); 
    }
    novoContato1 = salvaCadastro();
    agenda[(k-1)] = novoContato1;
}  

int main(){
    int choice,k = 1,lis=0;
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
        }}}


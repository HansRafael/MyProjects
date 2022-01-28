#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
#define STRING 255


typedef struct _pessoa{
    char *nome;
    int matricula;
    int position;
}tp_pessoa;

tp_pessoa agenda[MAX];
int i;
int numeroAgenda = 0;
int *posicao=0;

int menu(int* out){
    int n;
    printf("_____ DADOS ALUNO _____\n\nEscolha as opcoes:\n1 -Novo aluno\n2 -Consultar todos alunos\n3 -Pesquisar contato por nome\n4 -Modificar contato\n5 -Cancelar\n");
    scanf("%d",out);
}

int mostraPessoa(int x){
        printf("__________________________\n");
        printf("Nome completo: %s",agenda[x].nome);
        printf("Matricula: %d", agenda[x].matricula);
        printf("Posicao: %d",agenda[x].position);
          printf("__________________________\n");
}

void cadastroPessoa(tp_pessoa pessoa){

    agenda[*posicao] = pessoa;
    numeroAgenda++;
}

tp_pessoa salvaCadastro(){
    tp_pessoa auxiliar;
    char consulta[100];
    int tamanho = 0,posicaoo = 0;
        printf("\n\n");
        printf("Posicao do aluno: ");
        fflush(stdin);
        scanf("%d",&posicaoo);
        *posicao = (posicaoo-1);
        printf("Nome completo: ");
        fflush(stdin);
        fgets(consulta, 100, stdin);
        tamanho =strlen(consulta);
        auxiliar.nome = malloc(tamanho);
        strcpy(auxiliar.nome,consulta);
        printf("Matricula: - ");
        fflush(stdin);
        scanf("%d",&auxiliar.matricula);
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



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

typedef struct _pessoa{
    char nome[100];
    int dia;
    int mes;
    int ano;
}tp_pessoa;

tp_pessoa Aniver[MAX];
int numeroAniver = 0;

int menu(int* out){
    int n;
    printf("_____ ANIVERSARIO _____\n\nEscolha as opcoes:\n1 -Novo aniversariante\n2 -Consultar todos aniversariantes\n3 -Pessoas que fazem aniversario mesmo dia\n0 -Cancelar\n");
    scanf("%d",out);
}


int mostraPessoa(int x){
        printf("__________________________\n");
        printf("Nome completo: %s",Aniver[x].nome);
        printf("Data nascimento: %d/%d/%d\n",Aniver[x].dia,Aniver[x].mes,Aniver[x].ano);
        
}

void mesmoDia(){
    int k = 0,j = 0;
    printf("Qual dia deseja checar?\n");
    scanf("%d",&k);

    for(int i=0; i<numeroAniver; i++){
        if(Aniver[i].dia == k){
            mostraPessoa(i);
            j = 1;
        }
    }
    if (j == 0){
        printf("Nao ha aniversarios iguais\n");
    }
}


void cadastroPessoa(tp_pessoa pessoa){
    Aniver[numeroAniver] = pessoa;
    numeroAniver++;
}

tp_pessoa SalvaCadastro(){
    tp_pessoa auxiliar;
    printf("\n\n");
    printf("Nome completo: ");
    fflush(stdin);
    fgets(auxiliar.nome,100,stdin);
    printf("Data de nascimento:\nDia - ");
    fflush(stdin);
    scanf("%d",&auxiliar.dia);
    printf("Data de nascimento:\nMes - ");
    fflush(stdin);
    scanf("%d",&auxiliar.mes);
    printf("Data de nascimento:\nAno - ");
    fflush(stdin);
    scanf("%d",&auxiliar.ano);
    return auxiliar;
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
            if(numeroAniver < MAX){
                novoContato = SalvaCadastro();
                cadastroPessoa(novoContato);
            }
            else
            {
                printf("Numero maximo(5) atingido!\n");
                break;
            }
            break;
        case 2:
            for(int i = 0; i < numeroAniver; i++){
                mostraPessoa(i);
            }
            break;
        case 3:
            mesmoDia();
            break;
        case 0:
            k = 0;
            break;
        
        
        }
    }
}

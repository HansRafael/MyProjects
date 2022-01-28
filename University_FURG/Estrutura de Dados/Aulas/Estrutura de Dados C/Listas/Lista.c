#include "Lista.h"

struct lista{
    int qntd;
    struct aluno dados[MAX]; 
};

Lista* make_list(){
    Lista *li;
    li = (Lista*) malloc(sizeof(struct lista));
    if (li != NULL){
        li -> qntd = 0; //TENHO 0 possicoes ocupadas
    }
    return li;
}

void free_lista(Lista* li){
    free(li);
}


int tam_lista(Lista* li){
    if(li == NULL)
        return -1; //erro
    else
        return li->qntd; //retorna a quantidade dela -> == *li.
}


int inserir_lista_final(Lista* li,struct aluno x){
    if (li == NULL)
        return 0;
    if (list_cheia(li))
        return 0;
    li->qntd[li->dados] = x; //possicao apontada pelos dados
    li->qntd++;
    return 1;   
}

int inserir_lista_inicio(Lista* li, struct aluno x){
    if(li = NULL) return 0;
    if(list_cheia(li)) return 0;
    int i;
    for(i=li->qntd-1; i>=0; i--)
        li ->dados[i+1] = li->dados[i];
    li->dados[0] = x;
    li->qntd++;
    return 1;
}


int inserir_lista_ordenada(Lista* li,struct aluno x){
    if(li == NULL) return 0;
    if(list_cheia(li)) return 0;
    int i,k = 0;
    while(i<li->qntd && li->dados[i].matricula < x.matricula)
        i++;
    
    for(k=li->qntd-1; k >= i; k--)
        li->dados[k+1] = li->dados[k];
    li->dados[i] = x;
    li->qntd++;
    return 1;
}



int list_cheia(Lista* li){
    if(li == NULL)
        return -1;
    return (li ->qntd == MAX); //retorna 1 por padrao   
}
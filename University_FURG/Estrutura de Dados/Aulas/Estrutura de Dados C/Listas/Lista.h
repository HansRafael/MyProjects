#define MAX 100
 
struct aluno{  //este é o dado que irei guardar dentro da minha lista.
    int matricula;
    char nome[20];
    int presenca;
};

typedef struct lista Lista; //define um apelido p lista
Lista* make_lista(); //Funcao que ira inicializar a lista
void free_lista(Lista* li);
int tam_lista(Lista* li); //prototipo
int list_cheia(Lista* li);
int inserir_lista_final(Lista* li, struct aluno x);
int inserir_lista_inicio(Lista* li,struct aluno x);
int inserir_lista_ordenada(Lista* li,struct aluno x);
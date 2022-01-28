typedef struct ponto Ponto;

Ponto* point_make(float x, float y);   //cria meu ponto. Qndo crio um arquivo, ele devolve um ponteiro do arquivo
void point_free(Ponto* p); //libera espaço
void point_acess(Ponto* p, float* x, float* y);
void point_atribui(Ponto* p, float x, float y);
float point_distancia(Ponto* p1, Ponto* p2);

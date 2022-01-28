#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Ponto.h" //inclui os prototipos 

struct ponto{
    float x;
    float y;
};

Ponto* point_make(float x, float y){
    Ponto* p = (Ponto*) malloc(sizeof(Ponto)) ;
    if (p != NULL){
        p -> x = x; // -> se utiliza quando a variavel eh um ponteiro
        p -> y = y;
    }
    return p;
}

void point_free(Ponto* p){
    free(p);
}

void point_acess(Ponto* p, float* x, float* y){
    *x = p -> x;
    *y = p -> y;
}

void point_atribui(Ponto* p, float x, float y){
    p -> x = x;
    p -> y = y;
}

float point_distancia(Ponto* p1, Ponto* p2){
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt((dx * dx) - (dy * dy));
}







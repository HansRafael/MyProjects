#include <stdio.h>
#include <stdlib.h>
#include "Ponto.h"
#include <math.h>

int main(){
    float d;
    Ponto *q,*p;

    q = point_make(2,2);
    p = point_make(1,1);
    d = point_distancia(p,q);

    printf("Distancia entre pontos: %f \n",d);
    point_free(p);
    point_free(q);

    system("pause");
    return 0;
}
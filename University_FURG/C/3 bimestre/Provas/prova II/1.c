#include <stdio.h>
int main()
{
    float dist,tempo,vl;

    printf("Informe: Tempo em h e %% a Velocidade Media em Km/h\n");
    scanf("%f\n%f",&tempo,&vl);
    dist = (tempo * vl);

    printf("Percorreu %f Km e gastou %f litros",dist,(dist/12.0));


}
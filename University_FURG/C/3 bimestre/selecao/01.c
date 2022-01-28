#include <stdio.h>
int main(){
    float A,B,C,soma;

    printf("Digite as tres notas:");
    scanf("%f%f%f",&A,&B,&C);
    
    soma = (A+B+C)/3;

    if (soma>=5.0)
        printf("Aprovado, media: %f",soma);
    if (3.0 <= soma && soma<5.0)
        printf("Exame, media: %f",soma);
    if (soma<3.0)
        printf("Reprovado, media: %f",soma);

    return 0;
}
#include <stdio.h>
int main(){
    float a,b,div;
    scanf("%f",&a);
    scanf("%f",&b);

    if (b == 0)
        printf("Divisao por zero nao eh possivel\n");
    if (b != 0){
        div = (a/b);
        printf("a divao deu %f",div);
    }

}
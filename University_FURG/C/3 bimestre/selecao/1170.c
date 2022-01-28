#include <stdio.h>
int main(){
    int a;
    float a1;
    int contador;
    contador = 0;

    scanf("%d",&a);

    while(a != 0){
        scanf("%f", &a1);
        while (a1 > 1 )
        {
            a1 = a1/2;
            contador = contador + 1;
        }

        printf("%d dias\n",contador);
        contador = 0;
        a = a - 1;
    }
    return 0;


}
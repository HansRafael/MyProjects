#include <stdio.h>

int MDC(int x,int y){
    int j = 1,aux = 0;
    while(j){
        if(x>y){
            x = x - y;
            y = y;
        }
        if(x == y){
            j = 0;
        }
        else
        {
            aux = x;
            x = y;
            y = aux;
        }
        
    }
    return x;
}

int main(){
    int x,y,f;
    printf("Digite (x,y) para calcular o MDC:\n");
    scanf("%d %d",&x,&y);
    f = MDC(x,y);
    printf("o mdc de %d e %d eh: %d",x,y,f);


}
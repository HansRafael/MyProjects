#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

int main(){
    char paragrafo[MAX];
    int cont = 0;
    char* result;
    printf("Digite o texto com espacos\n");
    fflush(stdin);
    fgets(paragrafo,MAX,stdin);
    
    for(int i = 0; i<strlen(paragrafo); i++){
        if(strcmp(paragrafo[i],paragrafo[i+1]) == 0 ){
            cont++;
        }
    }
    printf("%d",cont);     

}

#include <stdio.h>
#include <string.h>
int main(){
    char Nome[5][30],word[30];
    int i,cont,j;
    for(i = 0; i < 5;i++){
        printf("Digite uma palavra\n");
        fgets(Nome[i],30-1,stdin);
    }
    printf("Qual palavra deseja acessar\n");
    fgets(word,30-1,stdin);
    
    for(i = 0; i < 5; i ++){
        if(strcmp(Nome[i],word)
            printf("%sesta na %d posicao",Nome[i],(i+1));
    }

}
}
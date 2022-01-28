#include <stdio.h>
#define MAX 40
int main()
{
    int Bus[MAX],n = 1,i,a;
    n = 0;
    for(i = 0; i < MAX; i++)
    {
        Bus[i] = n + 1;
        n = n + 1;
    }
    printf("Poltronas disponiveis\n______________________\n");
    for(i = 0; i < MAX; i++){
        if(i < 9)
            printf("0%d ",Bus[i]); 
        if(i == 9){
            printf("%d",Bus[i]);
            printf("\n");
        }
        if(i > 9 && i < 19)
            printf("%d ",Bus[i]);
        if(i == 19){
            printf("%d ",Bus[i]);
            printf("\n");
        }
        if(i >= 20 && i < 29)
            printf("%d ",Bus[i]);
        if(i == 29){
            printf("%d ",Bus[i]);
            printf("\n");
        }
        if(i >= 30)
            printf("%d ",Bus[i]);


}
    
    while (n != 0){
        printf("\n____________________\n");
        printf("Qual poltrona deseja?\n");
        scanf("%d",&a);
        if(a <= 0)
            n = 0;
        else
        {
            if(Bus[a-1] == 0)
                printf("lugar ocupado\n");
            else
            {
                Bus[a-1] = 0;
                printf("Reservado!\n");
            }
                
        }
        
    for(i = 0; i < MAX; i++){
        if(i < 9)
            printf("0%d ",Bus[i]); 
        if(i == 9){
            printf("%d",Bus[i]);
            printf("\n");
        }
        if(i > 9 && i < 19)
            printf("%d ",Bus[i]);
        if(i == 19){
            printf("%d ",Bus[i]);
            printf("\n");
        }
        if(i >= 20 && i < 29)
            printf("%d ",Bus[i]);
        if(i == 29){
            printf("%d ",Bus[i]);
            printf("\n");
        }
        if(i >= 30)
            printf("%d ",Bus[i]);
    }
    }
}
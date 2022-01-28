#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mostraSegundo(int seg,int min,int hr,int *out){
    int hora,minu;
    if(seg < 0 || min < 0 || hr < 0){
        hora = (hr * 3600);
        minu = (min * 60);
        * out = (hora+minu+seg);
        return -1;
    }
    else
    {
        hora = (hr * 3600);
        minu = (min * 60);
        * out = (hora+minu+seg);
        return 1;
    }
}

int mostraCompleto(int seg,int* out_hr,int* out_min,int*out_seg){
    int hora = 0,minu = 0,segu = 0;
    float f = 60;
    if(seg < 0){
        return -1;
    }
    else
    {
        if(seg < 60){
            segu = seg;
        }
        if(seg >= 60 && seg < 3600){
            minu = seg/60;
            segu = seg - (minu*60);
            
        }
        else
        {
            hora = seg/3600;
            minu = ((hora*60)-(seg/60))*-1;
            segu = seg%60;
        }
        
        * out_hr = hora;
        * out_min = minu;
        * out_seg = segu;
        return 1;
    }
}




int main(){
    int choice;
    int seg,min,hr,seg_out;
    int seg1,min1,hr1,seg_out1;
    int result;
    int ka=1;
    while(ka!=0)
    {
        printf("1- transforma horas, minutos e seugndos em segundo\n");
        printf("2- Segundos e retorna em horas,minutos e segundos\n");
        printf("3 - cancelar\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("digite a hora - minutos - segundos:\n");
            scanf("%d %d %d",&hr,&min,&seg);
            if (mostraSegundo(seg,min,hr,&result) == 1){
                printf("O valor em segundo eh %d\n",result);
            }
            else
            {
                mostraSegundo(seg,min,hr,&result);
                printf("Um valor foi negativado, numero aproximado em seg: %d\n",result);
            }
            
            break;  
        case 2:
            printf("Digite os segundos\n");
            scanf("%d",&seg1);
            if (mostraCompleto(seg1,&hr1,&min1,&seg_out1) == -1){
                printf("Nao eh possivel, segundo esta negativo\n");
            }
            else
            {
                mostraCompleto(seg1,&hr1,&min1,&seg_out1);
                printf("%d:%d:%d\n",hr1,min1,seg_out1);
            }
            break;
        case 3:
            ka = 0;

        }
    }
}
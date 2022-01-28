#include <stdio.h>

int main()
{    
    int a,b,c,d,e,f,cont;
    cont = 0;
    a = 500;
    b = 1;
    d = 0;
    e = 0;
    while(b != 0)
    {
        printf("Numero = %d\n1 - Numero eh igual?\n2 - Numero eh menor?\n3 - Numero eh maior?\n",a);
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                cont++;
                b--;
                break;
            case 2:
                a = a/2;
                cont ++;
                break;
            case 3:
                e = a;
                if (e > d){ 
                a = e + ((e-d)/2);
                d = e;
                printf("%d",d);
                }
                else
                {
                    a = e + ((d-e)/2);
                    d = e;
                }
                
                cont++;
                break;
        }    
    }
    printf("O numero era %d\nVoce tentou %d vezes",a,cont);
}
#include <stdio.h>
int main()
{
    int n,cont;
    cont = 0;
    float result1,result2,i1,i2;
    result1=result2=0;
    i1 = 1;
    i2 = 3;
    scanf("%d",&n);


    if (n%2 == 0)
    {
        while(cont < (n/2)){
            result1 = result1 + (4/i1);
            result2 = result2 + (4/i2);
            cont ++;
            i1 = i1 + 4;
            i2 = i2 + 4;
    }
    }
    else{
        cont = 0;    
        while(cont < (n+1)/2){
            result1 = result1 + (4/i1);
            cont++;
            i1 = i1 + 4;
        }
        cont = 0;
        while(cont < (n-1)/2){
            result2 = result2 + (4/i2);
            cont++;
            i2 = i2 + 4;
        }
    } 
    printf("%f",(result1-result2));
}

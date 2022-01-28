#include <stdio.h>
int main()
{
    int a,b,c,d,div1,div2,result1,result2,cont,i;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    div2 =  b*d;
    div1 = (a*d) + (c*b);

    for(i = 1; i <= div2; i++){
        if (div1%i == 0 && div2%i == 0){
            result1 = (div1/i);
            result2 = (div2/i);
        }
    }
    printf("\n%d %d",result1,result2);
    return 0;
}
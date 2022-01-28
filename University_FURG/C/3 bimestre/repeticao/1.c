#include <stdio.h>
int main(){

    int a;
    int i;
    a = 0;
    for(i = 1; i<=100; i= i +2){
        a = a+i;
        printf("%d\n",a);
    }
    printf("%d",a);
    
}
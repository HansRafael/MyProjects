#include<stdio.h>
int main() 
{
    int x,y;
    int a = 14, b = 3;
    float z;
    x = a/b;
    y = a%b;
    z = (float)y/x;
    printf("%d %d %d %d %f",x,y,a,b,z);
    return 0;
}
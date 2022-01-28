#include<stdio.h>
int main() 
{
    int x,y,z;
    x=y=10;
    z=x;
    x++;
    x=-x;
    y++;
    x=x+y-((z)*10);
    printf("%d %d %d",x,y,z);
    return 0;
}
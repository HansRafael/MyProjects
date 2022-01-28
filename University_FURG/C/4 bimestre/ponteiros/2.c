#include <stdio.h>
#include <stdlib.h>
int main()
{
    while(1)
    {
    int *p;
    p = malloc(1000000);
    printf("%p\n",p);
    *p = 'h';
    printf("%c\n",*p);
    *(p+1) = 'a';
    printf("%c\n",*(p+1));
    *(p+2) = 'n';
    printf("%c\n",*(p+2));
    *(p+3) = 's';
    printf("%c\n",*(p+3));
    }


}
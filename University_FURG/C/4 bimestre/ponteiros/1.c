#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *n = NULL;
    int x = 51;
    int* out = &x;
    printf("%p\n",out);
    printf("%d\n",*out); //diz aonde esta apontando


}
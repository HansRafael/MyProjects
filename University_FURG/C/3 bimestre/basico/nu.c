#include <stdio.h>
int main()
{
    int x = 5, y = 5, w, v;
    v = ++x;
    w = y--;
    printf("\n x=%d y=%d v=%d w=%d", x, y, v, w);
}
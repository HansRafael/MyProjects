#include <stdio.h>
#include <conio.h>
int main() {
    unsigned n, d;
    printf("\nDigite um numero: ");
    scanf("%u", &n);
    printf("\nOs seus digitos sao: ");
    while( n != 0 ) {
        d = n % 10;
        n /= 10;
        printf("%u ", d);
    }
    getch();
}
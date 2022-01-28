#include <stdio.h>
int main() {
int i, j;
printf("\nEntre com dois numeros inteiros: ");
scanf("%d%d", &i, &j);
printf("\n%d == %d eh %d\n", i, j, i==j);
printf("\n%d != %d eh %d\n", i, j, i!=j);
printf("\n%d <= %d eh %d\n", i, j, i<=j);
printf("\n%d >= %d eh %d\n", i, j, i>=j);
printf("\n%d < %d eh %d\n", i, j, i<j);
printf("\n%d > %d eh %d\n", i, j, i>j);
return(0);
}

main() {
int a; /* a e um inteiro */
int *aPtr; /* aPtr e um ponteiro para um inteiro */
a = 7;
aPtr = &a; /* aPtr define o endereço de a */

printf("0 endereço de a e %p\n"               /*O endereço de a e FFF4  */ 
"O valor de aPtr e %p\n\n", &a, aPtr);        //O valor de aPtr e FFF4s

printf("O valor de a e %d\n"              // O valor de a e 7
"O valor de *aPtr e %d\n\n", a, *aPtr);    //o valor de *aPtr e 7

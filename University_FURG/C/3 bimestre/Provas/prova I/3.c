#include  <stdio.h> 
#include  <stdlib.h>
int main()
{     i nt n, a =0, b= 0, countA=0,  countB=0, i;            while ( 1){               sc anf( "% d" , & n) ;             if (n ==  0)                bre ak;            for(i =0; i<n; i ++) {            scanf (" %d %d", &a, & b) ;                      i f( a>b){                         countA=  countA+1;}                        i f( a<b){                         countB= countB+1;}                        i f( a==b){                          countA =  countA+0;                          countB  = countB+ 0;}      }      printf( " %d %d \n",countA,countB) ; }    return 0;   } 

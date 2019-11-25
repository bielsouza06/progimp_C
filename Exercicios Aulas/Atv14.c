#include <stdio.h>
#include <stdlib.h>
int main (void)

{
    int num,fib,acm,acm2,i;
    fib=1;
    acm=0;
    scanf ("%d",&num);
    printf ("1\n");
    for (i=2;i<=num;i++){
         fib=acm2+acm;
         acm=acm2;
         acm2=fib;
         printf ("%d\n",fib);
    }
    return 0;
}
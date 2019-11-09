// E = 1 + 1/1! + 1/2! + 1/3! ... + 1/N!
// Não tenho certeza se ta calculando corretamente... 
#include <stdio.h>
#include <stdlib.h>

int main (void)

{

float n,e,i,j,fat;

 scanf ("%f", &n);
 e = 1;
 for (i=1;i<=n;i++){
      fat=1;
      for (j=1;j<=i;j++){
           fat = fat*j;
      }
      e=e+(1/fat);
 }

 printf ("%f", e);
 return 0;
}
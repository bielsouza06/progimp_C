//Programa que recebe três notas, calcula e motra a média aritmética.

#include <stdio.h>
#include <stdlib.h>

int main (void)

{

float nt1,nt2,nt3,media;

   printf ("Insira a primeira nota \n");
   scanf  ("%f",&nt1);
   printf ("Insira a segunda nota \n");
   scanf  ("%f",&nt2);
   printf ("Insira a terceira nota \n");
   scanf  ("%f",&nt3);
   media = (nt1+nt2+nt3)/3;
   printf ("%f", media);

   return 0;
}
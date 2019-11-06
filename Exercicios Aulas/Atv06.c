#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main (void)

{

  float n1,n2,n3,media;
  setlocale(LC_ALL, "Portuguese");

  printf ("Insira as 3 notas do aluno\n");
  scanf  ("%f %f %f",&n1,&n2,&n3);
  media = (n1*2.0+n2*3.0+n3*5.0)/10.0;
  if (media >= 8.0) {printf ("Média: %f\nConceito: A",media);}
   else if (media >= 7.0) {printf ("Média: %f\nConceito: B",media);}
   else if (media >= 6.0) {printf ("Média: %f\nConceito: C",media);}
   else if (media >= 5.0) {printf ("Média: %f\nConceito: D",media);}
   else if (media < 5.0) {printf ("Média: %f\nConceito: E",media);}

   return 0;

}
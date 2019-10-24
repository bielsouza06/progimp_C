/* Programa que recebe o salário de um funcionário e o percentual
de aumento, calcula e mostra o valor do aumento e o novo salário. */

#include  <stdlib.h>
#include  <stdio.h>

int main (void)

{

float sal, perc, aum, nsal;
   scanf  ("%f %f",&sal,&perc);
   aum = sal*(perc/100);
   printf ("O aumento; %f\n", aum);
   nsal = sal + aum;
   printf ("Novo salario %f \n", nsal);

   return 0;

}
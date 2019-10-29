/*Programa que recebe um numero, calcula e o mostra 
ao quadrado, cubo, raiz quadrada e raiz cubica.*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (void)

{

float num, quad, cubo, r2, r3;
  scanf  ("%f",&num);
  quad = num*num;
  cubo = pow (num,3);
  r2 = sqrt (num);
  r3 = pow (num, (1.0/3.0));
  printf ("Quadrado:%f\nCubo:%f\nRaiz2:%f\nRaiz3:%f\n",quad,cubo,r2,r3);

  return 0;

}
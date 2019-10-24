/*
Programa que recebe o salário base de um funcionário, calcula e mostra o 
salário a receber depois de calcular uma gratificação de 5% e imposto de 
%7, os dois sobre o salário base.
*/

#include <stdlib.h>
#include <stdio.h>

int main (void)

{

float base, receber, bonus, imposto;
   
   scanf  ("%f",&base);
   bonus = base * (5/100.0);
   imposto = base * (7/100.0);
   receber = (base + bonus - imposto);
   printf ("Salario final: %f",receber);

   return 0;

}
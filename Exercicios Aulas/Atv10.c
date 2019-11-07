#include <stdio.h>
#include <stdlib.h>

int main (void)

{

float i,ano,salario,novosal,perc;

printf ("Insira o ano atual\n");
scanf  ("%f",&ano);

salario = 1000.0;
perc = 1.5/100.0;
novosal = salario + (perc*salario);

for (i=2007.0; i <= ano;i++){
     perc=2.0*perc;
     novosal = novosal + (novosal*perc);}

printf ("Salario atual: %.2f",novosal);
return 0;
}
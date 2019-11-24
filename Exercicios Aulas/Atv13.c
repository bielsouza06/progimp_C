#include <stdio.h>
#include <stdlib.h>

int main (void)

{
float prc_fab,prc_final,per_dist,per_imp,luc_dist,imp;

printf ("Insira as informações a seguir:\nPreço de Fabrica:\n");
scanf  ("%f",&prc_fab);
printf ("Percentual de lucro do distribuidor:\n");
scanf  ("%f",&per_dist);
luc_dist = prc_fab*(per_dist/100.0);
printf ("Percentual de imposto:\n");
scanf  ("%f",&per_imp);
imp = prc_fab*(per_imp/100.0);
prc_final = prc_fab+luc_dist+imp;
printf ("Lucro Dist.: %.2f\nImpostos: %.2f\nPreço Final: %.2f",luc_dist,imp,prc_final);

return 0;
}
//algo de errado, não está certo
#include <stdio.h>
#include <stdlib.h>
int main (void)

{
float sal,imp,novosal,opc;

printf ("Menu de Opções:\n");
printf ("1. Imposto\n");
printf ("2. Novo Slário\n");
printf ("3. Classificação\n");
printf ("Digite a opção desejada.\n");
scanf ("%f",&opc);
while ((opc < 1) && (opc > 3)) {
    printf ("Opção invalida");}

if (opc = 1.0) {
    scanf ("%f",&sal);
    if (sal < 500.0){
        imp=sal*(5.0/100.0);}
    if (sal >= 500.0 && sal <= 850.0){
        imp=sal*(10.0/100.0);}
    if (sal > 850.0){
        imp=sal*(15.0/100.0);}
    printf ("%f",imp);
}

if (opc = 2.0){
    scanf ("%f",&sal);
    if (sal>1500.0){
        novosal = sal+25.0;}
    if (sal >= 750.0 && sal <= 1500.0){
        novosal = sal+50.0;}
    if (sal >= 450.0 && sal < 750.0){
        novosal = sal+75.0;}
    if (sal <450.0){
        novosal=sal+100.0;}
    printf ("%f",novosal);
}    

if (opc = 3.0){
    scanf ("%f",&sal);
    if (sal<=700.0){
        printf ("Mal Remunerado");}
        else printf ("Bem Remunerado");
}

return 0;
}
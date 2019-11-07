// Exemplo de programa pra somar 5 numeros
// utilizando um contador.

#include <stdio.h>
#include <stdlib.h>

int main (void)

{

int soma,num,cont;
soma=0;
cont=1;

do {
    scanf ("%d",&num);
    soma=num+soma;
    cont++;
} while (cont <=5);

printf ("A soma: %d",soma);

return 0;

}
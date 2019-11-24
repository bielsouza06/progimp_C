/*Faça um programa que receba o ano de nascimento de uma 
pessoa e o ano atual, calcule e mostre:
a) a idade dessa pessoa;
b) quantos anos ela terá em 2050.
*/
#include <stdio.h>
#include <stdlib.h>

int main (void)

{
int atual,nascimento,idade,i2050;

printf ("Insira o ano de nascimento\n");
scanf  ("%d",&nascimento);
printf ("Insira o ano atual\n");
scanf  ("%d",&atual);
idade = atual-nascimento;
i2050 = 2050-nascimento;
printf ("Idade atual: %d\nIdade em 2050: %d",idade,i2050);
return 0;

}
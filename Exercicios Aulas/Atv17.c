//Verificar numeros primos dentro de um vetor
//Imprimir cada primo e suas respectivas posições... 

#include <stdio.h>
#include <stdlib.h>
#define n 9

int main (void)

{
int vet[n], i,j,cont;
for (i=0; i<n; i++){
    scanf ("%d",&vet[i]);
}
for (i=0;i<n;i++){
    cont = 0;
    for (j=1;j<=vet[i];j++){
        if ((vet[i]%j) == 0){
        cont=cont+1;}
    }
    if (cont <= 2){
        printf ("Numero Primo: %d Posição: %d \n",vet[i],i);

}
}
return 0;
}
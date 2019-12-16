/*Preenche um vetor com oito números, calcula e mostra dois vetores 
resultantes. Um com os números positivos e outro com o negativos.*/
#include <stdio.h>
#include <stdlib.h>
#define n 8

int main (void){

    int v[n], pos[n], neg[n];
    int i,cp,cn;

    for (i=0; i<n; i++){
        scanf ("%d",&v[i]);
    }

    cp=cn=0;
    for (i=0;i<n;i++){
        if (v[i] >= 0){
            pos[cp]=v[i];
            cp++;
        } else {
            neg[cn]=v[i];
            cn++;
        }
    }

    printf ("Vetor positivo:\n ");
    for (i=0;i<cp;i++){
        printf ("%d  ",pos[i]);
    }
    printf ("\n");

    printf ("Vetor negativo:\n ");
    for (i=0;i<cn;i++){
        printf ("%d  ",neg[i]);
    }
    printf ("\n");

    return 0;
}
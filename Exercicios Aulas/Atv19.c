//Preenche dois vetores de 10 elementos 
//e imprime a intercalação entre eles
#include <stdio.h>
#include <stdlib.h>
#define n 10

int main (void){

    int v1[n], v2[n], vr[n*2];
    int i,cont;

    for (i=0; i<n; i++){
        scanf ("%d",&v1[i]);
    }
     for (i=0; i<n; i++){
        scanf ("%d",&v2[i]);
    }
    cont=0;
    for (i=0; i<n; i++){
        vr[cont]=v1[i];
        cont++;
        vr[cont]=v2[i];
        cont++;
    }

    for (i=0;i<n*2;i++){
        printf ("%d  ",vr[i]);
    }

}
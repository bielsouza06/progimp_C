/*
Crie um programa que preencha uma matriz 10 X 20 com números inteiros e 
some cada uma das linhas, armazenando o resultado das somas em um vetor. 
A seguir, o programa deverá multiplicar cada elemento da matriz pela 
soma da linha correspondente e mostrar a matriz resultante. 
*/

#include <stdio.h>
#include <stdlib.h>
#define l 10   
#define c 20

int main (void){

    int mat[l][c],v[l],R[l][c];
    int i, j,soma;

    for (i=0; i<l; i++){
        for (j=0; j<c; j++){
            scanf ("%d",&mat[i][j]);
        }
    }
    
    for (i=0;i<l;i++){
        soma=0;
        for (j=0;j<c;j++){
            soma=soma+mat[i][j];
        }
        v[i]=soma;
    }

    for (i=0;i<l;i++){
        for (j=0;j<c;j++){
            mat[i][j]=mat[i][j]*v[i];
        }
    }

    for (i=0; i<l; i++){
        for (j=0; j<c; j++){
            printf ("%d  ",mat[i][j]);
        }
        printf ("\n");
    }
    
    return 0;


}
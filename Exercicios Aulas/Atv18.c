//Multiplica todos os elementos da matriz pelo maior elemento dela
#include <stdio.h>
#include <stdlib.h>
#define m 2
#define n 2

int main (void)
{
int mat[m][n],r[m][n],j,i,maior;

   for (i=0;i<m;i++){
        for (j=0;j<n;j++){
           scanf ("%d",&mat[i][j]);
        }
    }
   maior = mat[0][0];
   for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            if (mat[i][j]>maior){
               maior=mat[i][j];
            }
        }
    }
   
   for (i=0;i<m;i++){
        for (j=0;j<n;j++){
           r[i][j] = maior*mat[i][j];
        }
    }
   for (i=0;i<m;i++){
        for (j=0;j<n;j++){
           printf ("%d  ",r[i][j]);
        }
   printf ("\n");
    }
return 0;
}
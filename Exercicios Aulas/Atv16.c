#include <stdio.h>
#include <stdlib.h>
#define n 5

int main (void)

{

int v[n], i, j, aux;
for (i=0;i<n; i++){
    scanf ("%d", &v[i]);
}
for (i=0; i<n; i++){
    for (j=0; j<n; j++){
        if (v[j] < v[j+1]){
            aux = v[j];
            v[j] = v[j+1];
            v[j+1] = aux;
        }
    }
}
for (i=0;i<n;i++){
    printf ("%d",v[i]);
}
return 0;
}
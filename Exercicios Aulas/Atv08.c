#include <stdio.h>
#include <stdlib.h>

int main (void)

{

float x,y;
 y = 0;
 scanf ("%f", &x);
 while (x != 0) {
     y=x+y;
     scanf ("%f", &x);}
 
 printf ("A soma é %f", y);

 return 0;


}
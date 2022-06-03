#include <stdio.h>

int main(){


float A, B, C, D, E, F, X;


scanf("%f %f %f %f %f %f", &A, &B, &C, &D, &E, &F);

X = (((A+B)/(C-D))*E)/((F/(A*B))+E);

printf("%f", X);






return 0;
}

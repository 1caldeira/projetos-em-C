#include <stdio.h>

int main(){

   int x;
   double valor, quantidadeComprada;

   scanf("%i %lf", &x, &quantidadeComprada);

   switch (x){


     case 1:

   valor = 4.00;

   break;

     case 2:

        valor = 4.50;

        break;

     case 3:

        valor = 5.00;

        break;

     case 4:

        valor = 2.00;

        break;

     case 5:

        valor = 1.50;

        break;


   }


   printf("Total: R$ %.2lf\n", valor * quantidadeComprada);


   return 0;
}

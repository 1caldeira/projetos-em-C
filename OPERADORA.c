#include <stdio.h>


int main()
{

    int minutos;
    double valorTotal;



    printf("Digite a quantidade de minutos: ");
    scanf("%i", &minutos);

    if (minutos <= 100){

        valorTotal = 50;

        printf("Valor a pagar: R$%.2lf", valorTotal);
    } else {

    valorTotal = 50 + (minutos % 100) * 2;

    printf("Valor a pagar: R$%.2lf", valorTotal);


    }


    return 0;
}




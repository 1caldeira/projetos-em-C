#include <stdio.h>


int main()
{

    int x, soma, cont;
    double media;

    cont = 0;
    x = 0;
    soma = 0;
    media = 0;


    printf("Digite as idades:\n");
    scanf("%d", &x);

    while (x >= 0){


        soma = soma + x;
        cont = cont + 1;

        scanf("%d", &x);
    }

    if (cont == 0) {


        printf("IMPOSSIVEL CALCULAR");
    }

    else{

    media = (double)soma/cont;

        printf("MEDIA = %.2lf\n",  media);

    }

    return 0;
}




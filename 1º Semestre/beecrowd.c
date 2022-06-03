#include <stdio.h>
int main()
{

float valor;
int cont100, cont50, cont20, cont10, cont5, cont2, cont1, cont050, cont025, cont010, cont005, cont001;


scanf("%f", &valor);

cont100 = 0;

while (valor > 100);

    valor = valor - 100;

    cont100 = cont100 + 1;

    printf("notas de 100: %i", cont100);


    return 0;

}

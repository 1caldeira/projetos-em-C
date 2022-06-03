#include <stdio.h>
int main()
{

double larguraTerreno, comprimentoTerreno, valorm2, area, preco;



printf("Digite a largura do terreno: ");
scanf("%lf", &larguraTerreno);
printf("Digite o comprimento do terreno: ");
scanf("%lf", &comprimentoTerreno);
printf("Digite o valor do metro quadrado: ");
scanf("%lf", &valorm2);

area = larguraTerreno * comprimentoTerreno;
preco = area * valorm2;

printf("Area do terreno = %.2lf\n", area);
printf("Preco do terreno = %.2lf", preco);

    return 0;

}




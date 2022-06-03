#include <stdio.h>

int main()
{

    float salario, reajustePorcento, novoSalario, reajusteGanho;

    scanf("%f", &salario);

    if (salario <= 400)
    {

        reajustePorcento = 0.15;

    }
    else if (salario <= 800)
    {

        reajustePorcento = 0.12;

    }
    else if (salario <= 1200)
    {

        reajustePorcento = 0.10;

    }
    else if (salario <= 2000)
    {

        reajustePorcento = 0.07;

    }
    else
    {

        reajustePorcento = 0.04;

    }

    reajusteGanho = salario * reajustePorcento;
    novoSalario = salario + reajusteGanho;

    printf("Novo salario: %.2f\n", novoSalario);
    printf("Reajuste ganho: %.2f\n", reajusteGanho);
    printf("Em percentual: %.0f %%\n", reajustePorcento * 100);

    return 0;
}

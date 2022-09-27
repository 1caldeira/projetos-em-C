//Inclui algumas variaveis e printfs a mais na funcao com a finalidade de demonstrar melhor o funcionamento do codigo
#include <stdio.h>
#include <math.h>

float soma (int n);

int main()
{

    int d;
    printf("Informe o n-esimo numero da soma: ");
    scanf("%d", &d);

    printf("Resultado: %f\n", soma(d));


    return 0;
}

float soma(int n)
{

    float resultado, numerador, denominador;

    if (n == 1)
    {
        printf("2.0 / 4.0 = 0.5\n");
        return 0.5;
    }
    numerador = pow(n,2)+1;
    denominador = n+3;
    printf("%.1f / %.1f = ", numerador, denominador);
    resultado = ((pow(n,2))+1)/((float)n+3);
    printf("%f\n", resultado);
    return (((float)pow(n,2))+1)/(n+3) + soma(n-1);


}

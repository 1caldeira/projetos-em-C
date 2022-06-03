//Escreva uma função para calcular e devolver o fatorial de um número natural passado como
//parâmetro.

#include <stdio.h>

int fatorial(int x);

int main()
{

    int num, resultado;

    scanf("%d", &num);

    resultado = fatorial(num);
    printf("%d", resultado);


    return 0;
}

int fatorial(int x)
{

    int fat = 1, i;

    for(i=1; i<=x; i++)
    {
        fat = i * fat;
    }
    return fat;
}

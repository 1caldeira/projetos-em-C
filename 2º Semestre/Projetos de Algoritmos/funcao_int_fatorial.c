//Escreva uma fun��o para calcular e devolver o fatorial de um n�mero natural passado como
//par�metro.

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

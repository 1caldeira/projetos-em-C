// Criar um programa que dados 3 n�meros inteiros, utilize uma fun��o do tipo void que receba
//esses n�meros como par�metro e imprima o maior deles.


#include <stdio.h>

void maiorNum (int x, int y, int z);

int main()
{
    int a, b, c;
    printf("Digite 3 numeros: ");
    scanf("%d %d %d", &a, &b, &c);
    maiorNum(a, b, c);

    return 0;
}

void maiorNum(int x, int y, int z)
{

    if(x>y && x>z)
    {
        printf("%d eh o maior numero\n", x);
    }
    else if (y>z && y>x)
    {
        printf("%d eh o maior numero\n", y);
    }
    else
    {
        printf("%d eh o maior numero\n", z);
    }
}

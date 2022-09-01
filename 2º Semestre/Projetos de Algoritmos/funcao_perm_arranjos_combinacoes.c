//Considere a fun��o do exerc�cio anterior e escreva um programa que solicita dois n�meros
//naturais (n e k) ao usu�rio e calcula e imprime:
//a) O n�mero de permuta��o
//b) O n�mero de arranjos
//c) O n�mero de combina��es

#include <stdio.h>

int fatorial(int x);

int main()
{

    int n, k;

    scanf("%d %d", &n, &k);

    printf("Numero de permutacao: %d\n", fatorial(n));
    printf("Numero de arranjos: %d\n", fatorial(n)/fatorial(n-k));
    printf("Numero de combinacoes: %d\n", fatorial(n)/(fatorial(k)*fatorial(n-k)));

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

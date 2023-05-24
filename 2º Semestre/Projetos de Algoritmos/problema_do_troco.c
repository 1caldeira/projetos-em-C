#include <stdio.h>

void troco (int);

int main()
{
    int valor;
    scanf("%d", &valor);
    troco(valor);
    return 0;
}

void troco(int valor)
{
    int notas[8] = { 200, 100, 50, 20, 10, 5, 2, 1 };
    int i, qtde;
    for (i = 0; i < 8; i++)
    {
        qtde = valor / notas[i];
        if (qtde > 0)
        {
            printf("%d notas de R$ %d\n",
                   qtde, notas[i]);
            valor %= notas[i];
            if (valor == 0)
            {
                break;
            }
        }
    }
}

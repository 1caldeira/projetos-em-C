#include <stdio.h>

void guloso(int);
int main()
{
    int v;
    scanf("%d", &v);
    guloso(v);


    return 0;
}


void guloso(int valor)
{
    int preco[5] = {7600, 3800, 1200, 760, 80};
    int i, qtde;
    for (i = 0; i < 5; i++)
    {
        qtde = valor / preco[i];
        printf("%d\n", qtde);
        valor %= preco[i];
    }
}

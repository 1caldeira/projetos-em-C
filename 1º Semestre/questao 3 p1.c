#include <stdio.h>
int main()
{

    int n, i, eleitores, soma;
    float media;

    printf("Quantidade de escolas: ");
    scanf("%i", &n);
    soma = 0;
    for (i = 1; i <= n; i++)
    {

        printf("Eleitores escola %i: ", i);
        scanf("%i", &eleitores);
        soma = eleitores + soma;

    }

    media = soma / n;

    printf("Este cartorio possui media de %.0f eleitores por escola.\n", media);


    return 0;
}

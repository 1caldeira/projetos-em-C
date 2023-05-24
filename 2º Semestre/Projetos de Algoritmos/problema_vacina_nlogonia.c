#include <stdio.h>

typedef struct
{
    int idade;
    int doenca;
    int registro;
} pessoa;

void quicksort(pessoa[], int, int);

int main()
{

    pessoa pessoas[1000];
    int n;

    printf("Digite o numero de habitantes que tomarao vacina: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){

        printf("Digite idade, doenca (0 ou 1), registro do habitante ", i+1);
        scanf("%d %d %d", &pessoas[i].idade, &pessoas[i].doenca, &pessoas[i].registro);

    }

    quicksort(pessoas, 0, n - 1);

    for(int i = 0; i < n; i++)
    {
        printf("%d\n", pessoas[i].registro);
    }

    return 0;
}


void quicksort(pessoa a[], int e, int d)
{
    int i = e; // indice esquerdo
    int j = d; // indice direito
    pessoa x; // elemento mediano do vetor
    pessoa aux; // variavel auxiliar para troca
    x = a[(i+j) / 2];
    do
    {
        while (a[i].idade > x.idade) i++;
        while (x.idade > a[j].idade) j--;

        while (a[i].idade == x.idade && a[i].doenca > x.doenca) i++;
        while (a[j].idade == x.idade && x.doenca > a[j].doenca) j--;

        while (a[i].idade == x.idade && a[i].doenca == x.doenca && a[i].registro < x.registro) i++;
        while (a[j].idade == x.idade && a[j].doenca == x.doenca && a[j].registro > x.registro) j--;

        if(i <= j)
        {
            aux = a[i];
            a[i++] = a[j];
            a[j--] = aux;
        }
    }
    while (i <= j);
    if (e < j) quicksort(a, e, j);
    if (i < d) quicksort(a, i, d);
}


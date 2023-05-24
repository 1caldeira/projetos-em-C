#include <stdio.h>
void quicksort(int a[], int e, int d);
void drive(int, int *, int);

int main()
{

    int capacidade, nFotos, i, cont=0;

    printf("Digite o numero total de fotos no celular de Edu: ");

    scanf("%d", &nFotos);

    int vet[nFotos];

    printf("Digite a capacidade do drive: ");

    scanf("%d", &capacidade);

    for (i = 0; i < nFotos; i++)
    {
        printf("Digite o tamanho da foto %d: ", i+1);
        scanf("%d", &vet[i]);
    }

    quicksort(vet, 0, nFotos);

    for (i = 0; i < nFotos; i++)
    {
        if (capacidade - vet[i] >= 0)
        {
            cont++;
            capacidade -= vet[i];
        }
    }

    printf("Numero maximo de fotos que poderao ser armazenadas no drive: %d\n",cont);

    return 0;
}

void quicksort(int a[], int e, int d)
{
    int i = e; // índice esquerdo
    int j = d; // índice direito
    int x;     // elemento mediano do vetor
    int aux;   // variável auxiliar para troca
    x = a[(i + j) / 2];
    do
    {
        while (a[i] < x)
            i++;
        while (x < a[j])
            j--;
        if (i <= j)
        {
            aux = a[i];
            a[i++] = a[j];
            a[j--] = aux;
        }
    } while (i <= j);
    if (e < j)
        quicksort(a, e, j);
    if (i < d)
        quicksort(a, i, d);
}

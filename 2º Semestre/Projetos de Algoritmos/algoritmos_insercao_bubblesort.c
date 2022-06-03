#include <stdio.h>

int main()
{

    int i, aux, j, vetor[9] = {5, 10, 80, 30, 15, 45, 90, 50, 8};
    printf("Vetor: 5 10 80 30 15 45 90 50 8\n");
    for(i=0; i < 8; i++)
    {
        for(j=0; j < 8-i; j++)
        {
            if(vetor[j]>vetor[j+1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
    printf("Vetor ordenado: ");
    for(i=0; i < 9; i++)
    {
        printf(" %d",vetor[i]);
    }

    return 0;
}

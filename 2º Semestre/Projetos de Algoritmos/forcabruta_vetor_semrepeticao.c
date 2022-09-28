/*3. Escreva um programa em C que dado o vetor de inteiros com n elementos, remova todos os
elementos repetidos desse vetor e imprima o vetor resultante.
*/

#include <stdio.h>
#include <stdbool.h>

void bubblesort(int, int []);

int main()
{

    int tam, i, j;

    printf("Digite o tamanho do vetor: ");

    scanf("%d", &tam);

    printf("Digite os %d elementos do vetor:\n", tam);

    int vet[tam];

    for(i=0; i<tam; i++)
    {

        scanf("%d", &vet[i]);

    }

    bubblesort(tam,vet);

    for(i=0; i<tam-1; i++)
    {

        if(vet[i] == vet[i+1])
        {

            for(j=i; j<tam-1; j++)
            {

                vet[j]= vet[j+1];

            }
            tam-=1;
        }

    }


    printf("Vetor sem elementos repetidos: ");

    for(i=0; i<tam; i++)
    {

        printf("%d  ", vet[i]);

    }

    return 0;
}

void bubblesort (int tam, int vet[])
{

    int i=0, j, aux, troca, ultimaTroca = tam - 1;
    bool trocou;

    do
    {
        trocou = false;
        for(j=0; j < ultimaTroca; j++)
        {
            if (vet[j] > vet[j+1])
            {
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
                troca = j;
                trocou = true;

            }

        }
        ultimaTroca = troca;

    }
    while(++i<tam-1 && trocou);




}

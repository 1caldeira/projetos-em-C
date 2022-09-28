/*4. Escreva um programa em C que dados dois vetores de inteiros A e B, de tamanhos M e N,
respectivamente, gere e imprima um vetor ordenado C com os elementos de A e B.
*/

#include <stdio.h>
#include <stdbool.h>

void bubblesort (int tam, int vet[]);

int main()
{

    int i, tam1, tam2;

    printf("Digite o tamanho do vetor A:    ");
    scanf("%d", &tam1);

    int vet1[tam1];

    printf("Digite o tamanho do vetor B:    ");
    scanf("%d", &tam2);

    int vet2[tam2];

    for(i=0; i<tam1; i++)
    {
        printf("Digite o elemento %d do vetor A:    ", i);
        scanf("%d", &vet1[i]);

    }

    for(i=0; i<tam2; i++)
    {
        printf("Digite o elemento %d do vetor B:    ", i);
        scanf("%d", &vet2[i]);

    }

    int tam3 = tam1+tam2;
    int vet3[tam3];



    for(i=0; i<tam3; i++)
    {

        if (i < tam1)
        {
            vet3[i]=vet1[i];
        }
        else
        {
            vet3[i]=vet2[i-tam1];
        }
    }

    bubblesort(tam3, vet3);


    printf("Vetor C ordenado: ");
    for(i=0; i<tam3; i++)
    {
        printf("%d  ", vet3[i]);
    }
    printf("\n");
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

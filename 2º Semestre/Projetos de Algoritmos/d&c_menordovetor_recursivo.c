/*Escreva uma função para determinar
o menor valor de um vetor de
inteiros usando a técnica de divisão e
conquista.*/

#include <stdio.h>

int menordov(int *, int, int);

int main()
{

    int i, inicio=0, n;

    printf("Qual tamanho do vetor? ");
    scanf("%d", &n);

    int vet[n];
    int fim = n-1;

    for(i=0; i<n; i++)
    {

        printf("Digite o elemento %d do vetor: ", i);
        scanf("%d", &vet[i]);
    }

    printf("Menor elemento do vetor: %d", menordov(vet, inicio, fim));


    return 0;
}

int menordov(int vet[], int inicio, int fim)
{

    if(fim - inicio <= 1)
    {

        return (vet[inicio] < vet[fim] ? vet[inicio] : vet[fim]);
    }

    int meio = (inicio+fim)/2;
    int vl = menordov(vet, inicio, meio);
    int vr = menordov(vet, meio+1, fim);

    return (vl < vr ? vl : vr);
}

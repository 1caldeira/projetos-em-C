int main()
{

    int i, menor, maior, vetor[5];
    float media, soma;

    soma = 0;
    media = 0;
    maior = vetor[0];
    menor = vetor[0];


    for (i=0; i<5; i++)
    {

        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    maior = vetor[0];
    menor = vetor[0];
    for (i=0; i<5; i++)
    {

        if (vetor[i] < menor)
        {

            menor = vetor[i];
        }

        if (vetor[i] > maior)
        {

            maior = vetor[i];
        }

    }

    media = soma/5;
    printf("Media aritmetica: %f\n", media);
    printf("Maior numero digitado: %d\n", maior);
    printf("Menor numero digitado: %d\n", menor);
    printf("Primeiro numero digitado: %d\n", vetor[0]);
    printf("Ultimo numero digitado: %d\n", vetor[4]);


    return 0;
}

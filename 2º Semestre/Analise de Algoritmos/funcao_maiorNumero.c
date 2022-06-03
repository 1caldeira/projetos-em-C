#include <stdio.h>

int funcaoMaiorNumero (int nElementos, int *vetor);

int main()
{

    int i, tamanhoVetor, maiorNumero;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);
    int vetor[tamanhoVetor];

    for(i=0; i<tamanhoVetor; i++){
        printf("Digite o valor do elemento %d: ", i);
        scanf("%d", &vetor[i]);
}

    maiorNumero = funcaoMaiorNumero(tamanhoVetor, vetor);
    printf("Maior numero do vetor: %d", maiorNumero);

    return 0;
}

int funcaoMaiorNumero (int nElementos, int *vetor)
{

    int i, j=0, M = vetor[0];

    for (i=1; i<nElementos; i++){
        if(vetor[i]>M){
            M = vetor[i];
    }
        j++;
}
    printf("Numero de comparacoes necessarias para determinar o maior numero do vetor: %d\n", j);
    return M;
}

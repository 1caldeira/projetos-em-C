#include <stdio.h>

int maior_do_vetor(int, int []);

int main()
{
    int n, i;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);
    int vet[n];
    printf("Informe os %d elementos do vetor: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
    printf("Maior elemento do vetor: %d\n", maior_do_vetor(n, vet));
    return 0;
}

int maior_do_vetor(int n, int v[])
{
    if (n == 1) {
        return v[0];
    }
    int maior_do_resto = maior_do_vetor(n - 1, v);
    return v[n - 1] > maior_do_resto ? v[n - 1] : maior_do_resto;
}

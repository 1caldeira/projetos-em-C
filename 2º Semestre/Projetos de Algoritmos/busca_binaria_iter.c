#include <stdio.h>

int busca_binaria_iter(float *, int, float);

int main()
{

    float v[12] = {0.05, 0.15, 0.20, 0.26, 0.34, 0.40, 0.46, 0.59, 0.71, 0.87, 0.90, 0.98};

    int indice = busca_binaria_iter(v, 12, 0.87);

    return 0;
}


int busca_binaria_iter(float vet[], int n, float x)
{
    int inicio = 0, fin = n - 1, meio;
    while (inicio <= fin)
    {

        meio = (inicio + fin) / 2;
        printf("inicio: %d | final: %d | meio: %d | v[meio] : %.2f\n",inicio, fin, meio, vet[meio]);
        if (vet[meio] == x)
        {
            return meio;
        }
        if (vet[meio] > x)
        {
            fin = meio - 1; // busca à esquerda
        }
        else
        {
            inicio = meio + 1; // busca à direita
        }
    }
    return -1;
}

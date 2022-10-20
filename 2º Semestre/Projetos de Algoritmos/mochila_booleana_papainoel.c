#include <stdio.h>
#include <math.h>

#define MAX 100

void mochila(int [], int [], int, int);


int main()
{
    int casos, pac, j, i,pesomax=50;
    int peso[MAX], qt[MAX];

    scanf("%d", &casos);

    for(j=0; j<casos; j++) {

        scanf("%d", &pac);

        for (i = 0; i < pac; i++){

            scanf("%d %d", &qt[i], &peso[i]);
        }


        mochila(peso, qt, pesomax, pac);



    }
    return 0;
}


    void mochila(int p[], int v[], int c, int n)
    {
        int max2 = 0, pos, valor, peso, max = 0, m = (int) pow(2, n);
        for (int i = 0; i < m; i++)
        {
            valor = peso = 0;
            for (int j = 0; j < n; j++)
            {
                pos = (i >> j) % 2;
                if (pos == 1)
                {
                    valor += v[j];
                    peso += p[j];
                }
            }
            if (peso <= c && valor > max)
            {
                max = valor;
                max2 = peso;
            }
        }
        printf("%d  brinquedos \n", max);
        printf("Peso: %d Kg\n", max2);
    }



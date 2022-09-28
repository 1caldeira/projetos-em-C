/*O Problema dos Pares Mais Próximos (Beecrowd). Dado um conjunto de pontos em um espaço
bidimensional, você terá que encontrar a distância entre os dois pontos mais próximos.
Entrada
A entrada contém vários casos de teste. Cada caso de teste começa com um inteiro N (0 ≤ N ≤
10000), que denota o número de pontos neste conjunto. As próximas N linhas contêm as
coordenadas de N pontos bidimensionais. O primeiro dos dois números denota a coordenada X
e o último denota a coordenada Y. A entrada é encerrada por N = 0. Este conjunto não deve ser
processado. O valor das coordenadas será menor que 40000 e não negativo.
Saída
Para cada conjunto de teste da entrada, produza uma única linha de saída contendo um número
em ponto flutuante (com quatro dígitos após o ponto decimal) que denota a distância entre os
dois pontos mais próximos. Se não houver nenhum desses dois pontos na entrada cuja distância
seja menor que 10000, imprima a linha “INFINITO”.*/

// distancia entre dois pontos = pow((x1-x2),2) + pow((y1-y2),2)

#include <stdio.h>
#include <math.h>


int main()
{

    int n, i, j;
    float menorDist, dist;

    printf("Digite o numero de coordenadas que deseja verificar: ");
    scanf("%d", &n);

    while (n != 0)
    {

        int x[n], y[n];

        for(i=0; i<n; i++)
        {

            printf("Digite a coordenada X do ponto %d: ", i);
            scanf("%d", &x[i]);
            printf("Digite a coordenada Y do ponto %d: ", i);
            scanf("%d", &y[i]);

        }
        menorDist = 400000;

        for (i = 0; i < n-1 ; i++)
        {
            for (j = 0; j < n-1 ; j++)
            {

                dist = sqrt(pow((x[i]-x[i+1]),2) + pow((y[i]-y[i+1]),2));
                        if (dist < menorDist)
            {
                menorDist = dist;
            }

        }
    }
    if (menorDist < 10000)
    {
        printf("Menor distancia: %.4f\n", menorDist);
        }
        else
        {
            printf("INFINITO\n");
        }
        printf("Digite o numero de coordenadas que deseja verificar: ");
        scanf("%d", &n);
    }

    return 0;
}

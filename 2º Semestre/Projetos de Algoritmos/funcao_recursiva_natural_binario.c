//Implemente uma função recursiva para imprimir um número natural passado como
//parâmetros na base binária.
#include <stdio.h>

void naturalParaBinario(int x);

int main()
{
    int n;
    scanf("%d", &n);
    naturalParaBinario(n);
    return 0;
}
void naturalParaBinario(int x)
{
    if (x < 2){
        printf("%d", x);
    }
    else {
        naturalParaBinario(x / 2);
        printf("%d", x%2);
    }
}





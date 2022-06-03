//Implemente uma função recursiva para calcular o quociente da divisão inteira de 2 inteiros,
//a e b, segundo a definição recursiva abaixo:
//a) a dividido por b = 0, se b > a
//b) a divido b = 1 + (a – b) dividido por b, se a ≥ b

#include <stdio.h>

int quociente (int a, int b);

int main()
{

    int x, y, resultado;
    scanf("%d %d", &x, &y);
    resultado = quociente(x,y);
    printf("%d",resultado);

    return 0;
}

int quociente (int a, int b)
{


    if (b > a)
    {
        return 0;
    }
    else
    {
        return 1 + quociente(a-b, b);
    }
}

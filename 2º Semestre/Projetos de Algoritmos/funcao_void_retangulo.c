//Escreva uma função de protótipo void retangulo(int a, int c); que desenha no
//vídeo um retângulo formado por asteriscos (*) com a linhas de altura e c colunas de
//comprimento. Por exemplo, se for feita a seguinte chamada a função: retangulo(5, 10);
//A função deve desenhar no vídeo o seguinte retângulo:
//**********
//**********
//**********
//**********
//**********

#include <stdio.h>

void retangulo(int a, int c);

int main()
{

    int linhas, colunas;
    printf("Escreva o numero de linhas e colunas do retangulo: ");
    scanf("%d %d", &linhas, &colunas);
    retangulo(linhas, colunas);


    return 0;
}

void retangulo (int a, int c)
{

    for(int i=1; i<=a; i++)
    {
        for(int j=1; j<=c; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

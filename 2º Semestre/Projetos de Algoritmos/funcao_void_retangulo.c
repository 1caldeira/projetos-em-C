//Escreva uma fun��o de prot�tipo void retangulo(int a, int c); que desenha no
//v�deo um ret�ngulo formado por asteriscos (*) com a linhas de altura e c colunas de
//comprimento. Por exemplo, se for feita a seguinte chamada a fun��o: retangulo(5, 10);
//A fun��o deve desenhar no v�deo o seguinte ret�ngulo:
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

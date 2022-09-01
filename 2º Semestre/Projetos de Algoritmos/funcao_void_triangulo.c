//Escreva uma fun��o de prot�tipo void triangulo(int n, char ch); que desenha no
//v�deo um tri�ngulo invertido formado por n caracteres ch em sua base. Por exemplo, se for feita
//seguinte chamada a fun��o: triangulo(7, '#');
//A fun��o deve desenhar no v�deo o seguinte tri�ngulo:
//#######
// #####
//  ###
//   #

#include <stdio.h>

void triangulo(int n, char ch);

int main()
{
    int numCarac;
    char ch;

    printf("Escreva qual o numero de caracteres na base do triangulo e o tipo de caracter: ");
    scanf("%d %c", &numCarac, &ch);
    triangulo(numCarac, ch);
    return 0;
}

void triangulo(int n, char ch)
{

    int i, j, s, esp=0;

    for(i=n; i>=0; i=i-2)
    {
      for(s=0; s<=esp; s++){
            printf(" ");
      }
        j=i;

        while (j>0)
        {
            printf("%c", ch);

            j--;
        }
        printf("\n");

 esp++;
    }
}


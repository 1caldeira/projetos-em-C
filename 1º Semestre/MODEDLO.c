#include <stdio.h>
int main()
{

int x, y;

printf("Digite dois numeros inteiros: \n");

x = 0;
y = 0;

scanf("%i", &x);
scanf("%i", &y);

if (x % y == 0 || y % x == 0)
{
    printf("Sao multiplos");
} else
  {
      printf("Nao sao multiplos");
  }


    return 0;
}




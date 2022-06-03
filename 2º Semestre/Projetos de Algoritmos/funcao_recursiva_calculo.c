#include <stdio.h>

float soma (int n);

int main(){

int d;
printf("Informe o n-esimo denominador da soma: ");
scanf("%d", &d);

printf("Resultado: %f", soma(d));


return 0;
}

float soma(int n){


if (n == 1){
    return n;
}

  return 1.0 / n + soma(n-1);
}

#include <stdio.h>

int main() {

double nota1, nota2, notaFinal;

nota1 = 0;
nota2 = 0;
notaFinal = 0;

printf("Digite a primeira nota :");
scanf("%lf", &nota1);
printf("Digite a segunda nota :");
scanf("%lf", &nota2);

notaFinal = (nota1 + nota2) / 2;

printf("NOTA FINAL = %.2lf\n", notaFinal);

if (notaFinal < 60);

    printf("REPROVADO");





 return 0;

}


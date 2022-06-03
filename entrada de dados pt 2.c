#include <stdio.h>
#include <string.h>

void limpar_entrada() {
  char c;
  while ((c = getchar()) != '\n' && c != EOF){}

}

    int main (){


    int idade1, idade2;
    char nome1[50], nome2[50];


    printf("Digite o valor da idade 1: ");
    scanf("%i", &idade1);
    printf("Digite o nome da pessoa 1: ");
    limpar_entrada();
    fgets(nome1, 50, stdin);

    printf("Digite o valor da idade 2: ");
    scanf("%i", &idade2);
    printf("Digite o nome da pessoa 2: ");
    limpar_entrada();
    fgets(nome2, 50, stdin);



    printf("\n");
    printf("NOME1: %s", nome1);
    printf("IDADE1: %i\n", idade1);


    printf("\n");
    printf("NOME1: %s", nome2);
    printf("IDADE1: %i\n", idade2);



      return 0;
    }

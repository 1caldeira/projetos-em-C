#include <stdio.h>
int main(){

    int i, hospitais, somaLeitos, j, x;

    somaLeitos = 0;

    printf("Quantos hospitais estao disponiveis? ");
    scanf("%d", &hospitais);

    int vetor[hospitais];

    for(i=0; i<hospitais; i++){

        printf("Quantos leitos disponiveis no hospital %d: ", i+1);
        scanf("%d", &vetor[i]);

        somaLeitos += vetor[i];
    }

   for(i=1; i<hospitais; i++){
         x = vetor[i];
         j = i - 1;
         while (j >= 0 && vetor[j] < x){
            vetor[j + 1] = vetor[j];
            j = j - 1;
         }
         vetor[j + 1] = x;
        }

printf("Total de leitos disponiveis: %d\n", somaLeitos);
printf("Hospitais com mais leitos: %d e %d\n", vetor[0], vetor[1]);

 return 0;
}

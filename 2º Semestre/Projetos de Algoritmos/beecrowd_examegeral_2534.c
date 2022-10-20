#include <stdio.h>

void bubblesort(int, int []);

int main(){

int nHabitantes, consultas, i, auxconsulta;

printf("Digite o numero de habitantes que fizeram a prova e o numero de consultas que deseja realizar:\n");
scanf("%d %d", &nHabitantes, &consultas);

int lista[nHabitantes];

for(i=0; i<nHabitantes; i++){

    printf("Nota do habitante %d:\n", i+1);
    scanf("%d", &lista[i]);
}

bubblesort(nHabitantes, lista);

i=1;

while(i<=consultas){

    scanf("%d", &auxconsulta);
    printf("%d\n", lista[auxconsulta-1]);

    i++;

}

return 0;
}

void bubblesort(int n, int a[])
{
 int i; // passos do algoritmo de ordenação
 int j; // índice do vetor
 int aux; // variável auxiliar para troca
 for (i = 0; i < n-1; i++) {
 for (j = 0; j < n-1-i; j++) {
 if (a[j] < a[j+1]) { // o da esquerda é menor?
 // troca a posição deles
 aux = a[j];
 a[j] = a[j+1];
 a[j+1] = aux;
 }
 }
 }
}

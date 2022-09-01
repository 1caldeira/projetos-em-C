#include <stdio.h>

int main() {
    int x, y, z, menor, maior;

    scanf("%d %d %d", &x, &y, &z);

    menor = x;
    maior = x;

    if(menor > y){
        menor = y;
    }
    if(menor > z){
        menor = z;
    }
    if(maior < y){
        maior = y;
    }
    if(maior < z){
        maior = z;
    }
    printf("%i e %i\n", menor, maior);


    return 0;
}

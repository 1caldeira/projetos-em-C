#include <stdio.h>
int main(){

float matriz[5][3];
float soma=0, media=0;

int i, j;

for(i=0;i<5;i++){
    for(j=0;j<3;j++){

        scanf("%f", &matriz[i][j]);

    }
}

for(i=0;i<5;i++){
    for(j=0;j<3;j++){

        soma = matriz[i][j] + soma;
    }
}


printf("SOMA: %.2f\n", soma);

media = soma/15;

printf("MEDIA: %.2f", media);





return 0;
}

#include <stdio.h>

int main(){

int N, linha, coluna, i, j;


scanf("%i", &N);
printf("\n");
int matriz[100][100];

while (N != 0){

    linha = N;
    coluna = N;

    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
                if(i == 0 || j == 0 || i == linha - 1 || j == coluna - 1){
         matriz[i][j] = 1;
            }else{
            matriz[i][j] = matriz[i-1][j-1] + 1;
            }
        }
    }

        for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
         printf("%d", matriz[i][j]);
        }
printf("\n");
    }


    printf("\n");
    scanf("%i", &N);
    printf("\n");

}






return 0;
}

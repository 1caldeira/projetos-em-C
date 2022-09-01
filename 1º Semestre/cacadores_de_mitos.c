#include <stdio.h>
int main(){

int matriz[500][500] = { { 0 } };
int ocorrencias, x, y, i, j, cont=0;

scanf("%d", &ocorrencias);

for(i=1;i<=ocorrencias;i++){
    scanf("%d %d", &x, &y);
    matriz[x][y] ++ ;
    if(matriz[x][y]>1){
        cont++;
    }

}

printf("%d", cont);
return 0;
}

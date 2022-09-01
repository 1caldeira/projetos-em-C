#include <stdio.h>
int main(){
int matriz[100][100] = { { 0 } };
int redes, x1, x2, y1, y2, i, j, k, cont=0;

scanf("%d", &redes);

for(i=1;i<=redes;i++){

    scanf("%d %d %d %d", &x1, &x2, &y1, &y2);
    for(j=x1;j<x2;j++){
        for(k=y1;k<y2;k++){

            matriz[j][k]+=1;
        }
    }

}

for(i=0;i<100;i++){
    for(j=0;j<100;j++){
    if (matriz[i][j]>0){
        cont+=1;
    }
    }

}

printf("%d", cont);
return 0;
}

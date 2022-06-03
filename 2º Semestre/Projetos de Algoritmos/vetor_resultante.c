#include <stdio.h>

int main(){

int i, j, tam;

scanf("%d", &tam);
int v1[tam];
for(i=0;i<tam;i++){
    scanf("%d", &v1[i]);
}

for(i=0;i<tam;i++){
    for(j=1;j<tam;j++){
        if(i!=j && v1[i]==v1[j]){
            v1[j]=0;
        }
    }
}

for(i=0;i<tam;i++){
    printf("%d", v1[i]);
}
return 0;
}

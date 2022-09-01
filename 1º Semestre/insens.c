#include <stdio.h>
int main(){

int qtdObjetos, x1, y1, x2, y2, i, d;

scanf("%d", &qtdObjetos);
d = 0;

for(i=1; i<=qtdObjetos; i++){

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);

    d = d + pow((x1-x2),2) + pow((y1-y2),2);
}

printf("%d", d);


return 0;
}

#include <stdio.h>
#define TAMANHO_LISTA 10

typedef char data;
typedef struct {
    data dados[TAMANHO_LISTA];
    int qt_elementos;
}lista;

void init_lista(lista *l){
    l->qt_elementos = 0;
    int i;
    for (i = 0; i < TAMANHO_LISTA; i++){
        l->dados[i] = 'c';
    }
}

void lst_imprimir(lista * l){

    int i;

    for(i=0;i < TAMANHO_LISTA; i++){
        printf("%c\n", l->dados[i]);
    }
}

int main(){

lista l;
init_lista(&l);
lst_imprimir(&l);



return 0;
}





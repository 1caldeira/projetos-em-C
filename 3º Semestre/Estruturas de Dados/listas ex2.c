#include <stdio.h>
#include <stdbool.h>
#define TAMANHO_LISTA 10

typedef int data;
typedef int lst_info;
typedef struct
{
    data dados[TAMANHO_LISTA];
    int qt_elementos;
} lista;

int lst_procurar(lista *l, lst_info val)
{
    int i;
    for (i = 0; i < TAMANHO_LISTA; i++)
    {
        if(l->dados[i] == val)
        {
            return i;
        }
    }
    return -1;
}

void init_lista(lista *l)
{
    l->qt_elementos = 0;
    int i;
    for (i = 0; i < TAMANHO_LISTA; i++)
    {
        l->dados[i] = i+10;
        l->qt_elementos++;
    }
}

void lst_imprimir(lista * l)
{

    int i;

    for(i=0; i < TAMANHO_LISTA; i++)
    {
        printf("%d\n", l->dados[i]);
    }
}


int main()
{

    lista l;
    init_lista(&l);
    lst_info val;
    scanf("%d", &val);
    printf("%d\n", lst_procurar(&l, val));
    printf("%d", l.qt_elementos);



    return 0;
}



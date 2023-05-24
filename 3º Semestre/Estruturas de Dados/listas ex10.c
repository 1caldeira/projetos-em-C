#include <stdio.h>
#include <stdbool.h>
#define TAMANHO_LISTA 10
#include <stdlib.h>
#include <time.h>

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
    for (i = 0; i < TAMANHO_LISTA/2; i++)
    {
        l->dados[i] = i+10;
        l->qt_elementos++;
    }
}

void lst_imprimir(lista * l)
{

    int i;

    for(i=0; i < l->qt_elementos; i++)
    {
        printf("%d\n", l->dados[i]);
    }
}


bool lst_ins_ordenado(lista * l, lst_info val)
{

    if(l->qt_elementos==TAMANHO_LISTA)
    {
        return false;
    }
    int i, j;
    for(i=0; i < l->qt_elementos; i++)
    {

        if(val <= l->dados[i])
        {
            for (j = l->qt_elementos; j >= i; j--)
            {
                l->dados[j] = l->dados[j-1];
            }
            l->dados[i] = val;
            l->qt_elementos++;

            return true;
        }
        if(val > l->dados[l->qt_elementos-1])
        {
            l->dados[l->qt_elementos] = val;
            l->qt_elementos++;

            return true;
        }
    }
    return false;
}

bool lst_remover_inicio(lista * l, lst_info * x)
{
    if(l->qt_elementos==0)
    {
        return false;
    }
    int aux = l->dados[0];
    *x = &aux;

    int i;
    for(i=0; i<=l->qt_elementos; i++)
    {
        l->dados[i]=l->dados[i+1];
    }



    l->qt_elementos--;
    return true;
}

bool lst_gerar(lista * l, int n, int max)
{

    if(n > TAMANHO_LISTA)
    {
        return false;
    }

    srand(time(NULL));
    int i;
    for (i = 0; i < n; i++)
    {
        l->dados[i] = rand() % max + 1;
        if(i == l->qt_elementos)
        {
            l->qt_elementos++;
        }
    }
    return true;



}

bool lst_ordenada(lista l)
{

    int i;

    for(i=0; i<l.qt_elementos-1; i++)
    {
        if(l.dados[i]>l.dados[i+1])
        {
            return false;
        }
    }
    return true;
}

int main()
{

    lista l;
    init_lista(&l);
    lst_imprimir(&l);

    int max = 1000;
    int n = 7;
    lst_gerar(&l, n, max);
    lst_imprimir(&l);
    printf("true or false: %d", lst_ordenada(l));



    return 0;
}

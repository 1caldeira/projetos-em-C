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
    for (i = 0; i < TAMANHO_LISTA; i++)
    {
        l->dados[i] = i+10;
        l->qt_elementos++;
    }

}

void init_listaV(lista * l)
{
    l->qt_elementos = 0;
    int i;
    for (i = 0; i < TAMANHO_LISTA; i++)
    {
        l->dados[i] = 0;
    }
}

void lst_imprimir(lista * l)
{

    int i;

    for(i=0; i < l->qt_elementos; i++)
    {
        printf("%d\n", l->dados[i]);
    }
    printf("\n");
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



int lst_remover_menores(lista * l, lst_info x)
{
    int i, j;
    int inicial = l->qt_elementos;

    for (i = 0; i < l->qt_elementos;)
    {
        if (l->dados[i] < x)
        {
            for (j = i; j < l->qt_elementos - 1; j++)
            {
                l->dados[j] = l->dados[j + 1];
            }
            l->qt_elementos--;
        }
        else
        {
            i++;
        }
    }

    return inicial - l->qt_elementos;
}

bool lst_inverter(lista * l)
{

    if(l->qt_elementos==0)
    {
        return false;
    }
    int aux;
    aux = l->dados[0];
    l->dados[0] = l->dados[l->qt_elementos-1];
    l->dados[l->qt_elementos-1] = aux;
    return true;
}

bool lst_fatiar(lista l, int k, lista * lst1, lista * lst2)
{
    if(l.qt_elementos>TAMANHO_LISTA || l.qt_elementos == 0 || k > l.qt_elementos || k < 0)
    {
        return false;
    }
    int i;
    for(i=0; i<k; i++)
    {

        lst1->qt_elementos++;
        lst1->dados[i] = l.dados[i];
    }
    int j = 0;
    for(i=k; j<l.qt_elementos-k; i++)
    {
        lst2->qt_elementos++;
        lst2->dados[j] = l.dados[i];
        j++;
    }

    return true;
}



int main()
{

    lista l, l2, l3;
    init_lista(&l);
    init_listaV(&l2);
    init_listaV(&l3);
    lst_imprimir(&l);
    printf("fatiar true or false: %d\n\n", lst_fatiar(l, 5, &l2, &l3));
    lst_imprimir(&l2);
    lst_imprimir(&l3);






    return 0;
}

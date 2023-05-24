#include <stdio.h>
#include <stdbool.h>
#define TAMANHO_LISTA 10
#include <stdlib.h>
#include <time.h>



#define MAX_TAM 10





typedef int data;
typedef int lst_info;
typedef struct
{
    data dados[TAMANHO_LISTA];
    int qt_elementos;
} lista;

typedef struct
{
    data dados[MAX_TAM];
    int topo;
} pilha;

void stk_init(pilha* p)
{
    p->topo = 0;
}

void push(pilha* p, data dado)
{
    if (p->topo == MAX_TAM) return;

    p->dados[p->topo] = dado;
    p->topo++;
}

data pop(pilha* p)
{
    return p->dados[--(p->topo)];
}


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


void inverter_nos(lista * l)
{
    int i;
    pilha p;
    stk_init(&p);
    for(i=0; i<l->qt_elementos; i++)
    {
        push(&p, l->dados[i]);
    }
    for(i=0; i<l->qt_elementos; i++)
    {
        l->dados[i] = pop(&p);
    }

}


int main()
{

    lista l;
    init_lista(&l);
    int max = 500;
    int n = 7;
    lst_gerar(&l, n, max);
    lst_imprimir(&l);
    printf("apos inverter nos:\n");
    inverter_nos(&l);
    lst_imprimir(&l);




    return 0;
}

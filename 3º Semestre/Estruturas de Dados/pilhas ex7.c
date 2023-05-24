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

void ordena_decrescente(pilha * p, data * vet) {
    int i;
        for (i = 0; i < MAX_TAM; i++)
    {
        push(p, vet[i]);
    }

    for (i = 0; i < MAX_TAM; i++)
    {
        vet[i] = pop(p);
    }
}


void print_pilha(pilha *p)
{
    int i;
    for(i=0; i<p->topo; i++)
    {
        printf("%d\n", p->dados[i]);
    }

}


int main()
{


    pilha p1;
    stk_init(&p1);
    int i;
    data vet[MAX_TAM];
    for (i = 0; i < MAX_TAM; i++)
    {
        vet[i] = i*10;
    }
    for (i = 0; i < MAX_TAM; i++)
    {
        printf("%d\n", vet[i]);
    }
    //srand(time(NULL));
    /*for (i = 0; i < MAX_TAM; i++)
    {
        p1.dados[i] = rand() % max + 1;
        if(i == p1.topo)
        {
            p1.topo++;
        }
    }*/
    ordena_decrescente(&p1, vet);
    printf("Ordenacao decrescente: \n");
    for (i = 0; i < MAX_TAM; i++)
    {
        printf("%d\n", vet[i]);
    }




    return 0;
}

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
        if(val > l->dados[l->qt_elementos-1]){
            l->dados[l->qt_elementos] = val;
            l->qt_elementos++;

        return true;
    }
}
return false;
}

 bool lst_inserir_final(lista * l, lst_info x){
 if(l->qt_elementos==TAMANHO_LISTA){return false;}
 l->qt_elementos++;
 l->dados[l->qt_elementos-1] = x;
 return true;
 }

int main()
{

    lista l;
    init_lista(&l);
    lst_info val;
    scanf("%d", &val);
    printf("%d\n", lst_inserir_final(&l, val));
    lst_imprimir(&l);



    return 0;
}

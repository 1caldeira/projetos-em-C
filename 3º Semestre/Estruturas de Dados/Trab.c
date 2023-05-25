#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[50];
    char posicao[20];
    int idade;
    int habilidade;
    int camisa;
} Jogador;

typedef struct no
{
    Jogador jogador;
    struct no* esquerda;
    struct no* direita;
} No;

No* inserirJogador(No* raiz, Jogador jogador)
{
    if (raiz == NULL)
    {
        No* novoNo = (No*)malloc(sizeof(No));
        novoNo->jogador = jogador;
        novoNo->esquerda = NULL;
        novoNo->direita = NULL;
        return novoNo;
    }

    int comp = strcmp(jogador.nome, raiz->jogador.nome);

    if (comp < 0)
    {
        raiz->esquerda = inserirJogador(raiz->esquerda, jogador);
    }
    else if (comp > 0)
    {
        raiz->direita = inserirJogador(raiz->direita, jogador);
    }
    else
    {
        printf("Jogador ja cadastrado.\n");
    }

    return raiz;
}

No* buscarJogador(No* raiz, char* nome)
{
    if (raiz == NULL || strcmp(nome, raiz->jogador.nome) == 0)
    {
        return raiz;
    }

    if (strcmp(nome, raiz->jogador.nome) < 0)
    {
        return buscarJogador(raiz->esquerda, nome);
    }
    else
    {
        return buscarJogador(raiz->direita, nome);
    }
}

void listarJogadores(No* raiz)
{
    if (raiz != NULL)
    {
        listarJogadores(raiz->esquerda);
        printf("Nome: %s\n", raiz->jogador.nome);
        printf("Posicao: %s\n", raiz->jogador.posicao);
        printf("Idade: %d\n", raiz->jogador.idade);
        printf("Habilidade: %d\n", raiz->jogador.habilidade);
        printf("Numero da camisa: %d\n\n", raiz->jogador.camisa);
        listarJogadores(raiz->direita);
    }
}

No* encontrarMenorValor(No* raiz)
{
    No* atual = raiz;

    while (atual && atual->esquerda != NULL)
    {
        atual = atual->esquerda;
    }

    return atual;
}

No* removerJogador(No* raiz, char* nome)
{
    if (raiz == NULL)
    {
        printf("\nJogador nao encontrado.\n");
        return raiz;
    }

    int comp = strcmp(nome, raiz->jogador.nome);

    if (comp < 0)
    {
        raiz->esquerda = removerJogador(raiz->esquerda, nome);
    }
    else if (comp > 0)
    {
        raiz->direita = removerJogador(raiz->direita, nome);
    }
    else
    {
        if (raiz->esquerda == NULL)
        {
            No* temp = raiz->direita;
            free(raiz);
            printf("Jogador removido com sucesso.\n");
            return temp;
        }
        else if (raiz->direita == NULL)
        {
            No* temp = raiz->esquerda;
            free(raiz);
            printf("Jogador removido com sucesso.\n");
            return temp;
        }

        No* temp = encontrarMenorValor(raiz->direita);
        raiz->jogador = temp->jogador;
        raiz->direita = removerJogador(raiz->direita, temp->jogador.nome);
    }

    return raiz;
}


int main()
{
    No* raiz = NULL;
    int menu;

    while (menu != 5)
    {
        printf("\nEscolha uma opcao para continuar:\n");
        printf("Digite 1 para registrar um novo jogador\n");
        printf("Digite 2 para buscar um jogador\n");
        printf("Digite 3 para remover um jogador\n");
        printf("Digite 4 para listar jogadores\n");
        printf("Digite 5 para sair\n\n");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            {
                Jogador jogador;
                printf("Escreva o nome do jogador: ");
                scanf("%s", jogador.nome);
                printf("Escreva a posicao do jogador: ");
                scanf("%s", jogador.posicao);
                printf("Escreva a idade do jogador: ");
                scanf("%d", &jogador.idade);
                printf("Escreva a habilidade do jogador: ");
                scanf("%d", &jogador.habilidade);
                printf("Escreva o numero da camisa do jogador: ");
                scanf("%d", &jogador.camisa);
                raiz = inserirJogador(raiz, jogador);
                break;
            }
        case 2:
            {
                printf("Escreva o nome do jogador que deseja buscar: ");
                char nomeBusca[50];
                scanf("%s", nomeBusca);
                No* jogadorEncontrado = buscarJogador(raiz, nomeBusca);
                if (jogadorEncontrado != NULL)
                {
                    printf("Jogador encontrado:\n");
                    printf("Nome: %s\n", jogadorEncontrado->jogador.nome);
                    printf("Posicao: %s\n", jogadorEncontrado->jogador.posicao);
                    printf("Idade: %d\n", jogadorEncontrado->jogador.idade);
                    printf("Habilidade: %d\n", jogadorEncontrado->jogador.habilidade);
                    printf("Numero da camisa: %d\n\n", jogadorEncontrado->jogador.camisa);
                }
                else
                {
                    printf("\nJogador nao encontrado.\n");
                }
                break;
            }
        case 3:
            {
                printf("Escreva o nome do jogador que deseja remover: ");
                char nomeRemocao[50];
                scanf("%s", nomeRemocao);
                raiz = removerJogador(raiz, nomeRemocao);
                break;
            }
        case 4:
            {
                printf("Lista de jogadores:\n");
                listarJogadores(raiz);
                break;
            }
        case 5:
            {
                break;
            }
        default:
            {
                printf("Opcao invalida. Tente novamente.\n");
                break;
            }
        }
    }

    return 0;
}

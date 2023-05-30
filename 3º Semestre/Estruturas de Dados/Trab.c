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
    //se a raiz estiver vazia, aloca memoria para armazenar uma nova estrutura no e define os nos esquerda e direita como nulos (vazios)
    if (raiz == NULL)
    {
        No* novoNo = (No*)malloc(sizeof(No));
        novoNo->jogador = jogador;
        novoNo->esquerda = NULL;
        novoNo->direita = NULL;
        return novoNo;
    }
    //compara o nome que foi passado como parametro para inserir com o nome da raiz atual para saber onde inserir o jogador
    int comp = strcmp(jogador.nome, raiz->jogador.nome);
    //se o nome passado por parametro for menor, chama a funcao recursivamente passando o no esquerdo como parametro, se for maior, chama passando o no direito como parametro
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
    //se a raiz estiver vazia ou se encontrou o jogador, retorna raiz
    if (raiz == NULL || strcmp(nome, raiz->jogador.nome) == 0)
    {
        return raiz;
    }
    //chama recursivamente a funcao dependendo do resultado do strcmp
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
    //lista todos os jogadores, do menor para o maior (leitura feita na ordem esquerda, meio, direita)
    if (raiz != NULL)
    {
        listarJogadores(raiz->esquerda);
        printf("| %-10s | %-10s | %-5d | %-10d | %-6d |\n", raiz->jogador.nome, raiz->jogador.posicao, raiz->jogador.idade, raiz->jogador.habilidade, raiz->jogador.camisa);
        listarJogadores(raiz->direita);
    }
}

No* encontrarMenorValor(No* raiz)
{
    //encontra o menor valor lexicografico no nó da direita para substituir o no q esta sendo removido sem prejudicar a ordenacao da arvore encadeada
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
        printf("\nJogador nao cadastrado.\n");
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
        //apos encontrar o no que sera removido, verifica se o nó a sua esquerda armazena algo
        if (raiz->esquerda == NULL)
        {
            //caso nao, armazena o que tinha na direita em um no temporario, desaloca a memoria do nó que sera removido
            //e retorna o nó da direita como atual raiz
            No* temp = raiz->direita;
            free(raiz);
            printf("Jogador removido com sucesso.\n");
            return temp;
        }
        //se o nó da esquerda nao estiver vazio, verifica se o da direita está, caso esteja, a memoria do nó que sera
        //removido será desalocada e retorna o nó da esquerda como atual raiz
        else if (raiz->direita == NULL)
        {

            No* temp = raiz->esquerda;
            free(raiz);
            printf("Jogador removido com sucesso.\n");
            return temp;
        }
        //caso o nó que sera removido tenha filhos na esquerda e na direita, ele encontra o menor valor entre os filhos da direita para substituir o nó que sera removido e
        //chama a funcao recursivamente para remover o nó duplicado na direita
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
                printf("\nEscreva o nome do jogador: ");
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
                printf("\nEscreva o nome do jogador que deseja buscar: ");
                char nomeBusca[50];
                scanf("%s", nomeBusca);
                No* jogadorEncontrado = buscarJogador(raiz, nomeBusca);
                if (jogadorEncontrado != NULL)
                {
                    printf("O Jogador esta cadastrado\nSegue abaixo suas informacoes:\n");
                    printf("\n| %-10s | %-10s | %-5s | %-10s | %-6s |\n", "Nome", "Posicao", "Idade", "Habilidade", "Camisa");
                    printf("|------------|------------|-------|------------|--------|\n");
                    printf("| %-10s | %-10s | %-5d | %-10d | %-6d |\n", jogadorEncontrado->jogador.nome, jogadorEncontrado->jogador.posicao, jogadorEncontrado->jogador.idade, jogadorEncontrado->jogador.habilidade, jogadorEncontrado->jogador.camisa);
                }
                else
                {
                    printf("\nJogador nao cadastrado.\n");
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
                printf("\nLista de jogadores:\n");
                printf("\n| %-10s | %-10s | %-5s | %-10s | %-6s |\n", "Nome", "Posicao", "Idade", "Habilidade", "Camisa");
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

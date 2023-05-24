#include <stdio.h>

void pendrive(int);

int main()
{

    int capacidade;

    printf("Digite a capacidade do pendrive em MBs: ");

    scanf("%d", &capacidade);

    pendrive(capacidade);

    return 0;
}

void pendrive(int capacidade)
{

    int arquivos[18] = {32000,16000,8000,4000,2000,1000,800,600,500,400,200,100,50,85,10,5,2,1};
    int i, qtde;

    for(i=0; i<18; i++)
    {
        qtde = capacidade/arquivos[i];

        if (qtde > 0)
        {
            printf("%d arquivo(s) de %d\n", qtde, arquivos[i]);
            capacidade = capacidade % arquivos[i];
        }
        if (capacidade == 0)
        {
            break;
        }


    }

}

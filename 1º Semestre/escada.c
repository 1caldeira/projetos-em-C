#include <stdio.h>
int main()
{

    int i, numeroPessoas, tempo=0, tempoProx, tempoFuncionando = 0;

    scanf("%d", &numeroPessoas);
    scanf("%d", &tempo);

    for(i=1; i<numeroPessoas; i++)
    {
        scanf("%d", &tempoProx);
        if ((tempoProx - tempo) <= 10){
            tempoFuncionando = tempoFuncionando + (tempoProx - tempo);
        }
        else{
            tempoFuncionando = tempoFuncionando + 10;
        }
        tempoProx = tempo;
    }
    printf("%d", tempoFuncionando);

    return 0;
}

#include <stdio.h>

int main(){

int numeroPosicoes, posicaoDisco, posicaoAviao;

scanf("%i", &numeroPosicoes);
scanf("%i", &posicaoDisco);
scanf("%i", &posicaoAviao);

if (posicaoAviao < posicaoDisco){

    printf("%i", posicaoDisco - posicaoAviao);

} else {

   printf("%i", (numeroPosicoes - posicaoAviao) + posicaoDisco);

}



return 0;
}

    #include <stdio.h>

    int main(){

    int idade;

    scanf("%i", &idade);

    if (idade < 16){

        printf("nao eleitor");

    } else if (idade < 18 || idade >= 65){

         printf("facultativo");

    } else{


    printf("obrigatorio");

    }




    return 0;
    }

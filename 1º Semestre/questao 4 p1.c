int main(){

    int x, y, cont;

    cont = 0;

    scanf("%i %i", &x, &y);


    while (x != 0 && y != 0){

        if (x > 0 && x % 2 == 0){

            cont = cont + 1;

        }

        if (y > 0 && y % 2 == 0){

            cont = cont + 1;

        }


        scanf("%i %i", &x, &y);


    }

printf("%i\n", cont);

 return 0;
}

int main(){

    int x, y, i;


    scanf("%i %i", &x, &y);

    for (i=x; i<=y; i=i+2){

        if (i % 2 != 0){

            i = i + 1;

        }

        printf(" %i", i);


    }


 return 0;
}

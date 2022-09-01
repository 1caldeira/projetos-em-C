#include <stdio.h>
int main(){
    char string[10];

    scanf("%10[^\n]", &string);

    int i;

    for(i=10; i>=0; i--){
        printf("%c", string[i]);

    }

 return 0;
}

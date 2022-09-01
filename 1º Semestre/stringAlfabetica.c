#include <stdio.h>
int main(){

char string1[10];
char string2[10];
int i;

fgets(string1, 10, stdin);
fgets(string2, 10, stdin);

for(i=0; i<10; i++){

if(string1[i]!= string2[i] && string1[i] < string2[i]){
    printf("%s%s", string1, string2);

} else{

printf("%s%s", string2, string1);

}
break;


}
return 0;
}

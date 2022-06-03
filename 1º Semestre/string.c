#include <stdio.h>
#include <string.h>

int main(){

char s1[50] = "The grey fox";
char s2[] = " jumped";
char s3[] = " in the sea ";
char s4[] = "with courage.";

strcat(s1, s2);
strcat(s1, s3);
strcat(s1, s4);
printf("%s\n", s1);
printf("the lenght of s1 is: %d\n", strlen(s1));
strcpy(s1, s2);
printf("%s\n", s1);


return 0;
}

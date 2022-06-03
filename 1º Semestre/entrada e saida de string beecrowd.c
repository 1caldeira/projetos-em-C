#include <stdio.h>

int main(){


char str1[41], str2[41], str3[41];

scanf("%41[^\n]", &str1);
fflush(stdin);
scanf("%41[^\n]", &str2);
fflush(stdin);
scanf("%41[^\n]", &str3);

printf("%s%s%s\n",str1, str2, str3);
printf("%s%s%s\n",str2, str3, str1);
printf("%s%s%s\n",str3, str1, str2);
printf("%.10s%.10s%.10s\n", str1, str2, str3);



return 0;
}

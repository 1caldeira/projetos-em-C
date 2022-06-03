#include <stdio.h>

int main()
{
int x, i, fat;

scanf("%d", &x);

fat = 0;

for(i = 1; i < x; i++)
fat = fat + i * x;

printf("\nFatorial calculado: %d", fat);
return 0;
}

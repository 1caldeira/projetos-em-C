#include <stdio.h>

int main()
{

    double x, i, fat;

    scanf("%lf", &x);

    fat = x;

    for (i = 1; i < x; i= i + 1)
    {
        fat = fat * i;
    }
    printf("\nfatorial= %lf", fat);

    return 0;
}



#include <stdio.h>
#define LIMITE 3

double media(int array[])
{
    int i;
    double tmp = 0;

    for(i = 0; i < LIMITE; i++)
    {
        tmp += array[i];
    }

    return((tmp) / LIMITE);
}

int main(void)
{
    int array[LIMITE], i;

    for(i = 0; i < LIMITE; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("%.2e", media(array));

    return(0);
}

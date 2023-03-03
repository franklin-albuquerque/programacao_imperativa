#include <stdio.h>

void iguais_a_n(int array[], int cont)
{
    int i;

    for(i = 0; i < cont - 1; i++)
    {
        if(array[i] == array[cont - 1])
        {
            printf("%d\n", i);
        }
    }
}

int main(void)
{
    int array[101], i;

    for(i = 0; i < 101; i++)
    {
        scanf("%d", &array[i]);
    }

    iguais_a_n(array, i);

    return(0);
}

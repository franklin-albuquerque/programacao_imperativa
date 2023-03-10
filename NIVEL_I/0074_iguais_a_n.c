#include <stdio.h>
#define LIMITE 100

void pos_nros_iguais_a_n(int array[], int numero)
{
    for(int i = 0; i < LIMITE; i++)
    {
        if(array[i] == numero)
        {
            printf("%d\n", i);
        }
    }
}

int main(void)
{
    int array[LIMITE], n;

    for(int i = 0; i < LIMITE; i++)
    {
        scanf("%d", &array[i]);
    }
    scanf("%d", &n);

    pos_nros_iguais_a_n(array, n);

    return(0);
}

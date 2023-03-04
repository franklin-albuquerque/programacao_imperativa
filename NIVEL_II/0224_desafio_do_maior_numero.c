#include <stdio.h>
#define LIMITE 100

int maior_numero(int array[], int cont)
{
    int i, maior;

    for(i = 0, maior = 0; i < cont; i++)
    {
        if(array[i] > maior)
        {
            maior = array[i];
        }
    }

    return(maior);
}

int main(void)
{
    int i = 0, array[LIMITE];

    do
    {
        scanf("%d", &array[i]);
        i++;
    } while(i < LIMITE && array[i - 1] > 0);

    printf("%d\n", maior_numero(array, i));

    return(0);
}

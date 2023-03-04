#include <stdio.h>

void ordemInversa(int array[], int tam)
{
    int i, j, tmp, array_invertido[tam];

    for(i = tam - 1, j = 0; i >= 0; i--, j++)
    {
        array_invertido[j] = array[i];
    }

    for(i = 0; i < tam; i++)
    {
        printf("%d", array_invertido[i]);

        if(i + 1 < tam)
        {
            printf(" ");
        }
    }

    printf("\n");
}

void descolamentoParaADireita(int array[], int tam)
{
    int i, array_deslocado[tam];

    for(i = 1; i <= tam; i++)
    {
        array_deslocado[i - 1] = array[i];
    }

    array_deslocado[tam - 1] = array[0];

    for(i = 0; i < tam; i++)
    {
        printf("%d", array_deslocado[i]);

        if(i + 1 < tam)
        {
            printf(" ");
        }
    }

    printf("\n");
}

void ordena(int array[], int tam)
{
    int i, j, tmp;

    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            if(j + 1 < tam)
            {
                if(array[j + 1] > array[j])
                {
                    tmp = array[j + 1],
                    array[j + 1] = array[j],
                    array[j] = tmp;
                }
            }
        }
    }

    for(i = 0; i < tam; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");
}

int main(void)
{
    int tam, i;
    scanf("%d", &tam);
    int array[tam];
    printf("\n");

    for(i = 0; i < tam; i++)
    {
        scanf("%d", &array[i]);
    }

    ordemInversa(array, tam);
    descolamentoParaADireita(array, tam);
    ordena(array, tam);

    return (0);
}

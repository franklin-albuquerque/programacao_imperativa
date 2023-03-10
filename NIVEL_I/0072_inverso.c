#include <stdio.h>

void imprimir(int array[], int tamanho)
{
    for(int i = 0; i < tamanho; i++)
    {
        printf("%d%s", array[i], (i < tamanho - 1) ? " " : "");
    }
}

void inverter(int array[], int tamanho)
{
    int meio_par = (tamanho / 2);

    for(int i = 0, j = tamanho - 1; i < meio_par; i++, j--)
    {
        int num = array[i];
        array[i] = array[j];
        array[j] = num;
    }
}

int main(void)
{
    int tamanho;
    scanf("%d", &tamanho);

    int array[tamanho];

    for(int i = 0; i < tamanho; i++)
    {
        scanf("%d", &array[i]);
    }

    inverter(array, tamanho);
    imprimir(array, tamanho);

    return(0);
}

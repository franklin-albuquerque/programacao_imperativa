#include <stdio.h>

int algarismo_das_unidades(int numero)
{
    return(numero % 10);
}

int main(void)
{
    int numero;
    scanf("%d", &numero);
    printf("%d\n", algarismo_das_unidades(numero));
    return(0);
}

#include <stdio.h>
#define LIMITE 5

int soma_de_divisores(int array[])
{
    int i, j, soma = 0, maior = 0, tmp;

    for(i = 0; i < LIMITE; i++)
    {
        for(j = 1; j < array[i]; j++)
        {
            if((array[i] % j) == 0)
            {
                soma += j;
            }
        }
        if(soma > maior)
        {
            maior = soma;
            tmp = array[i];
        }
        soma = 0;
    }

    return(tmp);
}

int main(void)
{
    int i, j, array[LIMITE];

    for(i = 0; i < LIMITE; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("%d\n", soma_de_divisores(array));

    return(0);
}

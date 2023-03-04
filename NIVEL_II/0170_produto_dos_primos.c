#include <stdio.h>
#include <stdbool.h>
#define LIMITE 4

int num_primo(int num)
{
    int div = 0, i;

    for(i = 1; i <= num; i++)
    {
        if((num % i) == 0)
        {
            div++;
        }
    }

    return(div == 2);
}

int produto_dos_primos(int num[])
{
   int i, tmp = 1;

    for(i = 0; i + 1 < LIMITE; i++)
    {
        if(num_primo(num[i]))
        {
            tmp++;
        }
    }

    if(tmp == LIMITE)
    {
        int prod = 1;

        for(i = 0; i < LIMITE; i++)
        {
            prod *= num[i];
        }

        return(prod);
    }

    return(0);
}

int main(void)
{
    int numeros[LIMITE], i, res;

    for(i = 0; i < LIMITE; i++)
    {
        scanf("%d", &numeros[i]);
    }

    res = produto_dos_primos(numeros);

    if(res)
        printf("%d\n", produto_dos_primos(numeros));
    else
        printf("SEM PRODUTO\n");

	return(0);
}

#include <stdio.h>
#include <stdbool.h>

int elevar_ao_quadrado(int x)
{
    return(x * x);
}

int main(void)
{
    while(true)
    {
        int numero;
        scanf("%d", &numero);

        if(numero == 0)
        {
            break;
        }
        else
        {
            int a = numero / 2, b = a + 1;
            printf("%d - %d\n", elevar_ao_quadrado(b), elevar_ao_quadrado(a));
        }
    }

    return(0);
}

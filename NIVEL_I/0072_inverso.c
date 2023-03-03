#include <stdio.h>

void imprime(int limite, int array[])
{
    int i;

    for(i = 0; i < limite; i++)
    {
        printf("%d", array[i]);

        if(i < limite - 1)
        {
            printf(" ");
        }
    }
}

int main(void)
{
    int limite, i, j, tmp;
    scanf("%d", &limite);
    int array[limite];

    for(tmp = limite - 1; tmp >= 0; tmp--)
    {
        scanf("%d", &array[tmp]);
    }
    imprime(limite, array);

    return(0);
}

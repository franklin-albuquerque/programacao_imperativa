#include <stdio.h>

void ordem_crescente(int lista[], int limite)
{
    int i, j, tmp;

    for(i = 0; i < limite; i++)
    {
        for(j = 1; j < limite; j++)
        {
            if(lista[j] < lista[j - 1])
            {
                tmp = lista[j - 1],
                lista[j - 1] = lista[j],
                lista[j] = tmp;
            }
        }
    }
}

int main(void)
{
    int limite, i, j;
    scanf("%d", &limite);
    int lista[limite];

    for(i = 0; i < limite; i++)
    {
        scanf("%d", &lista[i]);
    }
    ordem_crescente(lista, limite);
    for(j = 0; j < limite; j++)
    {
        printf("%d\n", lista[j]);
    }

	return(0);
}

#include <stdio.h>
#include <stdlib.h>

void numeros_das_casas_escolhidas(int limite, int *nros_casas_rua, int soma_casas_escolhidas)
{
    int i, j;
    
    for(i = 0; i < limite; i++)
    {
        for(j = 0; j < limite; j++)
        {
            if((nros_casas_rua[i] + nros_casas_rua[j]) == soma_casas_escolhidas)
            {
                printf("%d %d\n", nros_casas_rua[i], nros_casas_rua[j]);
                exit(0);
            }
        }
    }
}

int main(void)
{
    int limite, i, j, k, soma_casas_escolhidas;
    int casa_escolhida_1, casa_escolhida_2;
    scanf("%d", &limite);
    int nros_casas_rua[limite];

    for(i = 0; i < limite; i++)
    {
        scanf("%d", &nros_casas_rua[i]);
    }
    scanf("%d", &soma_casas_escolhidas);

    numeros_das_casas_escolhidas(limite, nros_casas_rua, soma_casas_escolhidas);

	return(0);
}

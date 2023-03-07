#include <stdio.h>

int decimo_primeiro_digito(int indice, int cpf[indice][11])
{
    int soma = 0, i;

    for(i = 0; i < 10; i++)
    {
        soma += cpf[indice][i] * i;
    }
    if(soma % 11 > 1 && soma % 11 < 10)
    {
        return(soma % 11);
    }
    else
    {
        return(0);
    }
}

int decimo_digito(int indice, int cpf[indice][11])
{
    int soma = 0, i;

    for(i = 0; i < 9; i++)
    {
        soma += cpf[indice][i] * (i + 1);
    }
    if(soma % 11 > 1 && soma % 11 < 10)
    {
        return(soma % 11);
    }
    else
    {
        return(0);
    }
}

int main(void)
{
    int limite, i, j;
    scanf("%d", &limite);
    int cpf[limite][11];

    for(i = 0; i < limite; i++)
    {
        for(j = 0; j < 9; j++)
        {
            scanf("%d", &cpf[i][j]);
        }

        cpf[i][j] = decimo_digito(i, cpf);
        cpf[i][j + 1] = decimo_primeiro_digito(i, cpf);
        
        printf("Caso %d: ", i + 1);
        for(j = 0; j < 11; j++)
        {
            if(j == 9)
            {
                printf("-");
            }
            printf("%d", cpf[i][j]);
        }
        printf("\n");
    }


    return(0);
}

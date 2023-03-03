#include <stdio.h>
#include <stdbool.h>

bool bissexto(int ano)
{
    return(ano % 4 == 0 && ( ano % 100 != 0 || ano % 400 == 0));
}

int diasDoMes(int mes, int ano)
{
    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {
        return 31;
    }
    else if(mes == 2)
    {
        if(bissexto(ano))
        {
            return(29);
        }
        else
        {
            return(28);
        }
    }
    else
    {
        return(30);
    }
}

bool data(int dia, int mes, int ano)
{
    return((1 <= mes && mes <= 12) && (1 <= dia && dia <= diasDoMes(mes, ano)) && (1900 <= ano && ano <= 2100));
}

int main(void)
{
    int dia, mes, ano;
    scanf("%d %d %d", &dia, &mes, &ano);

    if(data(dia, mes, ano))
    {
        printf("valida");
    }
    else
    {
        printf("invalida");
    }

    return(0);
}

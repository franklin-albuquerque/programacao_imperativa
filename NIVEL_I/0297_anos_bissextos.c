#include <stdio.h>
#include <stdbool.h>

bool bissexto(int ano)
{
    return(ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0));
}

int main(void)
{
    int ano_inicio, ano_final, ano_tmp, cont;
    scanf("%d %d", &ano_inicio, &ano_final);

    for(ano_tmp = ano_inicio, cont = 0; ano_final >= ano_tmp; ano_tmp++)
    {
        if(bissexto(ano_tmp))
        {
            printf("%d\n", ano_tmp);
            cont++;
        }
    }

    if(cont == 0)
    {
        printf("-1\n");
    }

    return(0);
}

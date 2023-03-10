#include <stdio.h>
#include <stdbool.h>

bool bissexto(int ano)
{
    return(ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0));
}

int main(void)
{
    int ano_inicial, ano_final;
    scanf("%d %d", &ano_inicial, &ano_final);

    bool tem_bissexto = false;

    for(int ano = ano_inicial; ano_final >= ano; ano++)
    {
        if(bissexto(ano))
        {
            printf("%d\n", ano);
            tem_bissexto = true;
        }
    }

    if(!tem_bissexto)
    {
        printf("-1\n");
    }

    return(0);
}

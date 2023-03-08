#include <stdio.h>

long double soma_de_gauss(long double m, long double n)
{
    long double maior, menor;
    long double soma_prim_ult, qtd_elementos, resultado;

    if(m > n)
    {
        maior = m;
        menor = n;
    }
    else
    {
        maior = n;
        menor = m;
    }

    soma_prim_ult = menor + maior;
    qtd_elementos = maior - menor;
    resultado = ((qtd_elementos * soma_prim_ult) / 2) + (soma_prim_ult / 2);

    return(resultado);
}

int main(void)
{
    long double m, n;
    scanf("%llf %llf", &m, &n);

    printf("%.Lf\n", soma_de_gauss(m, n));

    return(0);
}

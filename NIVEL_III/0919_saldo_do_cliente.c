#include <stdio.h>

typedef struct
{
    double saldo_inicial,
           debitos_adquiridos,
           creditos_adquiridos;
} cliente;

double saldoDoCliente(cliente c)
{
    return((c.saldo_inicial + c.creditos_adquiridos) - c.debitos_adquiridos);
}

void receberDados(cliente *c)
{
    printf("Informe o saldo inicial do cliente:\n");
    scanf("%lf", &c->saldo_inicial);
    printf("Informe o total de debitos adquiridos pelo cliente:\n");
    scanf("%lf", &c->debitos_adquiridos);
    printf("Informe o total de creditos adquiridos pelo cliente:\n");
    scanf("%lf", &c->creditos_adquiridos);
}

void imprimir(cliente c, double saldo)
{
    if(saldo > 0)
    {
        printf("Saldo positivo em R$ %.13f\n", saldo);
    }
    else if(saldo < 0)
    {
        printf("Saldo negativo em R$ %.14f\n", saldo);
    }
    else
    {
        printf("Saldo Zero\n");
    }
}

int main(void)
{
    cliente c;
    receberDados(&c);
    double saldo = saldoDoCliente(c);
    imprimir(c, saldo);
    return(0);
}

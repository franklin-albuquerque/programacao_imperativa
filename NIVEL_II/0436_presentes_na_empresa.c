#include <stdio.h>

float gastoMedio(int mulheres, int homens, float gasto_total)
{
    return(gasto_total / (mulheres + homens));
}

float gastoComFuncionarios(int homens)
{
    float panetone = 8.50;
    return(homens * panetone);
}

float gastoComFuncionarias(int mulheres)
{
    float garrafa_de_vinho = 10.00;
    return(mulheres * garrafa_de_vinho);
}

int main(void)
{
    int mulheres, homens;
    scanf("%d %d", &mulheres, &homens);
    float gasto_total = (gastoComFuncionarias(mulheres) + gastoComFuncionarios(homens)),
          gasto_medio = gastoMedio(mulheres, homens, gasto_total);
    printf("%.2f\n", gasto_total);
    printf("%.2f\n", gasto_medio);
    return(0);
}

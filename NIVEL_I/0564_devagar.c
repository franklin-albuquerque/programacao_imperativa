#include <stdio.h>

int pontos_na_carteira(float veloc_max, float veloc_veic)
{
    int pontos = 0;

    if(veloc_veic >= veloc_max && veloc_veic < (veloc_max * 1.2))
    {
        pontos = 4;
    }
    else if(veloc_veic > (veloc_max * 1.2) && veloc_veic <= (veloc_max * 1.5))
    {
        pontos = 5;
    }
    else if(veloc_veic > (veloc_max * 1.5))
    {
        pontos = 7;
    }

    return (pontos);
}

float valor_da_multa(float veloc_max, float veloc_veic)
{
    float multa = 0;

    if(veloc_veic > veloc_max && veloc_veic < (veloc_max * 1.2))
    {
        multa = 85.13;
    }
    else if(veloc_veic > (veloc_max * 1.2) && veloc_veic <= (veloc_max * 1.5))
    {
        multa = 127.69;
    }
    else if(veloc_veic > (veloc_max * 1.5))
    {
        multa = 574.62;
    }

    return (multa);
}

int main(void)
{
    float veloc_max, veloc_veic;
    scanf("%f %f", &veloc_max, &veloc_veic);

    printf("%.2f\n", valor_da_multa(veloc_max, veloc_veic));
    printf("%d\n", pontos_na_carteira(veloc_max, veloc_veic));

    return (0);
}

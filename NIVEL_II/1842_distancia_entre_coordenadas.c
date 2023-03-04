#include <stdio.h>
#include <math.h>

typedef struct Ponto
{
	float X,
	      Y;
} ponto;

float distanciaEntreCoordenadas(ponto p1, ponto p2)
{
    return(sqrt((pow((p2.X - p1.X), 2)) + (pow((p2.Y - p1.Y), 2))));
}

int main(void)
{
    ponto p1, p2;

    int leituras, cont;
    scanf("%d", &leituras);

    for(cont = 0; cont < leituras; cont++)
    {
        scanf("%f %f %f %f", &p1.X, &p1.Y, &p2.X, &p2.Y);
        printf("%.2f\n", distanciaEntreCoordenadas(p1, p2));
    }

    return(0);
}

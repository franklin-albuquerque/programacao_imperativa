#include <stdio.h>

int total_de_minutos(int horas, int minutos)
{
    return(horas * 60 + minutos);
}

int main(void)
{
    int horas, minutos;
    scanf("%d %d", &horas, &minutos);
    printf("%d minutos.\n", total_de_minutos(horas, minutos));
	return(0);
}

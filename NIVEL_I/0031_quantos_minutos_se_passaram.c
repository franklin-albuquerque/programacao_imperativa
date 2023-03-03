#include <stdio.h>

int totalDeMinutos(int horas, int minutos)
{
    return((horas * 60) + minutos);
}

int main(void)
{
    int horas, minutos;
    scanf("%d %d", &horas, &minutos);
    printf("%d minutos.\n", totalDeMinutos(horas, minutos));
	return(0);
}

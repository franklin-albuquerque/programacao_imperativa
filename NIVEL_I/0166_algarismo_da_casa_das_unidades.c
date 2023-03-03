#include <stdio.h>

int algarismoDaCasaDasUnidades(int num)
{
    return(num % 10);
}

int main(void)
{
    int num;
    scanf("%d", &num);
    printf("%d\n", algarismoDaCasaDasUnidades(num));
    return(0);
}

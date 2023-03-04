#include <stdio.h>

int soma(int num_1, int num_2)
{
    return(num_1 + num_2);
}

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("O resultado da soma entre %d e %d = %d\n", a, b, soma(a, b));
	return(0);
}

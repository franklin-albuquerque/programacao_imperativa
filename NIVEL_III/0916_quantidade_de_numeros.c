#include <stdio.h>

void lerEnquantoNumeroEhPositivo()
{
    int num = 1;

    while(num > 0)
    {
        printf("Digite um numero (negativo para parar o programa):\n");
        scanf("%d", &num);

        if(num > 0)
        {
            printf("Numero: %d\n", num);
        }
    }
}

int main(void)
{
    lerEnquantoNumeroEhPositivo();
	return(0);
}

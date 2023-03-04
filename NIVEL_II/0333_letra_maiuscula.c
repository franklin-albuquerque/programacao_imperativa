#include <stdio.h>

void letraMaiusculaNoInicioEAposPontos(char str[])
{
    int i;
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[0] >= 'a' && str[0] <= 'z')
        {
            str[0] = str[0] - 32;
        }
        else if(str[i] == '.' && str[i + 1] == ' ' && (str[i + 2] >= 'a' && str[i + 2] <= 'z'))
        {
            str[i + 2] = str[i + 2] - 32;
        }
    }
}

int main(void)
{
    int quant, i;
    char string[10^100];
    scanf("%d", &quant);

    for(i = 0; i < quant + 1; i++)
    {
        fgets(string, 10^100, stdin);
        letraMaiusculaNoInicioEAposPontos(string);
        printf("%s", string);
    }

    return(0);
}

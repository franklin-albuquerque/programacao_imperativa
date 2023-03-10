#include <stdio.h>
#include <string.h>

void inverter(char string[], int tamanho)
{
    for(int i = 0, j = tamanho - 1; i < j; i++, j--)
    {
        char caractere = string[i];
        string[i] = string[j];
        string[j] = caractere;
    }
}

int main(void)
{
    int tamanho;

    while(scanf("%d\n", &tamanho) && tamanho > 0)
    {
        char string[tamanho + 1];
        fgets(string, tamanho + 1, stdin);
        inverter(string, tamanho);
        printf("%s\n", string);
    }

    return(0);
}

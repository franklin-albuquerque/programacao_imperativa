#include <stdio.h>
#include <string.h>
#define TAM_MAX_STR 255

void inverter(char string[])
{
    int tamanho = strlen(string) - 1;

    for(int i = 0, j = tamanho; i < j; i++, j--)
    {
        char caractere = string[i];
        string[i] = string[j];
        string[j] = caractere;
    }
}

int main(void)
{
    char string[TAM_MAX_STR + 1];
    fgets(string, TAM_MAX_STR + 1, stdin);

    inverter(string);
    printf("%s", string);

	return(0);
}

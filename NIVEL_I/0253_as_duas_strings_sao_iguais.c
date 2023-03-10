#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define TAM_MAX_STR 50

bool sao_diferentes(char primeira_str[], char segunda_str[])
{
    return(strcmp(primeira_str, segunda_str));
}

int main(void)
{
    char prim_string[TAM_MAX_STR + 1], seg_string[TAM_MAX_STR + 1];

    fgets(primeira_str, TAM_MAX_STR + 1, stdin);
    fgets(segunda_str, TAM_MAX_STR + 1, stdin);

    if(sao_diferentes(primeira_str, segunda_str))
    {
        printf("DIFERENTES\n");
    }
    else
    {
        printf("IGUAIS\n");
    }

    return(0);
}

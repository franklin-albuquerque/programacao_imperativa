#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define TAMANHO 2^15

bool sao_diferentes(char string_1[][TAMANHO], char string_2[][TAMANHO])
{
    return(strcmp(string_1[], string_2[]));
}

int main(void)
{
    int m, n, i, j;
    scanf("%d %d", &m, &n);
    char string_1[m][TAMANHO], string_2[n][TAMANHO];

    for(i = 0; i < m; i++)
    {
        fgets(string_1[i], TAMANHO, stdin);
    }
    for(j = 0; j < m; j++)
    {
        fgets(string_2[j], TAMANHO, stdin);
    }

    if(sao_diferentes(string_1, string_2))
    {
        printf("DIFERENTES\n");
    }
    else
    {
        printf("IGUAIS\n");
    }

    return(0);
}

#include <stdio.h>
#include <string.h>
#define TAM_MAX_STR 100

int contar_buracos(char string[])
{
    int buracos = 0;

    for(int i = 0; i < strlen(string); i++)
    {
        char caractere = string[i];

        switch(caractere)
        {
            case 'a': case 'A': case 'b': case 'd': case 'D': case 'g': case 'o':
            case 'O': case 'p': case 'P': case 'q': case 'Q': case 'R':
            {
                buracos++;
                continue;
            }
            case 'B':
            {
                buracos += 2;
                continue;
            }
        }
    }

    return(buracos);
}

int main(void)
{
    int limite;
    scanf("%d\n", &limite);

    char string[TAM_MAX_STR + 1];

    for(int i = 0; i < limite; i++)
    {
        fgets(string, TAM_MAX_STR + 1, stdin);
        printf("%d\n", contar_buracos(string));
    }

	return(0);
}

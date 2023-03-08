#include <stdio.h>
#define LIMITE 10

void selecionar_nomes(char nomes[LIMITE][LIMITE], char letra)
{
    int i, j, valor_letra;

    if(letra >= 'a' && letra <= 'z')
    {
        valor_letra = 32;
    }
    else if(letra >= 'A' && letra <= 'Z')
    {
        valor_letra = -32;
    }

    for(i = 0; i < LIMITE; i++)
    {
        for(j = 0; j < LIMITE; j++)
        {
            if(nomes[i][j] == letra || nomes[i][j] == letra - valor_letra)
            {
                printf("%s", nomes[i]);
            }
        }
    }
}

int main(void)
{
    int i;
    char nomes[LIMITE][LIMITE], letra;

    for(i = 0; i < LIMITE; i++)
    {
        fgets(nomes[i], LIMITE, stdin);
    }
    scanf("%c", &letra);

    selecionar_nomes(nomes, letra);

    return(0);
}

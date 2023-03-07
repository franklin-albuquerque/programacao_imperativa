#include <stdio.h>

int indiceDaOcorrenciaDoCaractere(char str[], char caractere)
{
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == caractere)
        {
            return(i);
        }
    }

    return(-1);
}

int main()
{
    char str[10^100], caractere;
    fgets(str, 10^100, stdin);
    scanf("%c", &caractere);
    printf("%d\n", indiceDaOcorrenciaDoCaractere(str, caractere));
	return(0);
}

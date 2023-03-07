#include <stdio.h>
#define LIMITE 50

void indicesDoCaracter(char str[], char caracter)
{
    int i;

    for(i = 0; str[i] != '\n'; i++)
    {
        if(str[i] == caracter)
        {
            printf("%d\n", i);
        }
    }

    printf("-1\n");
}

int main(void)
{
    char str[LIMITE], caracter;
    fgets(str, LIMITE, stdin);
    scanf("%c", &caracter);
    indicesDoCaracter(str, caracter);
    return(0);
}

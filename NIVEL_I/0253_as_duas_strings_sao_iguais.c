#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool saoDiferentes(char string_1[], char string_2[])
{
    return(strcmp(string_1, string_2));
}

int main(void)
{
    char string_1[50], string_2[50];
    fgets(string_1, 50, stdin);
    //string_1[strlen(string_1) - 1] = '\0';      //Necessário no TheHuxley.
    fgets(string_2, 50, stdin);

    if(saoDiferentes(string_1, string_2))
    {
        printf("DIFERENTES\n");
    }
    else
    {
        printf("IGUAIS\n");
    }

    return(0);
}

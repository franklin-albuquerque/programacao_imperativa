#include <stdio.h>
#include <string.h>
#define LIMITE 255

void inverte(char string[])
{
    int i, j, k;
    char invertida[LIMITE];

    for(i = strlen(string) - 2, j = 0; i >= 0; i--, j++)
    {
        invertida[j] = string[i];
    }
    for(k = 0; k < j; k++)
    {
        string[k] = invertida[k];
    }
}

int main(void)
{
    char string[LIMITE];
    fgets(string, LIMITE, stdin);
    inverte(string);
    printf("%s", string);
	return(0);
}

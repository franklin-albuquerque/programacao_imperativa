#include <stdio.h>
#include <string.h>

void inverte(char string[], int n)
{
    int i, j, k;
    char invertida[n];

    for(i = strlen(string) - 1, j = 0; i >= 0; i--, j++)
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
    int n, i;

    do
    {
        scanf("%d\n", &n);

        if(n)
        {
            char string[n + 1];
            fgets(string, n + 1, stdin);
            inverte(string, n);
            printf("%s", string);
        }
    } while(n);

	return(0);
}

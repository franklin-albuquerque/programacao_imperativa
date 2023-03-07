#include <stdio.h>

void permuta(int limite, char string[][10^100])
{
    int i, j, k;
    char tmp;

    for(i = 0; i <= limite; i++)
    {
        for(j = 1; string[i][j] != '\0'; j++)
        {
            if(string[i][j - 1] < string[i][j])
            {
                tmp = string[i][j - 1];
                string[i][j - 1] = string[i][j];
                string[i][j] = tmp;
                j = 0;
            }
        }
    }
}

int main(void)
{
    int limite, i, j;
    scanf("%d", &limite);
    char string[limite + 1][10^100];

    for(i = 0; i <= limite; i++)
    {
        fgets(string[i], 10^100, stdin);
    }
    permuta(limite, string);
    for(j = 0; j < limite; j++)
    {
        printf("Caso %d: %s", j + 1, string[j+1]);
    }

    return(0);
}

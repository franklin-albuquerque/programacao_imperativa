#include <stdio.h>
#include <string.h>

void remove_digito(int string_1[], int string_2[])
{
    int i, j, k, tam_str1 = strlen(string_1), tam_str2 = strlen(string_2);

    for(i = 0; i < tam_str1; i++)
    {
        for(j = 0; j < tam_str2; j++)
        {
            if(string_1[i] == string_2[j])
            {
                for(k = j; k < tam_str2 - 1; k++)
                {
                    string_2[k] = string_2[k + 1];
                    //string_2[tam_str2 - 1] = '\0';
                }
                tam_str2--;
                string_2[tam_str2] = '\0';
            }
        }
    }
}

int main(void)
{
    int string_1[10^100], string_2[10^100];

    do
    {
        scanf("%s", string_1);
        scanf("%s", string_2);
        remove_digito(string_1, string_2);
        if(string_2[0] == '\n' || string_2[0] == '\0')
        {
            printf("0\n");
        }
        else
        {
            printf("%s\n", string_2);
        }
    } while(string_1[0] != '0');

    return(0);
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int palindromo(char *string)
{
    int i, a = 0, b = 0, c = 0;

    for(i = 0; i < 5; i++)
    {
        if(string[i] == 'A')
        {
            a++;
        }
        else if(string[i] == 'B')
        {
            b++;
        }
        else if(string[i] == 'C')
        {
            c++;
        }
    }

    if((a == 5) || (b == 5) || (c == 5))
    {
        return(1);
    }
    else if(((a / 2) == 2) && ((b == 1) || (c == 1)))
    {
        return(1);
    }
    else if(((a / 2) == 1) && ((b == 2) || (c == 2)))
    {
        return(1);
    }
    else if(((a / 2) == 1) && ((b == 3) || (c == 3)))
    {
        return(1);
    }
    else if(((a / 2) == 0) && ((b == 4) || (c == 4)))
    {
        return(1);
    }
    else
    {
        return(0);
    }
}

int main(void)
{
    int i;
    char string[5];

    for(i = 0; i < 5; i++)
    {
        scanf("%c\n", &string[i]);
        string[i] = toupper(string[i]);
    }
    string[5] = '\0';

    if(palindromo(string))
    {
        printf("sim\n");
    }
    else
    {
        printf("nao\n");
    }

	return(0);
}

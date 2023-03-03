#include <stdio.h>
#include <string.h>

int conta_buracos(char strings[])
{
    int i, j, buracos = 0;

    for(i = 0, j = 0; j < strlen(strings); j++)
    {
        switch(strings[i][j])
        {
            case 'a':
                buracos++;

            case 'A':
                buracos++;

            case 'b':
                buracos++;

            case 'B':
                buracos += 2;

            case 'd':
                buracos++;

            case 'D':
                buracos++;

            case 'g':
                buracos++;

            case 'o':
                buracos++;

            case 'O':
                buracos++;

            case 'p':
                buracos++;

            case 'P':
                buracos++;

            case 'q':
                buracos++;

            case 'Q':
                buracos++;

            case 'R':
                buracos++;
        }
    }

    return(buracos);
}

int main(void)
{
    int limite, i;
    scanf("%d", &limite);
    char strings[limite][100];

    for(i = 0; i < limite; i++)
    {
        fgets(strings[i], 100, stdin);
        printf("%d\n", conta_buracos(strings[i]));
    }

	return(0);
}

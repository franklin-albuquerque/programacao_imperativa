#include <stdio.h>

void canal(int num)
{
    switch(num)
    {
        case 2:
            printf("SBT\n");
            break;
        case 4:
            printf("BAND\n");
            break;
        case 6:
            printf("REDETV!\n");
            break;
        case 9:
            printf("RECORD\n");
            break;
        case 13:
            printf("GLOBO\n");
            break;
        default:
            printf("Canal Invalido\n");
            break;
    }
}

int main(void)
{
    int num;
    printf("Digite um numero de um canal de tv:\n");
    scanf("%d", &num);
    canal(num);
    return(0);
}

#include <stdio.h>
#include <stdbool.h>

bool propriedade_do_divisor(int num, int tmp)
{
    if(num >= 10 && num <= 100)
    {
        if(num % 10 != 0)
        {
            tmp = num / 10;

            if(num % tmp == 0)
            {
                return (true);
            }
        }
        else
        {
            return (false);
        }
    }
}

int main(void)
{
    int num, tmp;
    scanf("%d", &num);

    if(propriedade_do_divisor(num, tmp))
    {
        printf("SIM\n");
    }
    else
    {
        printf("NAO\n");
    }

    return (0);
}

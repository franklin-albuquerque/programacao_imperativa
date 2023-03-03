#include <stdio.h>

int elevaAoQuadrado(int num)
{
    return(num * num);
}

int main(void)
{
    int x;

    do
    {
        scanf("%d", &x);
        int xy = x / 2, xz = xy + 1;

        if(x != 0)
        {
            printf("%d - %d\n", elevaAoQuadrado(xz), elevaAoQuadrado(xy));
        }
    } while(x > 0);

    return(0);
}

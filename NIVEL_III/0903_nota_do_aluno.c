#include <stdio.h>

struct questoes
{
    char alternativa;
};

void correcao(struct questoes q[])
{
    int a;
}

int main(void)
{

    int i;

    struct questoes q[10];

    for(i = 0; i < 10; i++)
    {
        scanf("%c", &q[i].alternativa);
    }



    return (0);
}

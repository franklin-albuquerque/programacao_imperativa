#include <stdio.h>

struct informacoes
{
    int dificuldade;
    float preco;
};

void reajuste(int n, struct informacoes info[])
{
    int i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(info[j].preco <= 100.00 && info[j].preco >= 45.00)
            {
                if(info[j].dificuldade == 0)
                {
                    info[j].preco = info[j].preco * 0.875;
                }
                else if(info[j].dificuldade == 1)
                {
                    info[j].preco = info[j].preco * 0.90;
                }
                else if(info[j].dificuldade == 2)
                {
                    info[j].preco = info[j].preco * 0.91;
                }
                else if(info[j].dificuldade == 3)
                {
                    info[j].preco = info[j].preco * 0.925;
                }
                else if(info[j].dificuldade == 4)
                {
                    info[j].preco = info[j].preco * 0.945;
                }
                else if(info[j].dificuldade == 5)
                {
                    info[j].preco = info[j].preco * 0.95;
                }
                
                if(info[j].preco < 45.00)
                {
                    info[j].preco = 45;
                }
            }
            else if(info[j].preco >= 45.00)
            {
                if(info[j].dificuldade == 0)
                {
                    info[j].preco = info[j].preco * 0.75;
                }
                else if(info[j].dificuldade == 1)
                {
                    info[j].preco = info[j].preco * 0.80;
                }
                else if(info[j].dificuldade == 2)
                {
                    info[j].preco = info[j].preco * 0.82;
                }
                else if(info[j].dificuldade == 3)
                {
                    info[j].preco = info[j].preco * 0.85;
                }
                else if(info[j].dificuldade == 4)
                {
                    info[j].preco = info[j].preco * 0.88;
                }
                else if(info[j].dificuldade == 5)
                {
                    info[j].preco = info[j].preco * 0.90;
                }
            }
        }
    }
}

int main(void)
{
    int n, i, j;
    scanf("%d", &n);

    struct informacoes info[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d %f", &info[i].dificuldade, &info[i].preco);
    }

    reajuste(n, info);

    for(j = 0; j < n; j++)
    {
        printf("Jogo[%d] = R$%.2f\n", j, info[j].preco);
    }

    return (0);
}

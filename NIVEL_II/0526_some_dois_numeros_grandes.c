#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int menorNumero(int num_1, int num_2)
{
    return(num_1 <= num_2 ? num_1 : num_2);
}

int maiorNumero(int num_1, int num_2)
{
    return(num_1 >= num_2 ? num_1 : num_2);
}

int soma(int num_1, int num_2)
{
    return(num_1 + num_2);
}

void somaDoisNumerosGrandes(char array_m[], char array_n[])
{
    int tam_array_1 = strlen(array_m) - 1, tam_array_2 = strlen(array_n) - 1,
        i, maior = maiorNumero(tam_array_1, tam_array_2),
        menor = menorNumero(tam_array_1, tam_array_2);

    char novo_array[maior + 1];

    int a, b, tmp1, tmp2, array_soma[30];

    //printf("%d\n", maiorNumero(tam_array_1, tam_array_2));

    if(tam_array_1 > tam_array_2)
    {
        a = maior,
        b = menor;
    }
    else
    {
        a = menor,
        b = maior;
    }

    //tmp1[maior] = atoi(array_m);
    //tmp2 = array_n[b];

    //printf("%d\n", tmp1[0]);
//    system("cls");

    for(i = 0; maior >= 0; i++, a--, b--)
    {
        tmp1 = (int)array_m[a] - 48;
        tmp2 = (int)array_n[b] - 48;

        array_soma[i] = soma(tmp1, tmp2);

        if(soma(tmp1, tmp2) >= 10)
        {
            novo_array[i] = (soma(tmp1, tmp2) % 10),
            novo_array[i + 1] = (soma(tmp1, tmp2) / 10);
        }
        else
        {
            novo_array[i] = soma(tmp1, tmp2);
        }
    }

    novo_array[maior + 1] = '\0';

    printf("%d\n", array_soma[0]);

}

int main(void)
{
    char array_m[10^10000], array_n[10^10000];
    fgets(array_m, 10^10000, stdin);
    fgets(array_n, 10^10000, stdin);

    somaDoisNumerosGrandes(array_m, array_n);

	return(0);
}

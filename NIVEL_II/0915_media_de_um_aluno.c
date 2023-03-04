#include <stdio.h>

float media(float a, float b, float c, float d)
{
    return((a + b + c + d) / 4);
}

int main(void)
{
    float nota_1, nota_2, nota_3, nota_4;
    printf("Informe a primeira nota do aluno:\n");
    scanf("%f", &nota_1);
    printf("Informe a segunda nota do aluno:\n");
    scanf("%f", &nota_2);
    printf("Informe a terceira nota do aluno:\n");
    scanf("%f", &nota_3);
    printf("Informe a quarta nota do aluno:\n");
    scanf("%f", &nota_4);
    printf("Media: %.3f\n", media(nota_1, nota_2, nota_3, nota_4));
	return(0);
}

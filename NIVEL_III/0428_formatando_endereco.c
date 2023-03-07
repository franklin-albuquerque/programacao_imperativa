#include <stdio.h>
#include <string.h>

void imprime(int numero, int cep, char nome_da_rua[], char nome_do_bairro[], char cidade[], char estado[])
{
    printf("%s, %d.\n", nome_da_rua, numero);
    printf("Bairro: %s. Cep: %d\n", nome_do_bairro, cep);
    printf("%s/%s\n", cidade, estado);
}

void remove_quebra_de_linha(char nome_da_rua[], char nome_do_bairro[], char cidade[], char estado[])
{
    nome_da_rua[strlen(nome_da_rua) - 1] = '\0';
    nome_do_bairro[strlen(nome_do_bairro) - 1] = '\0';
    cidade[strlen(cidade) - 1] = '\0';
    estado[strlen(estado) - 1] = '\0';
}

int main(void)
{
    int numero, cep;
    char nome_da_rua[50], nome_do_bairro[50], cidade[50], estado[50];

    fgets(nome_da_rua, 50, stdin);
    scanf("%d\n", &numero);
    fgets(nome_do_bairro, 50, stdin);
    fgets(cidade, 50, stdin);
    fgets(estado, 50, stdin);
    scanf("%d\n", &cep);
    remove_quebra_de_linha(nome_da_rua, nome_do_bairro, cidade, estado);
    imprime(numero, cep, nome_da_rua, nome_do_bairro, cidade, estado);

    return(0);
}

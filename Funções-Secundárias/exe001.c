// 1. Crie uma função que receba um valor por parâmetro e informe se ele é positivo ou não.

#include <stdio.h>
#include <stdlib.h>

void verificaPositivo (int valor)
{
    if (valor > 0)
    {
        printf("O numero eh positivo!\n");
    }
    else if (valor == 0)
    {
        printf("O numero eh Neutro\n");
    }
    else if (valor < 0)
    {
        printf("O numero eh negativo!\n");
    }
}

int main(){

    int numero;

    printf("Digite um numero para saber se ele eh Positivo ou nao :\n");
    scanf("%i", &numero);

    verificaPositivo(numero);

    return 0;
}
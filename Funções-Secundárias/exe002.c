//  Crie uma função que receba um valor por parâmetro e diga se é par ou impar.

#include <stdio.h>

void imparORpar(int valor){
    if (valor %2 == 0)
    {
        printf("o valor eh Par!");
    }
    else if(valor % 2 != 0)
    {
        printf("o valor eh Impar!");
    }
}

int main() {

    int numero;

    printf("Digite um numero para saber se ele eh par ou impar :\n");
    scanf("%i", &numero);

    imparORpar(numero);
}
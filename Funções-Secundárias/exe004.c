// Crie uma função que receba 2 números e retorne ao programa principal o maior valor.

#include <stdio.h>

int maiorValor(valor1, valor2){

    int maior;

    if (valor1 > valor2)
    {
        maior = valor1;
    }
    else if (valor2> valor1)
    {
        maior = valor2;
    }

    return maior;
}

int main(){

    int numero1,numero2,resultado;

    printf("Digite o primeiro numero :\n");
    scanf("%i", &numero1);

    printf("Digite o Segundo numero :\n");
    scanf("%i", &numero2);

    resultado = maiorValor(numero1, numero2);
    maiorValor(numero1, numero2);

    printf("O maior valor eh %i", resultado);

}
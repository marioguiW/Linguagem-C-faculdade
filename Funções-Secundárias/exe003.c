// Crie uma função que receba três valores, 'a', 'b' e 'c', que são os coeficientes de uma
// equação do segundo grau e retorne ao programa principal o valor do delta, que é dado
// por: b² - 4.a.c

#include <stdio.h>

int delta(int valorA, int valorB, int valorC) {

    int resultadoDelta;
    resultadoDelta = (valorB*valorB) - (4 * valorA * valorC);
    return resultadoDelta;
}

int main(){

    int a,b,c;
    printf("De um valor para A :\n");
    scanf("%i", &a);

    printf("De um valor para B :\n");
    scanf("%i", &b);

    printf("De um valor para C :\n");
    scanf("%i", &c);

    int total = delta(a,b,c);

    delta(a,b,c);

    printf("O resultado do delta eh %i", total);
}
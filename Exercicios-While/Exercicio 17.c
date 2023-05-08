#include <stdio.h>

int main(){
    int numero1;
    int numero2;

    printf("Digite o primeiro valor :\n");
    scanf("%i", &numero1);

    printf("Digite o segundo valor a ser somado :\n");
    scanf("%i", &numero2);

    int soma = numero1 + numero2;

    printf("A soma entre %i mais %i eh %i", numero1, numero2, soma);
}
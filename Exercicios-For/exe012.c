// .Solicite ao usuário a digitação de um número e apresente o seu fatorial.

#include <stdio.h>
int main(){

    int numero,total= 0;

    printf("Digite um numero para ser apresentado o seu fatorial:\n");
    scanf("%i", &numero);
    printf("\n");
    printf("Fatorial!\n");
    for (int i = numero; i > 0; i--)
    {
        printf("%i\n", i);
        total = total + i;
        
    }
    printf("\n");
    printf("Total = %i", total);
}
// Faça um programa que leia um número n e mostre na tela os n primeiros números
// pares e depois os n primeiros números ímpares. 

#include <stdio.h>
int main(){
    int numero;

    printf("Digite um numero ? \n");
    scanf("%i", &numero);

    for (int i = 0; i < numero; i++)
    {
        if (i%2 == 0)
        {
            printf("%i\n", i);
        } 
    }
    printf("\n");
    for (int i = 0; i < numero; i++)
    {
        if (i%2 != 0)
        {
            printf("%i\n", i);
        } 
    }
}
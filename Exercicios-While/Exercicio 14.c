/*14. Escreva um programa que leia um número inteiro e calcule a soma de
todos os divisores desse número, com exceção dele próprio. Ex: a soma
dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.*/

#include <stdio.h>
int main() {
    int numero;
    int soma = 0;
    int contadora = 1;

    printf("Digite um numero para saber a soma dos divisores desse numero : ");
    scanf("%d", &numero);
    
    while(contadora < numero){

        if(numero % contadora == 0){
            soma = soma + contadora;
        }
    contadora++;
    }
    printf("A soma foi %i", soma);
}
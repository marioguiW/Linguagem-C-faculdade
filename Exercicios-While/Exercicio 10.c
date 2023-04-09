#include <stdio.h>
int main(){

    int numero1, numero2;
    int contador = 0;
    int asterisco = 0;

    printf("Digite a altura e o comprimento de um quadrado : \n");
    scanf("%i %i", &numero1, &numero2);

    while (numero1 > contador){
        contador++;
        asterisco= 0;
        while (numero2 > asterisco){
            printf("*");
            asterisco++;
        }
        printf("\n");
    }
}
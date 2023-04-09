#include <stdio.h>
int main(){
    int numero = 0;
    printf("Digite um número para saber se ele é par ou impar : ");
    scanf("%i", &numero);
    if(numero % 2 == 0){
        printf("Este numero eh par!");
    }else{
        printf("Este numero eh impar!");
    }
}

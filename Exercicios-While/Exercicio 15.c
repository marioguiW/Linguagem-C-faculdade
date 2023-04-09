#include<stdio.h>
int main(){
    float valor;
    printf("Informe valor a ser sacado!\n");
    scanf("%f",&valor);
    while(valor >= 200){
        printf("Nota de R$ 200,00\n");
        valor = valor - 200;
    }
    while(valor >= 100){
        printf("Nota de R$ 100,00\n");
        valor = valor - 100;
    }
    while(valor >= 50){
        printf("Nota de R$ 50,00\n");
        valor = valor - 50;
    }
    while(valor >= 20){
        printf("Nota de R$ 20,00\n");
        valor = valor - 20;
    }
    while(valor >= 10){
        printf("Nota de R$ 10,00\n");
        valor = valor - 10;
    }
    if(valor == 4 || valor == 6 || valor ==8 || valor == 2){
        while(valor >= 2){
            printf("Nota de R$ 2,00\n");
            valor = valor - 2;
        }
    }
    while(valor >= 5){
        printf("Nota de R$ 5,00\n");
        valor = valor - 5;
    }
    while(valor >= 2){
            printf("Nota de R$ 2,00\n");
            valor = valor - 2;
    }
}
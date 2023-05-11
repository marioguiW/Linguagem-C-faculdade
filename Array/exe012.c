// Faça um programa que leia dois vetores de 10 posições e calcule outro vetor
// contendo, nas posições pares os valores do primeiro e nas posições impares os
// // valores do segundo.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

srand(time(NULL));

int primeiroVetor[10];
int segundoVetor[10];
int terceiroVetor[10];

for (int i = 0; i < 10; i++)
{
    primeiroVetor[i] = rand()%10;
    segundoVetor[i] = rand()%10;
}

for (int i = 0; i < 10; i++)
{
    if (i%2 == 0)
    {
        terceiroVetor[i] = primeiroVetor[i];
    }else{
        terceiroVetor[i] = segundoVetor[i];
    }
}

for (int i = 0; i < 10; i++)
{
    printf("%i ", primeiroVetor[i]);
}

printf("\n");

for (int i = 0; i < 10; i++)
{
    printf("%i ", segundoVetor[i]);
}

printf("\n");

for (int i = 0; i < 10; i++)
{
    printf("%i ", terceiroVetor[i]);
}

}
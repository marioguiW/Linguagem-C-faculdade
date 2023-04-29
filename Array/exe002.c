// Criar um vetor de 5 posições contendo números inteiros digitados pelo usuário, e
// apresentar na tela a soma de todos.

#include <stdio.h>
int main(){
    
    int vetor[5], soma;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero inteiro :\n");
        scanf("%i", &vetor[i]);
    }

    soma = vetor[0] +  vetor[1] +  vetor[2] +  vetor[3] +  vetor[4];
    printf("A soma de todos estes numeros eh %i", soma);
    
}
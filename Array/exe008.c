// Faça um programa que leia um vetor de 10 posições e verifique se existem valores
// iguais e os escreva na tela.

#include <Stdio.h>

int main(){

    int vetor[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite os valores do vetor : ");
        scanf("%d", &vetor[i]);
    }

    vetorIgual = vetor[0];

    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] == vetor[i+1])
        {
            vetorIgual = i;
        }
        
        
    }
    
    
}
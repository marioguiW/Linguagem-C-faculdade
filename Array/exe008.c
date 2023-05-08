// Faça um programa que leia um vetor de 10 posições e verifique se existem valores
// iguais e os escreva na tela.

#include <Stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    srand(time(NULL));

    int vetor[10];

    for (int i = 0; i < 10; i++)
    {
        vetor[i] = rand()%10;
        printf("%d ", vetor[i]);
    }

    printf("\n---------------------------\n");

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j<10;j++)
        {
            if (vetor[i] == vetor[j])
            {
                printf("%d ", vetor[i]);
                break;
            }
            
        }
        
        
    }
    
    
}
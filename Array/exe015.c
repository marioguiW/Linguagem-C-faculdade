// Faça um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a
// intersecção entre os 2 vetores anteriores, ou seja, que contém apenas os números
// que estão em ambos os vetores. Não deve conter números repetidos.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int vetor1[10], vetor2[10], vetor3[10]={0,0,0,0,0,0,0,0,0,0};

    for (int i = 0; i < 10; i++)
    {
        vetor1[i] = rand()%10;
        printf("%d ", vetor1[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        vetor2[i] = rand()%10;
        printf("%d ", vetor2[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        for (int a = 0; a < 10; a++)
        {
            if (vetor1[i] == vetor2[a])
            {
                vetor3[i] = vetor1[i];
            }
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetor3[i]);
    }
    
}
    

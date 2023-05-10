// Escreva um programa que leia números inteiros no intervalo [0, 50] e os armazene
// em um vetor com 10 posições. Preencha um segundo vetor apenas com os números
// ímpares do primeiro vetor. Imprima os dois vetores.

#include <Stdio.h>
#include <time.h>

int main(){

    rand(time(NULL));

    int vetor1 [10];
    int vetorImpar[];

    for (int i = 0; i < 10; i++)
    {
        vetor1[i] = rand()%50;
    }

    for (int i = 0; i < 10; i++)
    {
        if (vetor1[i] % 2 == 0)
        {
            vetorImpar[i] = vetor1[i];
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d", vetor1[i]);

    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d", vetorImpar[i]);
    }
    
}
    

    
    

}
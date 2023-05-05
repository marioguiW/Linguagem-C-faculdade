// Faça um programa que receba do usuário um vetor com 10 posições. Em seguida
// deverá ser impresso o maior e o menor elemento do vetor, seguidos da sua posição
// no mesmo.

#include <stdio.h>
int main(){

    int vetor [10],positionMaiorValor, positionMenorValor;
    
    for (int i = 0; i < 10; i++)
    {
        printf("Digite os valores da lista : ");
        scanf("%d", &vetor[i]);
    }
    
    int menorValor = vetor[0];
    int maiorValor = vetor[0];

    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] > maiorValor)
        {
            maiorValor = vetor[i];
            positionMaiorValor = i;
        }
        else if(vetor[i] < menorValor)
        {
            menorValor = vetor[i];
            positionMenorValor = i;
        }
    }

    printf("Maior valor: %d. Posicao: %d\n", maiorValor,positionMaiorValor);
    printf("Menor valor: %d. Posicao: %d\n", menorValor, positionMenorValor);

    
}
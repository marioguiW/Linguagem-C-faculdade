// Leia um valor X. Coloque este valor na primeira posição de um vetor N[100]. Em
// cada posição subsequente de N (1 até 99), coloque a metade do valor armazenado
// na posição anterior. Imprima o vetor N. 
#include <stdio.h>
#include <stdlib.h>

int main(){

    float N[100];
    float valorDigitado;

    printf("Digite o primeiro valor do vetor : \n");
    scanf("%f", &valorDigitado);

    N[0] = valorDigitado;

    for (int i = 0; i < 100; i++)
    {
        int k= i+1;
        N[k] = N[i]/2;
    }

    for (int i = 0; i < 100; i++)
    {
        printf("%f ",N[i]);
    
    }
}


// Faça um programa que leia um vetor N[20]. Troque a seguir, o primeiro elemento
// com o último, o segundo elemento com o penúltimo, etc., até trocar o 10º com o 11º.
// Mostre o vetor modificado

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));

    int vetor[20];
    int contador = 20;
    int armazem = 0;

    for (int i = 0; i < 20; i++)
    {
        vetor[i] = rand()%20;
        printf("%d ", vetor[i]);
    }


    for (int i = 0; i < contador; i++)
    {
        armazem = vetor[i];
        vetor[i] = vetor[contador];
        vetor[contador] = armazem;
        contador--;
    }

    printf("\n");

    for (int i = 0; i < 20; i++)
    {
        printf("%d ", vetor[i]);
    }
    
    
    
}
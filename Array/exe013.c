// Faça um programa que leia um vetor N[20]. Troque a seguir, o primeiro elemento
// com o último, o segundo elemento com o penúltimo, etc., até trocar o 10º com o 11º.
// Mostre o vetor modificado

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));

    int vetor[20];
    int contador = 19;
    int armazem = 0;
    int a= 1;

    for (int i = 0; i < 20; i++)
    {
        vetor[i] = a;
        printf("%d ", vetor[i]);
        a++;
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
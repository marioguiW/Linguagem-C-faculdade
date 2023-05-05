// Criar dois vetores A e B cada um com 10 elementos inteiros. Construir um vetor C
// de mesmo tipo e tamanho, obedecendo as seguintes regras de formação:
// a. Ci deverá receber 1 quando Ai for maior que Bi;
// b. Ci deverá receber 0 quando Ai for igual a Bi;
// c. Ci deverá receber -1 quando Ai for menor que B

#include <stdio.h>
int main(){

    int A[10];
    int B[10];
    int C[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite os valores da lista A : ");
        scanf("%i", &A[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Digite os valores da lista B : ");
        scanf("%i", &B[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        if (A[i] > B[i])
        {
            C[i] = 1;
        }
        else if(A[i] == B[i])
        {
            C[i] = 0;
        }
        else if(A[i] < B[i])
        {
            C[i] = -1;
        }
    } 
    printf("LISTA A !!\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%i ", A[i]);
    }

    printf("\n");
    printf("LISTA B !!\n");
    for (int i = 0; i < 10; i++)
   

    {
        printf("%d ", B[i]);
    }

    printf("\n");
    printf("LISTA C !!\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", C[i]);
    }
}

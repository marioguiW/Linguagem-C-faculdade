// Criar uma matriz 3X2, contendo números inteiros e fazer a multiplicação da mesma
// por 11, após mostrar na tela.

#include <stdio.h>
#include <string.h>

int main(){

    int matriz[3][2];

    for (int coluna = 0; coluna < 2; coluna++)
    {
        for (int linha = 0; linha < 3; linha++)
        {
            printf("Digite um numero : ");
            scanf("%d" , &matriz[linha][coluna]);
            fflush(stdin);
        }   
        printf("\n");
    }

    for(int coluna = 0; coluna < 2; coluna++)
    {
        for (int linha = 0; linha < 3; linha++)
        {
            matriz[linha][coluna] = (matriz[linha][coluna] * 11);
        }
        
    }

    for (int coluna = 0; coluna < 2; coluna++)
    {
        for (int linha = 0; linha < 3; linha++)
        {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
    

    


    
}
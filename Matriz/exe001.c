// Criar uma matriz 4X4, contendo números inteiros digitados pelo usuário, e
// apresentar na tela a soma de todos

#include <stdio.h>
#include <string.h>

int main(){
    
    int matriz[4][4];
    int soma = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite um numero : ");
            printf("\n");
            scanf("%d", &matriz[i][j]);
            fflush(stdin);
            soma = soma + matriz[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
        
    }

    printf("\n A soma eh : %d", soma);
    

    

}
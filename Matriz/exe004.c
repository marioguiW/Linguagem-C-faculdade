// Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do
// maior valor.

#include <stdio.h>
#include <string.h>

int main(){

    int matriz[4][4];
    int maior = 0;
    int linha;
    int coluna;

    for (int x = 0; x < 4; x++)
    {
        for(int y = 0; y < 4; y++)
        {
            printf("Digite um numero : ");
            scanf("%d", &matriz[x][y]);
            fflush(stdin);
        }
    }

    for (int x = 0; x < 4; x++)
    {
        for(int y = 0; y < 4; y++)
        {
            printf("%d ", matriz[x][y]);
            if (matriz[x][y] > maior)
            {
                maior = matriz[x][y];
                linha = x;
                coluna = y;
            }
        }
        printf("\n");
    }

    printf("O maior numero eh %d, linha %d, coluna %d", maior, linha, coluna);
}
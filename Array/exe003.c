// 3. Criar um vetor de 8 posições contendo números inteiros digitados pelo usuário, e
// apresenta-los na tela de com ordem inversa da digitação.

#include <stdio.h>

int main(){
    int lista [8];

    for (int i = 0; i < 8; i++)
    {
        printf("Digite um numero :");
        scanf("%d", &lista[i]);
    }
    
    printf("%d\n", lista[7]);
    printf("%d\n",lista[6]);
    printf("%d\n",lista[5]);
    printf("%d\n",lista[4]);
    printf("%d\n",lista[3]);
    printf("%d\n",lista[2]);
    printf("%d\n",lista[1]);
    printf("%d\n",lista[0]);

}
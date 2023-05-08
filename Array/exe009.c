// Faça um programa que leia um vetor de 5 posições para números reais e, depois,
// um código inteiro. Se o código for zero, finalize o programa; se for 1, mostre o vetor
// na ordem direta; se for 2, mostre o vetor na ordem inversa. Caso, o código for
// diferente de 1 e 2 escreva uma mensagem informando que o código é inválido

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int escolha;
    int desejo;
    int vetor[5];
    printf("-----------------------");

    for (int i = 0; i < 5; i++)
    {   
        vetor[i] = rand()%10;
    }
    do{
    
    printf("-----------------------\n");
    printf("\n");
    printf("Como deseja visualizar a lista?\n0 - Finaliza o Porgrama\n1 - Ordem Direta\n2 - Ordem Inversa\n");
    scanf("%d", &escolha);
    
    if (escolha == 1)
    {
        for (int i = 0; i < 5; i++)
        {
            printf("%d ",vetor[i]);
        }
    }else if(escolha == 2)
    {
        for (int i = 4; i > -1; i--)
        {
            printf("%d",vetor[i]);
        }
        
    }else{
        printf("Fim código...");
    }
    
    printf("Deseja ver novamente ? s- sim n-nao\n");
    scanf("%d",&desejo);

    }while (desejo =='s');

}
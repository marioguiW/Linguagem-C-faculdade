// 1. Solicitar ao usuário que escolha um número para que seja exibida a sua tabuada na tela.
#include<stdio.h>
int main(){
    
    int total,numTabuada;
    int vezes = 0;
    
    printf("Valor : ");
    scanf("%i",&numTabuada);

    forint (i=0; i<11; i++){

        total= numTabuada*vezes;
        printf("%i x %i = %i\n",numTabuada,vezes,total);
        vezes++;
        
    }
}


// A série de Fibonacci é uma sequência de termos que tem como os 2 primeiros
// termos, respectivamente, os números 0 e 1. A partir daí, os demais termos são
// formados seguindo uma certa regra. A série de Fibonacci pode ser vista a seguir:
// 0 1 1 2 3 5 8 13 21...
// Descubra a regra que gera a sequência da série de Fibonacci e escreva um
// algoritmo que gere os primeiros n (informado pelo usuário) números termos desta
// série e calcula e escreve a soma destes termos

#include <stdio.h>

int main(){
    
    int numero1,numero2,total;

    printf("Digite dois numeros para comecar a sua serie de Fibonacci :\n");
    scanf("%i %i");

    for (int i = 0; i < 20; i++)
    {
        total=numero1+numero2;

        printf("%i ", numero1);
        printf("%i ", numero2);
        printf("%i ", total);


    }
    

}
// Faça um programa em C que calcula e escreve a seguinte soma:
// soma = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50

#include <stdio.h>
int main(){

    int divisor =1, numero, total,armazenador =0;

    for (int i = 0; i < 100; i++)
    {
        if (i % 2 != 0)
        {
            total = i / divisor;
            armazenador = armazenador + total;
            divisor++;
        }
    }
    printf("O total foi %i", armazenador);
    
}
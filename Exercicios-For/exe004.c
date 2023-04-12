// Criar um programa que leia os limites inferior e superior e apresentar na tela todos
// os números naturais presentes no intervalo.

#include <stdio.h>
int main(){

    int valorInf,valorSup;

    printf("Digite um valor para o limite inferior :\n");
    scanf("%i",&valorInf);

    printf("Digite um valor para o limimte superios :\n");
    scanf("%i",&valorSup);

    for (int i=(valorInf+1); i < valorSup; i++)
    {
        printf("%i\n", i);
    }
}
    
// Escreva um subprograma que receba um texto e devolva o mesmo texto com todas as
// suas letras duplicadas. Exemplo:
// texto recebido:
// INSTITUTO DE INFORMATICA
// texto devolvido:
// IINNSSTTIITTUUTTOO DDEE IINNFFOORRMMAATTIICCAA

#include <stdio.h>

int main(){

    char palavra[20];

    printf("Digite uma palavra/frase : \n");
    gets(palavra);

    for (int i = 0; palavra[i] != '\0'; i++)
    {
        printf("%c%c", palavra[i], palavra[i]);
    }
    
}
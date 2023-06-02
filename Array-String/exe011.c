//  Faça um programa que leia n linhas e as decodifique utilizando a tabela de substituição
// de caracteres a seguir. Imprima, para cada linha lida, a linha no formato original e sua
// decodificação.
// Caractere existente z y w k b d f
// Caractere a ser substituído A E O T M N P
// Testar o programa com as linhas a seguir:
// Kydhz kybfw fzrz w quy y’ bzis ibfwrkzdky fzrz vwcy

#include <stdio.h>
#include <string.h>

int main(){

    char frase[60] = "Kydhz kybfw fzrz w quy y bzis ibfwrkzdky fzrz vwcy";

    int tamanho = strlen(frase);

    for (int i = 0; i <= tamanho ; i++)
    {
        printf("%c", frase[i]);
    }

    printf("\n");

    for (int i = 0; i < tamanho; i++)
    {
        switch (frase[i])
        {
        case 'z':
            frase[i] = 'a';
            break;
        case 'y':
            frase[i] = 'e';
            break;
        case 'w':
            frase[i] = 'o';
            break;
        case 'k':
            frase[i] = 't';
            break;
        case 'K':
            frase[i] = 't';
            break;
        case 'b':
            frase[i] = 'm';
            break;
        case 'd':
            frase[i] = 'n';
            break;
        case 'f':
            frase[i] = 'p';
            break;
        }
        printf("%c", frase[i]);
    }
    
    
}
//  Faça um programa que leia n linhas e as decodifique utilizando a tabela de substituição
// de caracteres a seguir. Imprima, para cada linha lida, a linha no formato original e sua
// decodificação.
// Caractere existente z y w k b d f
// Caractere a ser substituído A E O T M N P
// Testar o programa com as linhas a seguir:
// Kydhz kybfw fzrz w quy y’ bzis ibfwrkzdky fzrz vwcy
// Kydhz kybfw fzrz yskzr cwb zquylys z quyb vwcy zbz.
// Kydhz kybfw fzrz swdhzr.
// Kydhz kybfw fzrz vivyr ub swdhw...

#include <stdio.h>
#include <string.h>

int main(){

    char frase[60] = "Kydhz kybfw fzrz w quy y bzis ibfwrkzdky fzrz vwcy";
    char frase2[60] = "Kydhz kybfw fzrz yskzr cwb zquylys z quyb vwcy zbz.";
    char frase3[60] = "Kydhz kybfw fzrz swdhzr.";
    char frase4[60] = "Kydhz kybfw fzrz vivyr ub swdhw...";

    int tamanho = strlen(frase);
    int tamanho2 = strlen(frase2);
    int tamanho3 = strlen(frase3);
    int tamanho4 = strlen(frase4);

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

    printf("\n");
    
    
    for (int i = 0; i < tamanho2; i++)
    {
        switch (frase2[i])
        {
        case 'z':
            frase2[i] = 'a';
            break;
        case 'y':
            frase2[i] = 'e';
            break;
        case 'w':
            frase2[i] = 'o';
            break;
        case 'k':
            frase2[i] = 't';
            break;
        case 'K':
            frase2[i] = 't';
            break;
        case 'b':
            frase2[i] = 'm';
            break;
        case 'd':
            frase2[i] = 'n';
            break;
        case 'f':
            frase2[i] = 'p';
            break;
        }
        printf("%c", frase2[i]);
    }

    printf("\n");
    for (int i = 0; i < tamanho3; i++)
    {
        switch (frase3[i])
        {
        case 'z':
            frase3[i] = 'a';
            break;
        case 'y':
            frase3[i] = 'e';
            break;
        case 'w':
            frase3[i] = 'o';
            break;
        case 'k':
            frase3[i] = 't';
            break;
        case 'K':
            frase3[i] = 't';
            break;
        case 'b':
            frase3[i] = 'm';
            break;
        case 'd':
            frase3[i] = 'n';
            break;
        case 'f':
            frase3[i] = 'p';
            break;
        }
        printf("%c", frase3[i]);
    }

    printf("\n");
    for (int i = 0; i < tamanho4; i++)
    {
        switch (frase4[i])
        {
        case 'z':
            frase4[i] = 'a';
            break;
        case 'y':
            frase4[i] = 'e';
            break;
        case 'w':
            frase4[i] = 'o';
            break;
        case 'k':
            frase4[i] = 't';
            break;
        case 'K':
            frase4[i] = 't';
            break;
        case 'b':
            frase4[i] = 'm';
            break;
        case 'd':
            frase4[i] = 'n';
            break;
        case 'f':
            frase4[i] = 'p';
            break;
        }
        printf("%c", frase4[i]);
    }
    
    
}
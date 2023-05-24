// Solicite ao usuário a digitação de uma palavra e verifique se ela é um palíndromo (ex.:
// ovo, osso).

#include <stdio.h>

int main(){

    char palavra[20];
    char palavraInvertida[20];
    int tamanho= 0;
    int invertida = 0;
    int palindromo;

    printf("Digite a palavra para saber se eh um palindromo : \n");
    gets(palavra);

    while (palavra[tamanho] != '\0')
    {
        tamanho++;
    }
    
    int j = 0;

    for (int i = tamanho - 1; i >= 0; i--) {
        palavraInvertida[j] = palavra[i];
        j++;
    }   


    palavraInvertida[j] = '\0';

    for (int i = 0; i < tamanho -1; i++)
    {
        if (palavra[i] != palavraInvertida[i])
        {
            palindromo = 0;
            break;
        }
    }
    
    if (palindromo)
    {
        printf("A palavra %s eh um palindromo!", palavra);
    }else{
        printf("A palavra %s nao eh um palindromo!", palavra);
    }
    
}
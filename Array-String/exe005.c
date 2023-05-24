// Solicite ao usuário a digitação de uma palavra e verifique se ela é um palíndromo (ex.:
// ovo, osso).

#include <stdio.h>

int main(){

    char palavra[20];
    char palavraInvertida[20];
    int inverter = 0;

    printf("Digite a palavra para saber se eh um palindromo : \n");
    gets(palavra);

    for (int i = 19; i > -1; i--)
    {
        int j = 0;
        while (j == 0)
        {
            palavraInvertida[inverter] = palavra[i];
            j = 1;
        }
    }

    printf("%s", palavraInvertida);
    
    // if (palavraInvertida == palavra)
    // {
    //     printf("Esta palavra eh um Palindromo!");
    // }else{
    //     printf("Esta palavra NAO eh um Palindromo!");
    // }
    

}
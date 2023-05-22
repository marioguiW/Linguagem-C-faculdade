// Solicite ao usuário a digitação de uma palavra e verifique se ela é um palíndromo (ex.:
// ovo, osso).

#include <stdio.h>

int main(){

    char palavra[20];
    char palavraInvertida[20];

    printf("Digite a palavra para saber se eh um palindromo : \n");
    gets(palavra);

    for (int i = 0; palavra[i] == "\0"; i++)
    {
        for (int j = 0; j < i; i--)
        {
            
        }
        
    }
    
    

}
// Crie uma função que recebe uma string e um caractere, e retorne o número de vezes
// que esse caractere aparece na string.

#include <stdio.h>

int main(){

    char caractere;
    char palavra[20];
    int contador= 0;

    printf("Digite um palavra : \n");
    gets(palavra);

    printf("Digite qual caractere deseja analisar na palavra : \n");
    scanf("%c", &caractere);

    for (int i = 0; palavra[i] != '\0'; i++)
    {
        if (palavra[i] == caractere)
        {
            contador++;
        }
        
    }

    printf("A letra %c aparece %d na palavra %s", caractere, contador, palavra);
}
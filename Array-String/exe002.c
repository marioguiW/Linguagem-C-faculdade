// Solicite ao usuário que digite uma palavra e retorne quantas vogais existem nela.

#include <stdio.h>

int main(){
    char palavra[20];
    int contador = 0;

    printf("Digite um palavra : \n");
    gets (palavra);
    fflush(stdin);

    for (int i = 0; palavra[i] != '\0'; i++)
    {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
        {
            contador++;
        }
        else{

        }
        
    }

    printf("A palavra %s tem %i vogais!", palavra, contador);
    


}
// Solicite ao usuário a digitação de seu nome completo e informe quantos caracteres o
// mesmo contém. Faça essa contagem desconsiderando os espaços e sem a utilização de
// funções específicas.]

#include <stdio.h>

int main(){

    char nome[30];
    int numeros_nome = 0;

    printf("Digite o seu nome completo : \n");
    gets(nome);

    for (int i = 0; i < 30; i++)
    {
        if (nome[i] != NULL)
        {
            numeros_nome++;
        }
        
    }
    
    printf("Ha %d letras no nome %s", numeros_nome, nome);

}
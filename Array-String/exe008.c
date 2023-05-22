// Implemente a função ultimo_nome que recebe como parâmetro uma cadeia de
// caracteres com o nome completo de uma pessoa e retorna o último nome encontrado

#include <stdio.h>

char ultimo_nome(char nome_completo)
{
    for (int i = 29; nome_completo != ' '; i++)
    {
        printf("%d", i);
    }
    
}

int main(){
    
    char nome_completo[30];

    printf("Digite o seu nome completo : \n");
    gets(nome_completo);

    ultimo_nome(nome_completo);
    return 0;
}
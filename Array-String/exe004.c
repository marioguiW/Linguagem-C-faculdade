// Solicite ao usuário o seu endereço, e identifique se ele mora em uma rua, avenida,
// travessa ou BR. 

#include <stdio.h>

int main(){

    char adress[30];
    char adress_first_word[10];
    char rua[10] = {"rua"};
    char avenida[10] = {"avenida"};
    char travessa [10] = {"travessa"};
    char br [10] = {"br"};
    int tamanho_string = 0;
    int veredito = 1;

    printf("Digite o seu endereco : \n");
    gets(adress);

    for (int i = 0; adress[i] != ' '; i++)
    {
        tamanho_string++;
    }

    tamanho_string = tamanho_string - 1;

    for (int i = 0; i <= tamanho_string; i++)
    {
        adress_first_word[i] = adress[i];
    }
    
    for (int i = 0; i < 10; i++)
    {
        if (adress_first_word[i] !=  rua[i])
        {
            veredito = 0;
            break;
        }
    }
    
    
    
}
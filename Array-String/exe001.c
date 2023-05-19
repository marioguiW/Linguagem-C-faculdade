// Solicite ao usuário que informe uma palavra. O programa deve informar a existência de
// uma letra dentro desta palavra. (a letra que será procurada é informada pelo usuário
// também)

#include <stdio.h>

int main(){

    char palavra[20];
    char letra;
    int encontrada = 0;

    printf("Digite uma palavra : \n");
    fflush(stdin);
    scanf("%s", &palavra);

    printf("\n");

    fflush(stdin);
    printf("Digite a letra que deseja verificar : \n");
    scanf("%c", &letra);

    for (int i = 0; palavra[i] != '\0'; i++)
    {
        if (letra == palavra[i])
        {
            encontrada = 1;
            break;
        }    
    }

    printf("%i", encontrada);

    if (encontrada == 1)
    {
        printf("A letra '%c' esta dentro da palavra '%s' !", letra, palavra);
    }else{
        printf("A letra '%c' nao esta dentro da palavra '%s' !", letra, palavra);

        printf("Tente outra letra : \n");
        scanf("%c",&letra);
    }   
}
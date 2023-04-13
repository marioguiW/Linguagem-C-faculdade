// Entrar com um número e imprimir todos os seus divisores.

#include <stdio.h>
int main(){
    int numero;

    printf("Digite um numero :\n");
    scanf("%i", &numero);
    printf("\n");
    
    for (int i = 1; i < numero; i++)
    {

        if (numero % i == 0)
        {
            printf("%i\n", i);
        }
        
    }
    
}
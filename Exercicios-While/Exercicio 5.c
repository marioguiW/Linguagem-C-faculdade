#include <stdio.h>
int main(int argc, char const *argv[])
{
    int valor = 0;
    int vezes_controle = 1;

    printf("Digite um numero para saber a sua tabuada : ");
    scanf("%d", &valor);
    
    while(vezes_controle <= 10){

        int tabuada_resultado = valor * vezes_controle;

        printf("O resultado de %d vezes %d eh %d\n", valor, vezes_controle, tabuada_resultado);
        
        vezes_controle = vezes_controle + 1;
    }
    return 0;
}

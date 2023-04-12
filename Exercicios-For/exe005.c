// Criar um programa que leia a quantidade de números que se deseja digitar para
// que possa ser impresso o maior e o menor número digitados. Não suponha que
// todos os números lidos serão positivos.

#include <stdio.h>
int main(){

    int qtdNumeros, numeros;
    int maiorNumero = 0;
    int menorNumero = 0;

    printf("Quantos numeros deseja digitar?\n");
    scanf("%i", &qtdNumeros);

    printf("Digite um numero :\n");
    scanf("%i",&numeros);

    maiorNumero = numeros;
    menorNumero = numeros;


    for (int i = 1; i < qtdNumeros; i++)
    {
        printf("Digite um numero :\n");
        scanf("%i",&numeros);

        if (numeros > maiorNumero)
        {
            maiorNumero = numeros;
        }else if(numeros > menorNumero){
            menorNumero = numeros;
        }
    }

    printf("Maior numero foi %i\n", maiorNumero);
    printf("Menor numero foi %i\n", menorNumero);
        
    
    
}
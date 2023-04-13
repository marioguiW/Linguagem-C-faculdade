// Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à
// soma de seus divisores positivos diferentes de n. Construa um programa em C
// que verifica se um dado número é perfeito. Ex: 6 é perfeito, pois 1+2+3 = 6. 

#include <stdio.h>
int main(){

    int numero;
    
    printf("Digite um numero para saber se ele e perfeito :\n");
    scanf("%i", &numero);

    for (int i = numero; i <= numero; i--)
    {
        if (numero / i == 0)
        {
            /* code */
        }
        
    }
    
}
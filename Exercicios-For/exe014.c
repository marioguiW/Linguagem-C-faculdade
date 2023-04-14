// Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à
// soma de seus divisores positivos diferentes de n. Construa um programa em C
// que verifica se um dado número é perfeito. Ex: 6 é perfeito, pois 1+2+3 = 6. 

#include <stdio.h>
int main(){

    int numero, total=0;
    
    printf("Digite um numero para saber se ele e perfeito :\n");
    scanf("%i", &numero);

    for (int i = numero; i > 0; i--)
    {
        if (numero % i == 0)
        {
            total = total + i;

        }
        
    }
    total = total - numero;
    if (total == numero)
    {
        printf("Este numero eh perfeito!");
    }
    else
    {
        printf("Este numero nao eh perfeito!");
    }
}
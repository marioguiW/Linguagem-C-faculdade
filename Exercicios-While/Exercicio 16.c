#include <stdio.h>
int main(){
    
    int numero;
    int contador = 0;
    
    printf("Digite um numero para saber se ele eh primo ou nao : \n");
    scanf("%i", &numero);

    if (numero % 2 != 0 || numero == 2)
    {
        printf("Este numero eh primo!");
    }else{
        printf("Este numero nao eh primo!");
    }
}
// Criar um programa que leia um número que será o limite superior de um intervalo
// e imprimir todos os números impares menores que esse número

#include <stdio.h>
int main(){

    int numero;
    int numerofixo;
    int impar;

    printf("Digite um numero : \n");
    scanf("%i", &numero);
    numerofixo=numero;

    for (int i=0; i<numerofixo ; i++)
    {
        if (numero % 2 != 0){
            printf("%i\n",numero);
            numero--;
        }else{
            numero--;
        }
    
    }
}

/*  printf("Digite um numero : \n");
    scanf("%i", &numero);
    
    for (int i=0; i<numerofixo ; i++)
    {
        if (i % 2 !=0){
            printf("%i\n", i);
        }
    }
}*/
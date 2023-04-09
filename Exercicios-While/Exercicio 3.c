#include <stdio.h>

int main(int argc, char const *argv[])
{
    int valor = 0;
    int repeticao = 1;
    int total = 0;

    while(repeticao <= 10){
        printf("Digite os valores para serem somados : ");
        scanf("%d", &valor);
        repeticao = repeticao + 1;
        total = total + valor;
    }
    int media = total / 10;
    printf("A soma de todos os valores foi %d",media);
    return 0;
}

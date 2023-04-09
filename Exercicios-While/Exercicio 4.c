#include <stdio.h>
int main()
{

    int valor = 0;
    int quantidade = 0;
    int maior = 0;
    while (quantidade <= 9)
    {

        printf("Digite um valor : ");
        scanf("%d", &valor);
        quantidade++;

        if (valor > maior)
        {
            maior = valor;
        }
    }
    printf("%d", maior);
}
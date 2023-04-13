// O número 3025 possui a seguinte característica: 30 + 25 = 55 -> 55*55 = 3025.
// Fazer um programa para obter todos os números de 4 algarismos com a mesma
// característica do número 3025. 30 Divisor, 25 Resto da divisão

#include <stdio.h>
#include <math.h>

int main(){

    int divisao, restoDivisa,soma;
    
    for (int i = 1000; i < 10000; i++)
    {
        divisao = i / 100;
        restoDivisa = i % 100;
        soma = divisao + restoDivisa;
        if (soma*soma == i)
        {
            printf("%i\n", i);
        }
    }
}
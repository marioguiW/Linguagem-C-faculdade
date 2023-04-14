// .Um determinado material radioativo perde metade de sua massa a cada 50
// segundos. Dada a massa inicial, em gramas, fazer um algoritmo que calcule o
// tempo necessário para que essa massa se torne menor que 0,5 grama. O
// programa em C deve escrever a massa inicial, a massa final e o tempo calculado
// em horas, minutos e segundos.

#include <stdio.h>
int main(){

    float massa, calc;

    printf("Digite a massa em gramas de um material radioativo :\n");
    scanf("%f", &massa);

    for (int i = massa; i > 0.5 ; i--)
    {
        calc = massa / 2;
    }
    

}